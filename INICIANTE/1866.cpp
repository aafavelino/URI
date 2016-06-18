#include <iostream>
                                           
int main(int argc, char const *argv[])
{
    int i=0, n,num;
    scanf("%i",&n);
    
    while(i<n){
        scanf("%i",&num);
        if(num%2==1){
            printf("1\n");
        
        }else{
            printf("0\n");
        }
        i++;
        
    }
    
    return 0;
}