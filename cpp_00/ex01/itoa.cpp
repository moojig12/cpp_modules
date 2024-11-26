#include "PhoneBook.hpp"

std::string ft_itoa(int nbr) {
	int neg = 0;
	std::string result;
	long n = nbr;

	if (n < 0) {
		neg = 1;
		n = -n;
	}
	if (n == 0)
		return "0";

	while (n != 0) {
		result += (n % 10) + '0';
		n /= 10;
	}

	if (neg)
		result += '-';

	for (size_t i = 0, j = result.size() - 1; i < j; ++i, --j) {
			char temp = result[i];
			result[i] = result[j];
			result[j] = temp;
		}
	return (result);
}