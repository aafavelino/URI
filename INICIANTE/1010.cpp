#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	int a = 0, b = 0, d = 0, e = 0;
	
	double c = 0.0;
	double f = 0.0;
	
	std::cin >> a >> b >> c;

	std::cin >> d >> e >> f;

	printf("VALOR A PAGAR: R$ %.2f\n", (b*c + e*f));

	return 0;
}