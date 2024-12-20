#include <iostream>
using namespace std;
void main()
{
	int  posicao, letras = 0, i, j, quantas;
	char frase[100], abc[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','u','v','w','x','y','z'};
	cout << "quantas letras vai avançar\n";
	cin >> quantas;
	cout << "quantas letras tem a frase\n";
	cin >> letras;
	cout << " qual e a frase\n";
	for (i = 0; i < letras; i++)
	{
		cin >> frase;
	}
	for (int i = 0; i < letras; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (frase[i] <= 'z')
			{
				if (frase[i] == abc[j])
				{
					posicao = (j + quantas) % 25;
					frase[i] = abc[posicao];
				}
			}
			else
			{
				if (frase[i] == abc[j])
				{
					j = j + quantas;
					frase[i] = abc[j];
				}
			}
		}
		
	}
	cout << frase[i] << " ";
}
