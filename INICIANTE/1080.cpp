#include <iostream>
                                           
int main(int argc, char const *argv[])
{
    int n, q = 0, g = -1, i = -1;
    while(++q && q <= 100){
        scanf("%d", &n);
        if (n > g){
            g = n; i = q;
        }

    }
    printf("%d\n", g);
    printf("%d\n", i);
    return 0;
}