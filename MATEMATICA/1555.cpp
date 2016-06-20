#include <iostream>
#include <cmath>

int Rafael(int x, int y)
{
	return (pow(3*x,2) + pow(y,2));
}

int Beto(int x, int y)
{
	return (2*pow(x,2) + pow(5*y,2));
}

int Carlos(int x, int y)
{
	return (-100*x + pow(y,3));
}

int main(int argc, char const *argv[])
{
	int entrada = 0;
	int x = 0, y = 0;
	scanf("%i", &entrada);
	int rafael = 0, beto = 0,  carlos = 0;
	
	for (int i = 0; i < entrada; ++i)
	{
		scanf("%i %i", &x, &y);
		rafael = Rafael(x,y);
		beto = Beto(x,y);
		carlos = Carlos(x,y);
		if (rafael > beto and rafael > carlos)
			std::cout << "Rafael ganhou\n";
		else if(carlos > rafael and carlos > beto)
			std::cout << "Carlos ganhou\n";
		else
			std::cout << "Beto ganhou\n";

	}


	return 0;
}