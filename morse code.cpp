#include <iostream>
#include <string>
using namespace std;

void main()
{
	int traduzir, letras, i, j;
	string  morse[100], codigo[26] = {".-", "-... ", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
	     char frase[100], abc[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','u','v','w','x','y','z'};
	cout << "quantas leras tem a tua frase \n";
	cin >> letras;
	cout << "queres traduzir do portuges para morse 1 ou morse para portuges 2\n";
	cin>>traduzir;
	switch(traduzir)
	{
	case 1:
		cout << "qual e \n";
		for (i = 0; i < letras; i++)
		{
			cin >> frase[i];
		}
		for (i = 0; i < letras; i++)
		{
			for (j = 0; j< 26; j++)
			{
				if (frase[i] == abc[j])
				{
					cout << codigo[j];
				}
			}
		}
		break;
	case 2:
		cout << "qual e a frase\n";
		for (i = 0; i < letras; i++)
		{
			cin >> morse[i];
		}
		for (i = 0; i < letras; i++)
		{
			for (j = 0; j < 26; j++)
			{
				if (morse[i] == codigo[j])
				{
					cout << abc[j];
				}
			}
		}
		break;
	default:
		break;
	}
}