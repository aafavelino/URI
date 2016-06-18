#include <iostream>
                                           
int main(int argc, char const *argv[])
{
    int a, b;
    while(scanf("%d %d", &a, &b) && a != b)
        if (a < b)
            printf("Crescente\n");
        else
            printf("Decrescente\n");
    return 0;
}