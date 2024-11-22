#include <iostream>
using namespace std;

void main()
{
	int vetor[10], vetor1[10], vetor2[20], i, pos = 0, maior = 25, posicao = 1;
	for( i = 0; i < 10; i++)
	{
		cout << "give me a number a\n";
		cin >> vetor[i];
		
		cout << "give me a number\n";
		cin >> vetor1[i];
	}
	for (i = 0; i < 20; i++)
	{
		vetor2[i] = vetor[pos];
		i = i + 1;
		vetor2[i] = vetor1[pos];
		pos = pos + 1;
	}
	for (i = 0; i < 20; i++)
	{
		cout << vetor2[i] << " ";
	}
	for (i = 0; i < 20; i++)
	{
		if (vetor2[i] > maior)
		{
			maior = vetor2[i];
			posicao = i;
		}
	}
	cout << "o maior numero e" << maior << "a posicao e" << posicao;
}