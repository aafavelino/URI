#include <iostream>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int n=0, i=0, min = INT_MAX, ps=0;
    
    scanf("%i",&n);

    int x[n];
    for(;i<n;i++){
        scanf("%i", &x[i]);
        if(min>x[i]){
            min=x[i];
            ps=i;
        }
        
    } 
    
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",ps);
    return 0;
}