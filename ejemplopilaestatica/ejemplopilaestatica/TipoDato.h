#pragma once
#include <string>

using namespace std;

class TipoDato
{
private:
	int id;
	string descripcion;
public:
	TipoDato(void);
	~TipoDato(void);
	void set_dato(int codigo, string desc);
	void get_dato();
};

