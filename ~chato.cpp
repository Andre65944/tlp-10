#include <iostream>
using namespace std;
void main()
{
	int numb[10], i, conta = 0, soma = 0, qual;
	for (i = 0; i < 10; i++)
	{
		cout << "diz o " << i + 1 << "º numero\n";
		cin >> numb[i];

	}
	cout << "queres somar os negativo(1) ou contar (2)\n";
	cin >> qual;
	switch (qual)
	{
	case 1:
		for (i = 0; i < 10; i++)
		{
			if (numb[i] < 0)
			{
				conta += numb[i];

			}
		}
		cout << "Somaste os numeros e deu " << conta << "!!!!";
		break;
	case 2:
		for (i = 0; i < 10; i++)
		{
			if (numb[i] < 0)
			{
				soma++;

			}
		}
		cout << "Inseriste " << soma << "negativos !!!!";
		break;
	default:
		break;
	}
}
