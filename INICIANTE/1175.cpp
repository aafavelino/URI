#include <iostream>
                                           
int main(int argc, char const *argv[])
{
    int vet[20], aux[20];
    int i,j;
    
    for(i=0;i<20;i++){
        scanf("%i", &vet[i]);
    
    }
   
    for(i=0;i<20;i++){
        aux[i]=vet[i];
    }
    for(i=0,j=19;i<20,j>=0;i++,j--){
      
        vet[i]=aux[j];
      
    }
    for(i=0;i<20;i++){
        printf("N[%i] = %i\n",i, vet[i]);
    }
    
    return 0;
}