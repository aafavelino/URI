#include <iostream>
                                           
int main(int argc, char const *argv[])
{
    int i=1,j=60;
    
    while(j!=0){
        printf("I=%d J=%d\n",i,j);
        i+=3;
        j-=5;
    }
    printf("I=%i J=%i\n",i,j);
    
    return 0; 
}