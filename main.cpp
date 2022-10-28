#include <iostream>

int main() {
	enum notes {
		DO = 1,
		RE = 2,
		MI = 4,
		FA = 8,
		SOL = 16,
		LA = 32,
		SI = 64
	};

	int melody[12];

	std::cout << "Input melody by digits on keyboard (0-6):" << std::endl;
	for (int i = 0; i < 12; i++) {
		std::cin >> melody[i];
		while (melody[i] < 0 || melody[i] > 6) {
			std::cout << "ERROR. Incorrect range (1-7)!!!" << std::endl;
			std::cin >> melody[i];
		}
	}

	for (int i = 0; i < 12; i++) {
		int notes_index = 1 << melody[i];
		if (notes_index & notes::DO)
			std::cout << "DO";
		else if (notes_index & notes::RE)
			std::cout << "RE";
		else if (notes_index & notes::MI)
			std::cout << "MI";
		else if (notes_index & notes::FA)
			std::cout << "FA";
		else if (notes_index & notes::SOL)
			std::cout << "SOL";
		else if (notes_index & notes::LA)
			std::cout << "LA";
		else if (notes_index & notes::SI)
			std::cout << "SI";
		std::cout << " ";
	}
	std::cout << std::endl;
}
