#include <iostream>;
using namespace std;
void verificar(int numero[10])
{
	int sumar=0, resultado=0;
	for (int i = 0; i < 10; i++)
	{
		sumar = numero[i] + sumar;
	}
	resultado=sumar / 10;
	cout << " a media é: " << resultado << "\n";
}
void verificar2()
{
	int menor; int numeros[10];
	for (int i = 0; i < 10; i++)
	{
		if (numeros[i] < menor)
		{
			menor = numeros[i];
		}
	}
	cout << "Menor: " << menor;
}
void verificar3()
{
	int maior; int numeros[10];
	for(int i=0;i<10;i++
		
		)
	{
		if (numeros[i] > maior)
		{
			maior = numeros[i];
		}
	}
	cout << "Maior: " << maior;
}
void main()
{
	int numero[10], i, opcoes;
	for (i = 0; i < 10; i++)
	{
		cout << "da me uma serie de 10 numeros";
		cin >> numero[i];
	}
	cout << "queres sair digite 0\n";
	cout << "queres calcular a media digite 1\n";
	cout << "queres achar o menor numero digite 2\n";
	cout << "queres achar o maior numero digite 3\n";
	cin >> opcoes;
	switch (opcoes)
	{
	  case 1: {
		verificar(numero);
			break;
	   }
	  case 2: {
		  verificar2();
			  break;
	  }
	  case 3: {
          verificar3();
		  break;
	  }
	}
}
