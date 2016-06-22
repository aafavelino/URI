#include <iostream>

	int main(int argc, char const *argv[])
	{
		int x, s = 0, z, n = 0;

	    scanf("%d", &x);

	    while (scanf("%d", &z) && z <= x) {}

	    for (int i = x; s <= z; i++) {
	        s += x++;
	        n++;
	    }

	    printf("%d\n", n);

	    return 0;
	}