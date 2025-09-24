#include <iostream>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push_back(5);
	mstack.push_back(17);

	std::cout << "Top: " << mstack.top() << " Size: " << mstack.size() << std::endl;

	mstack.pop();

	std::cout << "Top: " << mstack.top() << " Size: " << mstack.size() << std::endl;

	std::cout << "Adding some more numbers..." << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);

	return 0;
}