#include <iostream>

int main(int argc, char const *argv[])
{
	int x = 0;
	float y = 0.0;
	std::cin >> x;
	std::cin >> y;

	printf("%.3f km/l\n", x/y);

	return 0;
}