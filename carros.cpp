#include <iostream>​
#include <string>​


void main()
{
	char resposta= 'c';
	int r;
	std::string carros[3] = { "volvo","BMW", "porsche" };
	do {
		do
		{

			std::cout << "que carro queres? (0 a 2)";
			std::cin >> r;
		} while (r < 0 || r>2);
		std::cout << "o carro que escolheste e " << carros[r];
		std::cout << "queres ir embora? (s/n)";
		std::cin >> resposta;
	} while (resposta != 's');
}