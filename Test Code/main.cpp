// CS321 Test Code
// main.cpp
// Justyn Durnford
// Created on 2021-01-29
// Last updated on 2021-01-31
// Main file for this project.

#include "ByteBuffer.h"
#include "Print.h"

#include <cstddef>
using std::byte;
using std::size_t;
using std::to_integer;

#include <cstring>
using std::strlen;

#include <utility>
using std::move;

int main()
{
	const char* str = "Hello, world!";

	ByteBuffer bb1((byte*)(str), strlen(str));
	ByteBuffer bb2 = bb1.split(6);

	byte* ptr1 = bb1.begin();
	byte* ptr2 = bb2.begin();

	const size_t s1 = bb1.length();
	const size_t s2 = bb2.length();
	println(s2);

	for (size_t i = 0; i < s1; ++i)
	{
		print(ptr1);
		print(": ");
		println(*ptr1);
		++ptr1;
	}

	for (size_t i = 0; i < s2; ++i)
	{
		print(ptr2);
		print(": ");
		println(*ptr2);
		++ptr2;
	}

	return 0;
}