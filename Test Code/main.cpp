// CS321 Test Code
// main.cpp
// Justyn Durnford
// Created on 2021-01-29
// Last updated on 2021-01-29
// Main file for this project.

#include "ByteBuffer.h"
#include "Print.h"

#include <cstddef>
using std::byte;
using std::size_t;
using std::to_integer;

#include <utility>
using std::move;

int main()
{
	const char* str = "Hello";
	byte* ptr = (byte*)(str);
	ByteBuffer bb(ptr, 5);

	const size_t s = bb.length();
	for (size_t i = 0; i < s; ++i)
	{
		ptr = bb.begin() + i;
		print(*ptr);
	}

	return 0;
}