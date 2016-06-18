#include <iostream>
                                           
int main(int argc, char const *argv[])
{
    int a, b = 1;
    scanf("%d", &a);
    while(a--){
        printf("%d ", b++);
        printf("%d ", b++);
        printf("%d ", b++);
        b++;
        printf("PUM\n");
    }
    return 0;
}