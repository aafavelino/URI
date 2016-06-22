#include <iostream>

	int main(int argc, char const *argv[])
	{
		double nota = 0.0;
		double media = 0.0;
		int cont = 1;
		while(std::cin >> nota)
		{	


			if (nota >= 0.0 and nota <= 10.0)
			{

				media = media + nota;
				cont++;
			}
			else 
				std::cout << "nota invalida\n";
			if (cont == 3)
				break;

		}

		std::cout << "media = " << media/2 << std::endl;
		return 0;
	}