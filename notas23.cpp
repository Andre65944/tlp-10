#include <iostream>
#include<locale.h>


void main()
{
	setlocale(LC_ALL, "portuguese");
	int nota;
	std::cout << "indique a nota do aluno";
	std::cin >> nota;
	if (nota < 0 || nota>20)
	{
		std::cout << "burro";
	}
	else if (nota > 9, 5)
	{
		std::cout << "reprovado";
	}
	else
	{
		std::cout << "aprovado";
	}

}