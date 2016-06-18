#include <iostream>
                                           
int main(int argc, char const *argv[])
{
int i=1;

	while(i%2!=0 && i<=9){

		printf("I=%i J=7\n",i);
		printf("I=%i J=6\n",i);
		printf("I=%i J=5\n",i);
		i++;
		if(i%2!=1)
			i=i+1;
	}

    return 0;
}