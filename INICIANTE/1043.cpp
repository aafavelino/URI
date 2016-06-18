#include <iostream>
                                           
int main(int argc, char const *argv[])
{
double a,b,c, perimetro = 0, area = 0;

scanf("%lf %lf %lf",&a,&b,&c);

if((a+b)>c && (b+c)>a && (a+c)>b){
perimetro = a+b+c;
printf("Perimetro = %.1lf\n",perimetro);

}else{
area=((a+b)*c)/2;
printf("Area = %.1lf\n",area);
}
    return 0;
}