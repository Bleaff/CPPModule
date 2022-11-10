#include "Casting.hpp"

Casting :: Casting(void) {}
Casting :: ~Casting(void) {}
Casting :: Casting(std :: string const &raw_input) : raw_input(raw_input), type ("") {}
Casting :: Casting(const Casting & other) {
	*this = other;
}

std :: string const & Casting :: getInput(void) const {
	return raw_input;
}

std :: string const & Casting :: getType(void) const {
	return type;
}

Casting & Casting :: operator=(const Casting & other) {
	if (this != &other) {
		type = other.getType();
		raw_input = other.getInput();
	}
	return *this;
}

void	Casting :: checkType(void) {
	size_t i = 0;
	
	if (raw_input[i] == '-')
		i++;
	for (; i < raw_input.size() && raw_input[i] >= '0' && raw_input[i] <= '9'; i++);
	if (i == raw_input.size()) {
		long tmp = std :: stol(raw_input.c_str());
		if (tmp < INT_MAX && tmp > INT_MIN)
			type = "int";
	}
	else if (raw_input[i] == '.' && i) {
		i++;
		for (; i < raw_input.size() && raw_input[i] >= '0' && raw_input[i] <= '9'; i++);
		if (i == raw_input.size() - 1 && raw_input[i] == 'f')
			type = "float";
		if (i == raw_input.size())
			type = "double";
	}
	else if ((raw_input.size() == 1 && (raw_input[i] < '0' || raw_input[i] > '9')) 
		|| (raw_input.size() == 3 && raw_input[0] == '\'' && raw_input[2] == '\''))
		type = "char";
	if (raw_input == "nanf" || raw_input == "-inff" || raw_input == "+inff")
		type = "float";
	if (raw_input == "nan" || raw_input == "-inf" || raw_input == "+inf")
		type = "double";
}

void	Casting :: printChar(void) const {
	std :: cout << "char: ";
	if (type == "char" && raw_input.size() == 3)
		std :: cout << raw_input << std :: endl;
	else if (type == "char" && raw_input.size() == 1)
		std :: cout << "\'" << raw_input << "\'" << std :: endl;
	else if (type == "int") {
		int code = std :: atoi(raw_input.c_str());
		if (code < 32 || code > 127)
			std :: cout << "Non displayable" << std :: endl;
		else 
			std :: cout << "\'" << static_cast<char>(code) << "\'" << std :: endl;
	}
	else if (type == "float" && (raw_input == "nanf" || raw_input == "-inff" || raw_input == "+inff"))
		std :: cout << "impossible" << std :: endl;
	else if (type == "double" && (raw_input == "nan" || raw_input == "-inf" || raw_input == "+inf"))
		std :: cout << "impossible" << std :: endl;
	else if (type == "float" || type == "double") {
		float code = std :: atof(raw_input.c_str());
		if (static_cast<int>(code) < 32 || static_cast<int>(code) > 127)
			std :: cout << "Non displayable" << std :: endl;
		else 
			std :: cout << "\'" << static_cast<char>(static_cast<int>(code)) << "\'" << std :: endl;
	}
}

void	Casting :: printInt(void) const {
	std :: cout << "int: ";
	if (type == "int") {
		int tmp = std :: atoi(raw_input.c_str());
		std :: cout << tmp << std :: endl;
	}
	else if (type == "char")
		std :: cout << static_cast<int>(raw_input[0]) << std :: endl;
	else if (type == "float" && (raw_input == "nanf" || raw_input == "-inff" || raw_input == "+inff"))
		std :: cout << "impossible" << std :: endl;
	else if (type == "double" && (raw_input == "nan" || raw_input == "-inf" || raw_input == "+inf"))
		std :: cout << "impossible" << std :: endl;
	else if (type == "double" || type == "float") {
		float tmp = std :: atof(raw_input.c_str());
		std :: cout << static_cast<int>(tmp) << std :: endl;
	}
	
}

void	Casting :: printFloat(void) const {
	std :: cout << "float: ";
	if (type == "float" && (raw_input == "nanf" || raw_input == "-inff" || raw_input == "+inff"))
		std :: cout << raw_input << std :: endl;
	else if (type == "float")
		std :: cout << raw_input << std :: endl;
	else if (type == "double")
		std :: cout << raw_input << "f" << std :: endl;
	else if (type == "int") {
		int tmp = std :: atof(raw_input.c_str());
		std :: cout << tmp << ".0f" << std :: endl;
	}
	else if (type == "char") {
		std :: cout << static_cast<int>(raw_input[0]) << ".0f" << std :: endl;
	}
}

void	Casting :: printDouble(void) const {
	std :: cout << "double: ";
	if (type == "float")
		std :: cout << raw_input.substr(0, raw_input.size() - 1) << std :: endl;
	else if (type == "double")
		std :: cout << raw_input << std :: endl;
	else if (type == "int") {
		int tmp = std :: atof(raw_input.c_str());
		std :: cout << tmp << ".0" << std :: endl;
	}
	else if (type == "char") {
		std :: cout << static_cast<int>(raw_input[0]) << ".0" << std :: endl;
	}
}

void	Casting :: print(void) const{
	printChar();
	printInt();
	printFloat();
	printDouble();
}

bool	Casting :: excep(void) {
	checkType();
	if (type == "")
		throw BadInput();
	return true;
}

const char* Casting :: BadInput :: what(void) const throw() {
	return "Bad raw_input to convert";
}