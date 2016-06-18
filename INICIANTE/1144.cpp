#include <iostream>
                                           
int main(int argc, char const *argv[])
{
    int tipo;
    int i=1,n;
    
    scanf("%i",&tipo);
    
    while(i <=tipo){
    	printf("%i %i %i\n",i,i*i,i*i*i);
     	printf("%i %i %i\n",i,i*i+1,i*i*i+1); 
    	i++;
    }

    return 0;
}