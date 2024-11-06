#include<iostream>

void main()
{
	int number, i;
	do
	{
		std::cout << "give me a number";
		std::cin >> number;

		for (i = 1; i <= 10; i++)
		{

			std::cout << number << "*" << "=" << number * i << "\n";
		}
		
	}while(number != 0);
}















