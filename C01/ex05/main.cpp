#include "Harl.hpp"
#include <iostream>

int main()
{
	Harl instance;
	instance.complain("debug");
	instance.complain("info");
	instance.complain("warning");
	instance.complain("error");
	instance.complain("errnonnnn");
	instance.complain("");
	return 0;
}