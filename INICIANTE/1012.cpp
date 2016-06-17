#include <iostream>
#include <cmath>
#define pi 3.14159

int main(int argc, char const *argv[])
{
	double A = 0.0, B = 0.0, C = 0.0;
	std::cin >> A >> B >> C;

	printf("TRIANGULO: %.3f\n", (A*C)/2);
	printf("CIRCULO: %.3f\n", pow(C,2) * pi);
	printf("TRAPEZIO: %.3f\n", ((A+B)*C)/2);
	printf("QUADRADO: %.3f\n", pow(B,2));
	printf("RETANGULO: %.3f\n", A*B);



	return 0;
}