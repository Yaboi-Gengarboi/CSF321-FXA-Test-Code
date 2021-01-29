// CS321 Test Code
// ByteBuffer.h
// Justyn Durnford
// Originally presented by Dr. Orion Lawlor on 2021-01-27
// File created on 2021-01-27
// Last updated on 2021-01-27
// Header file for the ByteBuffer class.

#ifndef BYTEBUFFER_H_INCLUDED
#define BYTEBUFFER_H_INCLUDED

#include <cstddef>

class ByteBuffer
{
	std::byte* start_ = nullptr;
	std::size_t length_ = 0;

	public:

	// Default constructor.
	ByteBuffer() = default;

	// Copy constructor.
	ByteBuffer(const ByteBuffer& other) = default;

	// Move constructor.
	ByteBuffer(ByteBuffer&& other) noexcept;

	// Primary constructor.
	ByteBuffer(std::byte* start, std::size_t length);

	// Copy assignment operator.
	ByteBuffer& operator = (const ByteBuffer& other) = default;

	// Move assignment operator.
	ByteBuffer& operator = (ByteBuffer&& other) noexcept;

	// Destructor.
	~ByteBuffer() = default;

	// Returns a copy of the member variable length_.
	std::size_t length() const;

	std::byte* begin();

	const std::byte* begin() const;

	std::byte* end();

	const std::byte* end() const;
};

ByteBuffer ByteBufferSplit(ByteBuffer buffIn, std::size_t n);

#endif // BYTEBUFFER_H_INCLUDED