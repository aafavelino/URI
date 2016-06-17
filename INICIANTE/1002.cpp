#include <iostream>

int main(int argc, char const *argv[])
{
	double area = 0.0;
	double raio = 0.0;
	double pi = 3.14159;
	std::cin >> raio;
	area = pi * raio * raio;
	printf("A=%.4f\n", area);
	return 0;
}