#include <iostream>

int main(int argc, char const *argv[])
{
	int A, B, C;

	std::cin >> A >> B >> C;

	if (A > B and A > C)
		std::cout << A << " eh o maior" << std::endl;
	if(B > A and  B > C)
		std::cout << B << " eh o maior" << std::endl;
	if(C > A and C > B)
		std::cout << C << " eh o maior" << std::endl;

	return 0;
}