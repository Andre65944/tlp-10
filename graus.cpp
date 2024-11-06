#include <iostream>
using namespace std;

void main()
{
using namespace std;
char tipo;
int C, F;
cout << "que tipo de temperatura queres?";
 cin >> tipo;
switch (tipo) {
case'c':
case'C':
	cout << "coloca o valor em celcius";
	break;
case'f':
case'F':
	cout << "coloca o valor em Fahrenheit";
	break;
	default:
		cout << "para de ser burro";
		break;


}
	
}