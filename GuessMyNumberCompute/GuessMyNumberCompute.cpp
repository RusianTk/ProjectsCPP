// GuessMyNumberCompute.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int option;
	bool opcioncorrecta = false;

	do {

		int numeroRandom = rand() % 100 + 1;
		int a = numeroRandom;
		int b = a;

	   Guess: 

		cout << a;
		cout << "Adivinare tu numero, elige entre el 1 y el 100." << endl;
		cout << b << endl;
		cout << "Acerte?" << endl;
		cout << "1.-Si" << endl;
		cout << "2.-No, muy alto" << endl;
		cout << "3.-No, muy bajo" << endl;
		cout << "4.-No, muy cerca" << endl;
		cin >> option;

		if (option == 1)
		{
			opcioncorrecta = true;
		}
		else if (option == 2)
		{

			a = rand() % b + 1;
			goto Guess; 

		}
	} while (!opcioncorrecta);
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
