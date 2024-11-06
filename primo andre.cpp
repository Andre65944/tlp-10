#include <iostream>
using namespace std;

void main()
{
	int num, i, contar = 0;

	cout << "give me a number";
	cin >> num;
	for (i = num; i > 0; i--)
	{
		if (num % i == 0)
		{
			contar = contar + 1;
		}
	}
	if (contar == 2)
	{
		cout << "numero primo";

	}
}
	
	
	
