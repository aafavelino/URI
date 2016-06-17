#include <iostream>

int main(int argc, char const *argv[])
{
	int x = 0, y = 0;
	double z = 0.0;
	
	std::cin >> x;
	std::cin >> y;
	std::cin >> z;

	printf("NUMBER = %d\n", x);
	printf("SALARY = U$ %.2f\n", (y * z));

	return 0;
}