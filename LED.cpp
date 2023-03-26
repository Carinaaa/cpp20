#include <cstdint>
#include <iostream>
#include "mcal_reg.h"

// targets a 8-bit microcontroller
//		Microcontroller
//	|					R1	  D1
//	|	portb.5 |-17-/\/\/\/\-|#>--|
//  |			|	  750Ohm	   |
//  |	portb.4 |-16-			   |
//  |	portb.3 |-15-			  ___
//  |	portb.2 |-14-			   -
//								  GND

class led
{
	//use convenint class-specific typedefs
public: 
	typedef std::uint8_t port_type;
	typedef std::uint8_t bval_type;
	typedef mcal::reg::mcu mcu;

	// the led class constructor
	led(const port_type p,
		const port_type b
		// , mcu m
	) : port(p), bval(b)
		// , my_mcu(m) // uniform initialization syntax
	{
		// set the port pin value to low (mcu specific) before direction set to avoid spikes on I/O pins
		 *reinterpret_cast<volatile bval_type*>(port) = (*reinterpret_cast<volatile bval_type*>(port) & static_cast<bval_type>(~bval));
		//m.portb &= (~bval);
		// set the port pin direction to output
		 *reinterpret_cast<volatile bval_type*>(port - 1U) = (*reinterpret_cast<volatile bval_type*>(port - 1U) | bval); // is calculated from the address of its port data register
		//m.portb |= (bval);
	}

	void toggle() const // including implelementation details directly into the class can improve optimization via "inline"
	{
	//	std::cout << "Volatile casting: port " << *reinterpret_cast<volatile bval_type*>(port) << std::endl;
	//	std::cout << "bval " << bval << std::endl;
		// Toggle the Led via direct memory access
		*reinterpret_cast<volatile bval_type*>(port) = (*reinterpret_cast<volatile bval_type*>(port) ^ bval); // transform a pointer to an int and vice-versa
	//	std::cout << "Volatile casting: port ^= bval" << *reinterpret_cast<volatile bval_type*>(port) << std::endl;
	}
private:
	const port_type port; // 0x25
	const bval_type bval; // 0x20
	//const mcal::reg::mcu my_mcu;
};

namespace
{
	// create led_b5 on portb.5
	const led led_b5 // static instance -> needs to be initialized before main() -> compiler generates an internal subroutine (static initialization mechanism = startup code)
	{
		mcal::reg::portb,
		mcal::reg::bval5,
		//mcal::reg::mcu mcu{ portb, bit_val5 }
	};

	
}
using namespace std;

int main() 
{
	int a{ 3 };
	while(a)
	{
		led_b5.toggle();
		a--;
	}

}


