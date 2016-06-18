#include <iostream>
                                           
int main(int argc, char const *argv[])
{
    int cont=1,num;
    scanf("%i",&num);
    for(;cont<=num;cont++){
        if(num%cont==0){
            printf("%i\n",cont);
        
        }
    }
    
    return 0;
}