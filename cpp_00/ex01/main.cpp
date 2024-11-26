#include "phonebook.hpp"

/* std::string	convert_toupper(std::string& string)
{
	for (char& c : string)
		c = std::toupper(c);
	return (string);
}
 */
int	main(void)
{
	PhoneBook phonebook;
	std::string	input;

	// Take input
	while (1)
	{
		std::cout << "Select operation: ADD, SEARCH, EXIT\nInput: ";
		std::getline(std::cin, input);
		// convert_toupper(input);
		if (input == "ADD")
		{
			Contact newContact;
			// Prompt user to give additional info
			newContact.popFields();
			if (phonebook.addContact(newContact))
				std::cout << "New entry!\n";
		}
		else if (input == "SEARCH")
		{
			phonebook.searchContact();
		}
		else if (input == "EXIT")
			break ;
		else
		{
			input.erase();
			std::cout << "Invalid operation\n";
		}
	}
}