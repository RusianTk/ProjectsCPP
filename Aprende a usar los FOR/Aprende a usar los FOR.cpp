#include <iostream>

using namespace std;

int main()
{
    float n, i, acum, Dato, prom;

    cout << "Promedio con n datos\n";
    cout << "Cuantos estudiantes tienes?\n";
    cin >> n;
    acum = 0;

    for (i = 1; i <= n; i++) {
        cout << "Ingresa la calificacion del estudiante " << i << endl;
        cin >> Dato;
        acum = acum + Dato;
    }

    prom = acum / n;
    cout << "el promedio es: " << prom << endl;
}

//\n