#include <iostream>
#include <string>

using namespace std;

class Entrenador
{
private:

	string NE;
	
public:

	Entrenador(string);
};

Entrenador::Entrenador(string _nombre) {

	NE = _nombre;
	
}

class POOkemon
{
private:

	string m_Nombre;
	int m_Vida;
	int m_Da�o;
	int m_Exp;
	bool muerte = false;
	
public:

	POOkemon(string, int, int);
	void Ataque(int);
	int Placaje();
	int Ara�azo();
	int Gru�ido();
	int Mordisco();
	int getVida();
	bool Muerte();
	void Ganador(string);
	void decir();
	void sale();
	
};

POOkemon::POOkemon(string nombre, int vida, int exp) {

	m_Nombre = nombre;
	m_Vida = vida;
	m_Exp = exp;

}

int POOkemon::getVida() {
	return m_Vida;
}

void POOkemon::sale()
{
	cout << m_Nombre << " tiene " << m_Vida << " de vida" << endl;

}

void POOkemon::decir()
{
	cout << "El POOkemon " << m_Nombre << " tiene " << m_Exp << " de exp : " << endl;

}

void POOkemon::Ganador(string nombre)
{
	cout << nombre << " gana el combate y ha subido 115 puntos de experiencia" << endl;
	m_Exp += 115;
}

class Ataques
{
private:

	int turnos, da�o;

public:

	Ataques(int, int);

};

Ataques::Ataques(int _turnos, int _da�o)
{
	turnos = _turnos;
	da�o = _da�o;
}

bool POOkemon::Muerte()
{
	if (m_Vida <= 0)
	{
		muerte = true;
	}

	return muerte;
}

void POOkemon::Ataque(int da�o) {

	m_Vida -= da�o;

}

int POOkemon::Placaje()
{
	m_Da�o = 15;
	return m_Da�o;
}

int POOkemon::Ara�azo()
{
	m_Da�o = 10;
	return m_Da�o;

}
int POOkemon::Mordisco()
{
	m_Da�o = 20;
	return m_Da�o;
}
int POOkemon::Gru�ido()
{
	m_Da�o = 5;
	return m_Da�o;
}

int main()
{
	string nombre1;
	string nombre2;
	string PN1;
	string PN2;
	bool derrota = false;

	cout << "Entrenador 1, dime tu nombre: ";
	cin >> nombre1;
	cout << "Asignale un nombre a tu POOkemon: ";
	cin >> PN1;

	cout << "\nEntrenador 2, dime tu nombre:  ";
	cin >> nombre2;
	cout << "Asignale un nombre a tu POOkemon: ";
	cin >> PN2;
	cout << "\n";

	Entrenador jugador1 = Entrenador(nombre1);
	Entrenador jugador2 = Entrenador(nombre2);
	POOkemon POOkemon1 = POOkemon(PN1, 100, 0);
	POOkemon POOkemon2 = POOkemon(PN2, 100, 0);

	POOkemon1.decir();
	POOkemon1.sale();
	POOkemon2.decir();
	POOkemon2.sale();

	int turn = 1;

	while (derrota == false) {

		if (turn == 1)
		{

			cout << endl << nombre1 << " Que ataque quieres usar? \n 1.-Mordisco  2.Placaje \n 3.-Gru�ido  4.-Ara�azo" << endl;
			int opt;
			cin >> opt;

			if (opt == 1)
			{
				POOkemon2.Ataque(POOkemon1.Mordisco());
			}
			else if (opt == 2)
			{
				POOkemon2.Ataque(POOkemon1.Placaje());
			}
			else if (opt == 3)
			{
				POOkemon2.Ataque(POOkemon1.Gru�ido());
			}
			else if (opt == 4)
			{
				POOkemon2.Ataque(POOkemon1.Ara�azo());
			}

			cout << endl << PN2 << " ha recibido da�o y ahora tiene " << POOkemon2.getVida() << " de vida" << endl;
			turn = 2;

		}

		else if (turn == 2)
		{

			cout << endl << nombre2 << " Que ataque quieres usar? \n 1.-Mordisco  2.Placaje \n 3.-Gru�ido  4.-Ara�azo" << endl;
			int opt;
			cin >> opt;

			if (opt == 1)
			{
				POOkemon1.Ataque(POOkemon2.Mordisco());
			}
			else if (opt == 2)
			{
				POOkemon1.Ataque(POOkemon2.Placaje());
			}
			else if (opt == 3)
			{
				POOkemon1.Ataque(POOkemon2.Gru�ido());
			}
			else if (opt == 4)
			{
				POOkemon1.Ataque(POOkemon2.Ara�azo());
			}

			cout << endl << PN1 << " ha recibido da�o y ahora tiene " << POOkemon1.getVida() << " de vida" << endl;
			turn = 1;
		}

		if (POOkemon1.Muerte() == true)
		{
			cout << PN1 << " ha sido derrotado ";
			POOkemon2.Ganador(PN2);
			derrota = true;
		}
		else if (POOkemon2.Muerte() == true)
		{
			cout << PN2 << " ha sido derrotado ";
			POOkemon1.Ganador(PN1);
			derrota = true;
		}

	}

}