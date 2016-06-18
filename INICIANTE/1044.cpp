#include <iostream>
                                           
int main(int argc, char const *argv[])
{
    int a,n;
    scanf("%i",&a);
    scanf("%i",&n);
         if(a%n==0 || n%a==0){
             printf("Sao Multiplos\n");
         }   else{
         printf("Nao sao Multiplos\n");
         }
            
   
    
    return 0;
}
