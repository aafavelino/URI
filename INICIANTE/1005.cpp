#include <iostream>

int main(int argc, char const *argv[])
{
	double x = 0.0, y = 0.0;
	std::cin >> x;
	std::cin >> y;

	printf("MEDIA = %.5f\n", ((x*3.5 + y*7.5)/11));

	return 0;
}