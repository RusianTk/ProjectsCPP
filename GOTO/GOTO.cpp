// GOTO.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    int opt;


P:
    int ej = 0;
    std::cout << "A rodrigo le gusta el arroz con popote\n";
    cout << "1.-Si" << endl;
    cout << "2.- Si pero en la opcion 2" << endl;
    cout << ej ;
    cin >> opt; 
    
    if (opt == 1)
    {
        cout << "regei" << endl;
        ej++;
        goto P;
    }
    if (opt == 2)
    {
        cout << "rejoto" << endl;
        ej++;
        goto P;
    }
    else
    {
        goto P;
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
