#include <iostream>

int main(int argc, char const *argv[])
{
	int w = 0,x = 0, y = 0, z = 0;
	std::cin >> w;
	std::cin >> x;
	std::cin >> y;
	std::cin >> z;

	printf("DIFERENCA = %d\n", (w * x - y * z));

	return 0;
}