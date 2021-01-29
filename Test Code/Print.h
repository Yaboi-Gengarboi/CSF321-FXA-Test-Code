// CS321 Test Code
// Print.h
// Justyn Durnford
// Created on 2021-01-29
// Last updated on 2021-01-29
// Header file defining print functions.

#ifndef PRINT_H_INCLUDED
#define PRINT_H_INCLUDED

#include <concepts>
#include <cstddef>
#include <iostream>
#include <string>

template <std::integral T> void print(T i)
{
	std::cout << std::to_string(i);
}

template <std::integral T> void println(T i)
{
	std::cout << std::to_string(i) << std::endl;
}

template <std::floating_point T> void print(T value)
{
	std::cout << std::to_string(value);
}

template <std::floating_point T> void println(T value)
{
	std::cout << std::to_string(value) << std::endl;
}

template <typename T> void print(T* ptr)
{
	if (ptr == nullptr)
		std::cout << "nullptr";
	else
		std::cout << ptr;
}

template <typename T> void println(T* ptr)
{
	if (ptr == nullptr)
		std::cout << "nullptr" << std::endl;
	else
		std::cout << ptr << std::endl;
}

void print(bool b)
{
	if (b)
		std::cout << "true";
	else
		std::cout << "false";
}

void println(bool b)
{
	if (b)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
}

void print(std::byte b)
{
	std::cout << std::to_integer<unsigned char>(b);
}

void println(std::byte b)
{
	std::cout << std::to_integer<unsigned char>(b) << std::endl;
}

void print(const std::string& str)
{
	std::cout << str;
}

void println(const std::string& str)
{
	std::cout << str << std::endl;
}

#endif // PRINT_H_INCLUDED