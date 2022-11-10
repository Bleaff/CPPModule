#include "Casting.hpp"

int main(int argc, char	**argv) {
	if (argc != 2) {
		std :: cerr << "Wrong input!" << std :: endl;
		return 1;
	}
	try {
		std :: string	input(argv[1]);
		Casting			convert(input);
		convert.excep();
		convert.print();
	}
	catch (std :: exception & e) {
		std :: cout << e.what() << std :: endl;
	}
	return 0;
}