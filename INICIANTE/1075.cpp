#include <iostream>

int pow(int x, int n);

int main(void){
    int n,i=1;
    scanf("%i",&n);
    
    while(i<10000){
        if(i%n==2){
            printf("%i\n",i);
                    
        }
        
        i++;
    }
    
    return 0;
}