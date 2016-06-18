#include <iostream>
                                           
  int main(int argc, char const *argv[])
  {   
    int a,b,c,d;
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    scanf("%i",&d);
    
    if(b >c && d>a && (c+d) > (a+b) ){
        printf("Valores aceitos\n");
    }else{
    printf("Valores nao aceitos\n");
    }
    return 0;
  }