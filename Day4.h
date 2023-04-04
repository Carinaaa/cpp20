#pragma once
#include <cstdint>
/*
*/

template<const std::uint32_t N>
struct factorial {
	// Multiply N * (N - 1U) with template recursion
	static constexpr std::uint32_t value = N * factorial<N - 1U>::value;
};
template<>
struct factorial<0U> {
	static constexpr std::uint32_t value = 1U;
};
