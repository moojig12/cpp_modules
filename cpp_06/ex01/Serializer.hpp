#pragma once

#ifndef SERIALIZER_HPP
#define  SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

struct Data {
	std::string	str;
	int			num;
};

class Serializer {
	Serializer();
	~Serializer();
	Serializer(const Serializer &);
	Serializer &operator=(const Serializer &);

  public:
	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);
};

#endif