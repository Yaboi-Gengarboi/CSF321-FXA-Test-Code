// CS321 Test Code
// ByteBuffer.cpp
// Justyn Durnford
// Originally presented by Dr. Orion Lawlor on 2021-01-27
// File created on 2021-01-29
// Last updated on 2021-01-31
// Source file for the ByteBuffer class.

#include "ByteBuffer.h"
using std::byte;
using std::size_t;

#include <stdexcept>
using std::invalid_argument;

ByteBuffer::ByteBuffer(ByteBuffer&& other) noexcept
{
	start_ = other.start_;
	length_ = other.length_;

	other.start_ = nullptr;
}

ByteBuffer::ByteBuffer(byte* start, size_t length)
{
	start_ = start;
	length_ = length;
}

ByteBuffer& ByteBuffer::operator = (ByteBuffer&& other) noexcept
{
	start_ = other.start_;
	length_ = other.length_;

	other.start_ = nullptr;
	return *this;
}

size_t ByteBuffer::length() const
{
	return length_;
}

byte* ByteBuffer::begin()
{
	return start_;
}

const byte* ByteBuffer::begin() const
{
	return (const byte*)(start_);
}

byte* ByteBuffer::end()
{
	return start_ + length_;
}

const byte* ByteBuffer::end() const
{
	return (const byte*)(start_ + length_);
}

ByteBuffer ByteBuffer::split(size_t n)
{
	if (n >= length_)
	{
		throw invalid_argument("Memberfunction ByteBuffer::split(std::size_t n) has thrown an exception: n >= ByteBuffer::length_");
	}

	size_t oldLength = length_;
	length_ = n;

	ByteBuffer buffNew(end(), oldLength - n);
	return buffNew;
}