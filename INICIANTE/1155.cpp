#include <iostream>
                                           
int main(int argc, char const *argv[])
{
    double s = 1.0;
    for (int i = 2; i <= 100; i++){
        s += 1.0 / (double) i;
    }
    printf("%.2lf\n", s);
    return 0;
}