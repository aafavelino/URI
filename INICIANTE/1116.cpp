#include <iostream>
                                           
int main(int argc, char const *argv[])
{
    int n;
    float x,y;
    scanf("%i",&n);
    
    while(n--){
        scanf("%f %f",&x,&y);
        if(y==0){
            printf("divisao impossivel\n");
            
        }else{
        
        printf("%.1f\n",x/y);
        }       
    }
            
   
    
    return 0;
}