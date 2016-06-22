#include <iostream>

	int main(int argc, char const *argv[])
	{
	    int A, N, s;

	    std::cin >> A;
	    s = A;
	    std::cin >> N;

	    while (N <= 0) 
	    	std::cin >> N;

	    for (int i = 1; i < N; i++)
	        s += ++A;

	    std::cout << s << std::endl;
	    return 0;
	}