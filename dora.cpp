#include <iostream>
using namespace std;

void main()
{
	char operacao;
	int  num1, num2;
	cout << "que tipo de operacao queres";
	cin >> operacao;
	cout << "primeira parcela";
	cin >> num1;
	cout << "segunda parcela";
	cin >> num2;
	switch (operacao)
	{ 
		case '+':
			cout << num1 + num2;
			break;
		case '-':
			cout << num1 - num2;
			break;
		case '*':
			cout << num1 * num2;
			break;
		case '/':
			cout << num1 / num2;
			break;
}
}