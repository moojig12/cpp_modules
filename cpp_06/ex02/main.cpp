#include "AllClasses.hpp"

int main() {
	Base *p = generate();
	identify(p);
	identify(*p);
}