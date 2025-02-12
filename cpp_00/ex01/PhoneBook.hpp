#pragma once
#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <cstdlib>
#include <string>

std::string	ft_itoa(int nbr);

class Contact {
	private:
		std::string	data[5];
	public:
		enum Field {PHONE_NUMBER, FIRST_NAME, LAST_NAME, NICKNAME, DARKEST_SECRET};

		int	popFields(void);
		int	displayContact();
		std::string getData(int index) const;
};

class PhoneBook {
	private:
		Contact	contacts[8];
		int	size;
		int	size_buffer;
	public:
		PhoneBook() : size(0), size_buffer(0) {}
		int	addContact(const Contact& contact);
		int	displayContactRow(const Contact& contact, int index);
		int	searchContact();
};

#endif