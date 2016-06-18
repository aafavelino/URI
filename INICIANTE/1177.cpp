#include <iostream>
                                           
int main(int argc, char const *argv[])
{
 	int i=0, n, v[1000];
    int j,k=0;
    scanf("%i",&n);
    
    for(i=0;i<1000;i++)
        printf("N[%i] = %i\n", i, v[i]=i%n);
   
    return 0;
}