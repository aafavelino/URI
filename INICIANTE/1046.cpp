#include <iostream>
                                           
int main(int argc, char const *argv[])
{
    int h1,h2;
    int tempo=0;
    scanf("%i %i",&h1,&h2);
    
    tempo= ((h2-h1)+24)%24;
    if(tempo==0){
        tempo = 24;
    }
    
    printf("O JOGO DUROU %i HORA(S)\n",tempo);

    return 0;
}