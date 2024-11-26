#include "PhoneBook.hpp"

int	Contact::popFields(void)
{
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

int	Contact::displayContact(void)
{
	for (int i = 0; i < 5; i++)
		std::cout << data[i] << "\n";
	return (0);
}

std::string	Contact::getData(int index) const 
{
	if (index < PHONE_NUMBER || index > DARKEST_SECRET)
		return ("INVALID INDEX");
	return (data[index]);
}