#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
	double raio = 0.0;
	std::cin >> raio;


	printf("VOLUME = %.3f\n", (3.14159 * pow(raio,3)*(4.0/3)));

	return 0;
}