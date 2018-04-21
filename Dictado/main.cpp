#include <iostream>
#include <limits>
#include "WordProcess.h"

int main()
{
	const unsigned short int PSize = 1000;
	char P[PSize];

	std::cout << "Ingrese una palabra: " << std::endl;
	std::cin >> P;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<char>::max(), '\n');

	std::cout << dictado(P, PSize);

	return 0;
}