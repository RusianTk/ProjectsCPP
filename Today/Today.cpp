// EjercicioPunterosPuntosExtras.cpp : Este archivo contiene la funcion "main". La ejecucion del programa comienza y termina ahi­.

#include <iostream>
#include <vector>

using namespace std;

//Prototipos 
void AddNumbers(vector<int>* const numbers);
void ShowNumbers(const vector<int>* const numbers);
void ShowPosEvenNumbers(vector<int>* const numbers);

int main()
{
	vector<int> numbers(5);
	AddNumbers(&numbers);
	ShowNumbers(&numbers);
	ShowPosEvenNumbers(&numbers);

}

//Funcion para agregar numeros
void AddNumbers(vector<int>* const numbers) { // vector<int>* const es puntero con la posicion donde se almacenen como constante

	int num;
	// numbers->size() es la sintaxis que se ha de usar al llamar las funciones del vector cuando este es puntero
	for (int i = 0; i < numbers->size(); i++) 
	{
		cout << "\nIngresa el numero en la posicion " << i << ": ";
		cin >> num;
		(*numbers)[i] = num; // (*numbers)[i] es la sintaxis que se utiliza para decir que valor del puntero esta en que posicion i 
	}
}

//Funcion para mostrar los numeros en sus posiciones

// const vector<int>* const es un puntero donde tanto posicion como valor sean constantes
void ShowNumbers(const vector<int>* const numbers) { 

	// numbers->size() es la sintaxis que se ha de usar al llamar las funciones del vector cuando este es puntero
	for (int i = 0; i < numbers->size(); i++) 
	{
		// (*numbers)[i] es la sintaxis que se utiliza para decir que valor del puntero esta en que posicion i
		cout << "\nPos " << i << ": " << (*numbers)[i] << endl; 

	}
}

// vector<int>* const es puntero con la posicion donde se almacenen como constante
void ShowPosEvenNumbers(vector<int>* const numbers) { 


	int largestEvenNum = 0;
	int posLargestEvenNum = 0;
	vector<int> posSameLargestNum;

	// numbers->size() es la sintaxis que se ha de usar al llamar las funciones del vector cuando este es puntero
	for (int i = 0; i < numbers->size(); i++)
	{
		// (*numbers)[i] es la sintaxis que se utiliza para decir que valor del puntero esta en que posicion i 
		int aux = (*numbers)[i]; 
		int counterEvenNum = 0;

		while (aux != 0)
		{
			int num = aux % 10;
			if (num % 2 == 0)
			{
				counterEvenNum++;
			}

			aux = aux / 10;
		}
		/*Modulamos entre diez el numero para ir sacando sus unidades, si dicha unidad es par el contador aumanta,
		despues se divide entre diez para pasar a la siguiente unidad,
		si queda en cero al dividir significa que ya no hay mas unidades y se cierra el while*/

		 /*Si el contador de numeros pares es igual al mayor numero de digitos pares registrados 
		 y diferente de cero se almacenara en un vector la posicion i*/
		if ((counterEvenNum == largestEvenNum) && (counterEvenNum != 0))
		{
			posSameLargestNum.push_back(i);
		}

		/* Si el contador es mayor al mayor numero de digitos pares registrados cambiara el valor
		del mayor numero de di­gitos pares registrados y la posicion del numero mas grande sera i */
		if (counterEvenNum > largestEvenNum) 
		{
			largestEvenNum = counterEvenNum;
			posLargestEvenNum = i;
		}
	}

	/*(*numbers)[posLargestNum] es la sintaxis que se utiliza para
	decir que valor del puntero esta en que posicion de posLargestNum*/
	cout << "\nEl numero con mayor digitos pares se enencuentra la pasicion "
		<< posLargestEvenNum << ": " << (*numbers)[posLargestEvenNum] << endl; 

	for (int i = 0; i < posSameLargestNum.size(); i++) // for para recorrer el vector
	{
		/*(*numbers)[posLargestNum[i]] es la sintaxis que se utiliza
		para decir que valor del puntero esta en que posicion del vector
		posSameLargestNum en la posicion i del mismo vector*/
		cout << "Otro numero con el mismo numero de di­gitos pares se enencuentra la pasicion "
			<< posSameLargestNum[i] << ": " << (*numbers)[posSameLargestNum[i]] << endl; 

	}
}
