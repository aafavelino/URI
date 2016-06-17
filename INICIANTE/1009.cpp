#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	std::string nome;
	
	double x = 0.0, y = 0.0;
	
	std::cin >> nome;
	std::cin >> x;
	std::cin >> y;


	printf("TOTAL = R$ %.2f\n", (x + y * 0.15));

	return 0;
}