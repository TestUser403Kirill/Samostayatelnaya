#include <iostream>
int main() {
	int number;

		std::cout << "Enter a number: ";
	std::cin >> number;

	int cube = number * number * number;

	std::cout << "The cube of " << number << " is: " << cube << std::endl;

	return 0;
}
