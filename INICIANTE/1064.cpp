#include <iostream>
                                           
  int main(int argc, char const *argv[])
  {
      int i=1,g=0;
      double n,media;
      while(i<=6){
          scanf("%lf", &n);
          
        
          if(n>0){
              g++;
              media = (media +n);
          }
          
         
           i++;
      }printf("%i valores positivos\n", g);
      printf("%.1lf\n",media/g);
      return 0;
  }
      