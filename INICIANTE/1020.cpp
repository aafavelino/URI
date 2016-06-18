#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
	int dias = 0;
	std::cin >> dias;
		std::cout << dias/365 << " ano(s)" << std::endl;
		std::cout << dias%365/30 << " mes(es)" << std::endl;
		std::cout << dias%365%30<< " dia(s)" << std::endl;
	return 0;

}
