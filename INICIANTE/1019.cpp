#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
	int seg = 0;
	std::cin >> seg;
		printf("%d:%d:%d\n", seg/3600, seg%3600/60, seg%3600%60);
	return 0;

}
