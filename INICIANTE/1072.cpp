#include <iostream>
                                           
int main(int argc, char const *argv[])
{
    int contin=0, contout=0,num,i=0;
    int inter;
    scanf("%i",&num);
    while(i<num){
     scanf("%i",&inter);
     if(inter>=10 && inter<=20){
         contin++;
     }
     else{
         contout++;
     }
     i++;
    }printf("%i in\n",contin);printf("%i out\n",contout);
    
    return 0;
}