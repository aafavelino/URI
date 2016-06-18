#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
	float x1, x2, y1, y2;

	std::cin >> x1 >> y1;
	std::cin >> x2 >> y2;
	float value = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
	printf("%.4f\n", value);

	return 0;

}
