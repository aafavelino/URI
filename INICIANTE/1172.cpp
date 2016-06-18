#include <iostream>
#define z 10

int main(int argc, char const *argv[])
{
  	int x[10];
  	int i = 0;
  
  	while(i<z){
    	scanf("%i",&x[i]);
      
      	if(x [i]<=0)
         	x [i]=1;
          
  		i++;
  	}

  	i=0;

  	while(i<z){
   		printf("X[%i] = %i\n",i, x[i]);
   		i++;
  	}

  	return 0;
}