#include <iostream>
using namespace std;

int main()
{
	int num, a, b;
	int sum;
	int in;

	cout << "ingresa un numero > 10 y < 100" << endl;
	cin >> num;

	if (num > 10 && num < 100)
	{
		a = num % 100 / 10;
		b = num % 10 / 1;

		sum = a + b;

		if (sum > 10)
		{
			cout << "Si: " << sum << endl;
		}
		else 
		{

			b = b * 10;

		    in = b + a;

			cout << in << endl;

		}

	}

	else 
	{
		cout << "El numero no esta dentro del rango permitido" << endl;
	}
}
