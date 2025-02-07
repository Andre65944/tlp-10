#include <iostream>;
#include <string>
using namespace std;
int gastos[2][2], totalproduto[2];
string produtos[2] = { "Batatas, Cenouras" }, meses[2] = { "janeiro,marco\n" };
int mensais()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			totalproduto[i] = totalproduto[i] + gastos[i][j];
		}
		cout << "\n E esse é o total de produtos: " << totalproduto[i] << "do produto " << produtos[i];

	}
	return 0;
}
	
void verificar2()
{
	for (int i = 0; i < 2; i++)
	{
		int resultado = 0;
		for (int j = 0; j < 2; j++)
		{
			resultado = gastos[j][i] + resultado;
		}
		cout << "No mes de  " << meses[i] << "  Voce comeu  " << resultado << "\n";
	}
	return 0;

}
int valores()
{
	
	for (int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			cout << " O produtos" << i + 1 << " nos meses" << j + 1 << "foi gasto";
			cin >> gastos[j][i];

		}
	}
	return 0;
}
void main()
{
	
	int opcoes;
	do {
		cout << "deseja sair 0\n";
		cout << "deseja calcular totais mensais1\n";
		cout << "calcular totais por produto2\n";
		cout << "Inserir valores3\n​";
		cin >> opcoes;
		switch (opcoes)
		{
		case 1: {
			mensais();

			break;
		}
		case 2: {
			verificar2();
			break;
		}
		case 3: {
			valores();
			break;
		}
		}
	} while (opcoes ==0);
}