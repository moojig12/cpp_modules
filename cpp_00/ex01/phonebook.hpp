#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include <vector>

class Contact {
	private:
		std::vector<std::string>	data;
	public:
		enum Field {PHONE_NUMBER, FIRST_NAME, LAST_NAME, NICKNAME, DARKEST_SECRET, INDEX};
		
		Contact() : data(5) {
			std::cout << "Please enter the Phone number of entry: ";
			std::cin >> data[PHONE_NUMBER];
			std::cout << "First name: ";
			std::cin >> data[FIRST_NAME];
			std::cout << "Last name: ";
			std::cin >> data[LAST_NAME];
			std::cout << "Nickname: ";
			std::cin >> data[NICKNAME];
			std::cout << "Deepest darkest secret: ";
			std::cin >> data[DARKEST_SECRET];
			std::cout << "\n";
		}

		void setIndex(int index) {
			if (index < 0 || index > 5)
				return ;
			std::string	index_string = std::to_string(index + 1);
			data[index] = index_string;
		}

		int	displayContactRow(int index) {
			int	buffer = data[index].length();

			std::cout << buffer << "Buffer size";
			for (int j = 0; j < 5; j++)
			{
				std::cout << data[j];
			}

			return (0);
		}
};

class PhoneBook {
	private:
		std::vector<Contact>	contacts;
	public:

		int	addContact(const Contact& contact);
		int	searchContact();
};

#endif