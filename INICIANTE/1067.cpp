#include <iostream>
                                           
int main(int argc, char const *argv[])
{ 	
 	int n,i=1;
    scanf("%i",&n);
    if(n>=1 && n<=1000){
	    while(i<=n){
	        printf("%i\n", i);
	        i=i+2;   
	    }
    }
   	return 0;
}
    