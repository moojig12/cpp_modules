#pragma once
#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

std::string	ft_itoa(int nbr);

class Contact {
	private:
		std::string	data[5];
	public:
		enum Field {PHONE_NUMBER, FIRST_NAME, LAST_NAME, NICKNAME, DARKEST_SECRET};

		int	popFields() {
			std::cout << "Please enter the Phone number of entry: ";
			std::getline(std::cin, data[PHONE_NUMBER]);
			std::cout << "First name: ";
			std::getline(std::cin, data[FIRST_NAME]);
			std::cout << "Last name: ";
			std::getline(std::cin, data[LAST_NAME]);
			std::cout << "Nickname: ";
			std::getline(std::cin, data[NICKNAME]);
			std::cout << "Deepest darkest secret: ";
			std::getline(std::cin, data[DARKEST_SECRET]);
			std::cout << "\n";

			return (1);
		}
		int	displayContact() {
			for (int i = 0; i < 5; i++)
				std::cout << data[i] << "\n";
			return (0);
		}
		std::string getData(int index) const {
			return (data[index]);
		}
};

class PhoneBook {
	private:
		Contact	contacts[8];
		int	size;
	public:
		PhoneBook() : size(0) {}
		int	addContact(const Contact& contact);
		int	displayContactRow(const Contact contact, int index);
		int	searchContact();
};

#endif