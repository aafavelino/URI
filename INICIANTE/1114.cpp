#include <iostream>
                                           
int main(int argc, char const *argv[])
{   
    int n,i=1,l;
    
    while(i<10){
         scanf("%i",&n);
         if(n==2002){
             printf("Acesso Permitido\n");
             break;
         }else{
             printf("Senha Invalida\n");
             continue;
         }
        i++;
    }
    
    return 0;
}