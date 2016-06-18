#include <stdio.h>

	int impar(int a, int b);

	int main(){
		int a,b;
		scanf("%i", &a);
		scanf("%i", &b);
		printf("%i\n",impar(a,b));

		return 0;
	}

	int impar(int a, int b){
		int soma = 0;
		if(a<b){
			for (a=a+1; a < b; a++)
			{
				if(a%2!=0){
					soma += a;

				}
			}

		}else {
			for (b=b+1; b < a; b++)
			{
				if(b%2!=0){
					soma += b;

				}
			}


		}
		return soma;


	}