#include <cstdint>

namespace mcal
{
	namespace reg
	{
		// the address of port B
		constexpr std::uint8_t portb{0x25U};

		// The value of bit0 through bit 7
		constexpr std::uint8_t bval0{ 1U }; // 00000001
		constexpr std::uint8_t bval1{1U << 1U}; // 2^1 is 1
		constexpr std::uint8_t bval2{1U << 2U}; // 2^2 is 1
		constexpr std::uint8_t bval3{1U << 3U};
		constexpr std::uint8_t bval4{1U << 4U};
		constexpr std::uint8_t bval5{1U << 5U};
		constexpr std::uint8_t bval6{1U << 6U};
		constexpr std::uint8_t bval7{1U << 7U}; // Note: static constant class member is considered also compile-time constant
	
		enum bit_val
		{
			bit_val0,
			bit_val1,
			bit_val2,
			bit_val3,
			bit_val4,
			bit_val5,
			bit_val6,
			bit_val7
		
		};
		struct mcu
		{
			std::uint8_t portb{ 0x25U };
			bit_val bit_val{};
		};
	
	}
}