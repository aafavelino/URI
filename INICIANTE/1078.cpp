#include <iostream>
                                           
int main(int argc, char const *argv[])
{
    int n,i=1;
    scanf("%i",&n);
    
    while(i<=10){
        printf("%i x %i = %i\n",i,n,(i*n));
        i++;
    }
    return 0;
}