#include "phonebook.hpp"

int	PhoneBook::addContact(const Contact& contact)
{
	if (size > 8)
	{
		contacts[0] = contact;
		size = 1;
	}
	contacts[size] = contact;
	size++;
	return (1);
}

int	PhoneBook::displayContactRow(const Contact contact, int index) {
	std::string	data;
	int	buff;
	int	i;

	i = 0;
	for (int j = 0; j < 4; j++)
	{
		if (j != 0)
			data = contact.getData(j);
		else
			data = ft_itoa(index + 1);
		buff = data.size();
		if (buff < 10)
		{
			for (int i = 0; i < 10 - buff; i++)
				std::cout << " ";
		}
		while (i < buff)
		{
			if (buff > 10 && i == 9)
			{
				std::cout << ".";
				break ;
			}
			else
				std::cout << data[i];
			i++;
		}
		i = 0;
		std::cout << "|";
	}
	std::cout << "\n";
	return (0);
	}

int	PhoneBook::searchContact()
{
	std::string	input;
	int			input_int;
	std::cout << "     Index|First name| Last name| Nickname |\n";
	// Passing down contacts row by row
	int	i = 0;
	while (i < size) {
		displayContactRow(contacts[i], i);
		i++;
	}
	std::cout << "\n";
	std::cin >> input;
	input_int = atoi(input.c_str());

	if (input_int > size)
	{
		std::cout << "Invalid index\n";
		return (0);
	}
	else if (input_int < 1)
	{
		std::cout << "Invalid index\n";
		return (0);
	}
	else
		contacts[input_int - 1].displayContact();
	return (1);
}
