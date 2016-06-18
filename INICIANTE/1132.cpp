#include <iostream>
                                           
int main(int argc, char const *argv[])
{
    int i, n,j=0,t=0;
    
    scanf("%i",&i);
    scanf("%i",&n);
    if(i>n){
        t = n;
        n=i;
        i=t;
    }
    
    while(i<=n){
        if(i%13!=0)
        {
            j+=i;
        
        }
    
        i++;
    }printf("%i\n",j);
    
    return 0;  
}  