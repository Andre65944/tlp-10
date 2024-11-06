#include <iostream>
using namespace std;
void main()
{int NR, NH;
	srand(time(0));
	NR = rand() % 100 + 1;
	cout << "adivinha um numero de 1 a 100\n";
	
	do {	
		cin >> NH;
		if (NH < NR){
			cout << "o numero correto esta acima\n";}
		if (NH > NR) {
			cout << "o numero correto esta abaixo\n";}
		if (NH == NR){
			cout << "acertaste panguano\n";}
	
	} while (NH!=NR);}
