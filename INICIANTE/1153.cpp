#include <iostream>
                                           
int main(int argc, char const *argv[])
{
    int n,i=1;
    
    scanf("%i",&n);
    
    for(;n>=1;n--)
        i*=n;
    
    printf("%i\n",i);

    return 0;
}