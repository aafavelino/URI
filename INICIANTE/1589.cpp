#include <iostream>
                                           
int main(int argc, char const *argv[])
{
    int i = 0, n = 0, a = 0, b = 0,j = 0;
    
    scanf("%i",&n);

    for(;i<n;i++){   
        scanf("%i %i",&a, &b);
        j=a+b;
        printf("%i\n",j);
    
    }
    return 0;
}