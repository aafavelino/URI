#include <iostream>

int main(int argc, char const *argv[])
{
	double x = 0.0, y = 0.0, z = 0.0;
	std::cin >> x;
	std::cin >> y;
	std::cin >> z;

	printf("MEDIA = %.1f\n", ((x*2 + y*3 + z*5)/10));

	return 0;
}