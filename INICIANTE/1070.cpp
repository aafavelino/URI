#include <iostream>
                                           
	int main(int argc, char const *argv[])
	{ 	
	 	int n;
	    scanf("%i",&n);
	    for(int i = 1; i <= 6; i++){
	        if(n%2 == 0)
	            n += 1;
	            printf("%i\n", n);
	            n += 2;
	    }
	    return 0;
   	}