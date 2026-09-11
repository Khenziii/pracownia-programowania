#include <iostream>

int main() {
	int wiek;
	std::cout << "podaj wiek: ";
	std::cin >> wiek;

	if (wiek >= 35) {
		std::cout << "Mozesz zostac prezydentem" << std::endl;
	}

	if (wiek >= 30) {
		std::cout << "Mozesz zostac senatorem" << std::endl;
	}

	if (wiek >= 21) {
		std::cout << "Mozesz zostac poslem" << std::endl;
	}

	return 0;
}
