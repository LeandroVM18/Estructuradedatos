#include <iostream>
#include "Pila.h"
#include "TipoDato.h"
#include <string>

using namespace std;

int main()
{
	int N, cod;
	string desc;
	Pila pilita;
	TipoDato tipito;
	cout << "Ingresar el numero de elementos" << endl;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cout << "Ingresar el codigo del producto" << endl;
		cin >> cod;
		cout << "Ingresar la descripcion del producto" << endl;
		cin >> desc;
		tipito.set_dato(cod, desc);
		tipito.get_dato();
		pilita.Apilar(tipito);
	}
	pilita.VerPila();
}