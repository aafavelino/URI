#include <iostream>
                                           
int main(int argc, char const *argv[])
{
    int i, n,j=0,t=0,k;
    
    scanf("%i",&i);
    scanf("%i",&n);
    if(i>n){
        t = n;
        n=i;
        i=t;
    }
    k=i+1;
    while(k<=n){
        if(k%5==2||k%5==3)
        {
            printf("%i\n",k);
        
        }
    
        k++;
    }
    
    return 0;  
}  
