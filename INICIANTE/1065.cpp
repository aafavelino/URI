#include <iostrem>
                                           
  int main(int argc, char const *argv[])
  {   
      int i=1;
      int n,g=0;
      for(i; i<=5; i++){
          scanf("%i", &n);
          if(n%2==0){
              g++;
          }
      
      }printf("%i valores pares\n",g);
      return 0;
   }
      