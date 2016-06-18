#include <iostream>

int main(int argc, char const *argv[])
{
      int i=1,g=0;
      double n;
      while(i<=6){
          scanf("%lf", &n);
          
        
          if(n>0){
              g++;
          }
         
         
           i++;
      }
      printf("%i valores positivos\n", g);
	return 0;
}
