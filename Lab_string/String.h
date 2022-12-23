#pragma once
#include <cstddef>

class String {
private:
	std::size_t size;
	std::size_t capasity;
	char* pointer;
public:
	String();
	String(const char* str);
	String(String&& str) noexcept;
	~String();
	String& operator=(const char* str);
	String& operator=(String&& str) noexcept;
	char& operator[](std::size_t pos);
	String& insert(std::size_t pos, const char* str);
	int compare(const String& str);
	String(const String& str, size_t pos, size_t len);
	std::size_t find(const String& str, size_t pos = 0) const;
};