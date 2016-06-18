#include <iostream>
                                           
int main(int argc, char const *argv[])
{
    float n,soma=0, media;
    int i;
    
    for(i=0;scanf("%f",&n) && n>0;i++){
        
        soma = soma + n;
        
    } media = soma/i;
    printf("%.2f\n", media);
    
     return 0;
}
