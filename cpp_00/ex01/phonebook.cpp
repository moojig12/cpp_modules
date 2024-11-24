#include "phonebook.hpp"

int	addContact(const Contact& contact, std::vector<Contact> vector)
{
	if (vector.size() < 8) {
		int	index = vector.size();
		std::cout << index;

		vector[index].setIndex(index);
		vector.push_back(contact);
	}
	else {
		vector.erase(vector.begin());
	}
	return (1);
}

int	searchContact(std::vector<Contact> contacts)
{
	std::cout << "     Index|First name| Last name| Nickname\n";
	// Passing down contacts row by row
	for (int i = 0; i < (int)contacts.size(); i++)
	{
		contacts[i].displayContactRow(i);
	}
	std::cout << "\n";
	return (1);
}
