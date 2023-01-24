#include <iostream>
#include <vector>
#include <string>

using namespace std;

class POOkemon {
public:
	POOkemon(const string& name = "", const string& type = "", int age = 0);
	string GetName() const;
	string GetType()const;
	int GetAge();
	POOkemon* GetNext() const;
	void SetNext(POOkemon* next);

private:
	int m_Age;
	string m_Name;
	string m_Type;
	POOkemon* m_pNext;
};

POOkemon::POOkemon(const string& name, const string& type, int age) :
	m_Age(age),
	m_Name(name),
	m_Type(type),
	m_pNext(0)
{}

string POOkemon::GetName()const {
	return m_Name;
}
string POOkemon::GetType()const {  //Estas tres funciones retornaran el nombre, tipo y edad del pokemon
	return m_Type;
}
int POOkemon::GetAge() {
	return m_Age;
}

POOkemon* POOkemon::GetNext() const {
	return m_pNext;
}

void POOkemon::SetNext(POOkemon* next) {
	m_pNext = next;
}

class POOkedex {
	friend ostream& operator<<(ostream& os, const POOkedex& aPOOkedex);
public:
	POOkedex();

	void AddPookemon();
private:
	POOkemon* m_pHead;
};

POOkedex::POOkedex() :
	m_pHead(0)
{}

void POOkedex::AddPookemon() {
	cout << "Enter the name of you´re POOkemon: ";
	string name;
	cin >> name;

	cout << "Enter the type of the POOkemon: ";
	string type;
	cin >> type;

	cout << "Enter the level of the POOkemon: ";
	int lvl;
	cin >> lvl;

	POOkemon* pNewPOOkemon = new POOkemon(name, type, lvl);

	if (m_pHead == 0) {
		m_pHead = pNewPOOkemon;
	}
	else {
		POOkemon* pIter = m_pHead;

		while (pIter->GetNext() != 0) {
			pIter = pIter->GetNext();
		}

		pIter->SetNext(pNewPOOkemon);
	}
}

int main()
{
	POOkedex myPookedex;
	int choice;
	do
	{
		cout << "\n POOkedex\n";
		cout << "0 - Exit POOkedex\n";
		cout << "1 - Create POOkemon\n";
		cout << "2 - Show all POOkemons\n";
		cout << "3 - Search a POOkemon\n";
		cout << endl << "Enter choice: ";
		cin >> choice;
		switch (choice) {
		case 0: cout << "Good-bye\n"; break;
		case 1: myPookedex.AddPookemon(); break;
		case 2: cout << myPookedex; break;
		default: cout << "That was not a valid choice\n";
		}
	} while (choice != 0);

	//cout << myPookedex;
}

ostream& operator<<(ostream& os, const POOkedex& aPOOkedex) {
	POOkemon* pIter = aPOOkedex.m_pHead;
	os << "\nEsta es la POOkedex\n";
	if (pIter == 0) {
		os << "La POOkedex esta vacia\n";
	}
	else {
		while (pIter != 0) {
			os << "Name: " << pIter->GetName() << " Type: " << pIter->GetType() << " Age: "
				<< pIter->GetAge() << endl;
			pIter = pIter->GetNext();
		}
	}
	return os;
}