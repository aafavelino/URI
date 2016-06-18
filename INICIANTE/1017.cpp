#include <iostream>

int main(int argc, char const *argv[])
{
	int dist = 0, hor = 0;
	float tot = 0.0;
	std::cin >> hor;
	std::cin >> dist;

	tot = (dist*hor)/12.0;

	printf("%.3f\n", tot);

	return 0;
}