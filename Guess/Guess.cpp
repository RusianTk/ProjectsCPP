#include <iostream> 

using namespace std;

int main()
{
    int numerosecreto, adivinado;
    int intentos = 0;
    srand(static_cast<unsigned int>(time(0)));


    numerosecreto = rand() % 100 + 1;

    do {
        intentos++;
        cout << "Adivina el numero (1 a 100): ";
        cin >> adivinado;
        if (numerosecreto < adivinado) cout << "el numero es mas bajo ";
        else if (numerosecreto > adivinado) cout << "El numero es mas alto ";
    } while (numerosecreto != adivinado);

    int dif = adivinado - numerosecreto;
    if (dif > 0) {
        cout << "el numero es mayor ";
    }
    else {
        dif = dif * -1;

    }


    {
        cout << "Felicidades adivinaste en " << intentos << " intentos ";
    }
    return 0;
}
