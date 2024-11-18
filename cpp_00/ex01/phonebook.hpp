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
		
		Contact(int	index) : data(6) {
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

			std::string index_str = std::to_string(index);
			data[INDEX] = index_str;
		}

		int	displayContactRow(int index) {
			int	buffer;

			buffer = data[INDEX].length();

			if (buffer > 10)
				buffer = 10;

			for (int i = 0 ; i < buffer; i++)
				std::cout << " ";
			std::cout << data[INDEX];

			return (0);
		}
};

class PhoneBook {
	public:
		std::vector<Contact>	contacts;

		int	addContact(const Contact& contact) {
			if (contacts.size() < 8) {
				contacts.push_back(contact);
			}
			else {
				contacts.erase(contacts.begin());
			}
			return (1);
		}
		int	searchContact() {
			std::cout << "     Index|First name| Last name| Nickname\n";
			// Passing down contacts row by row
			for (int i = 1; i < (int)contacts.size(); i++)
			{
				contacts[i - 1].displayContactRow(i);
			}
			std::cout << "\n";
			return (1);
		}
};

#endif