#pragma once
#include "data.h"

class Persoana {
private:
	char* nume, * prenume;
	Data* dataNastere;
protected:
	void afisarePersoana();
public:
	Persoana(char*, char*, Data*);
	~Persoana();
	char* getNume();
	char* getPrenume();
	Data* getDataNastere();
	void setNume(char*);
	void setPrenume(char*);
	void setDataNastere(Data*);
	void afisare();
	Persoana& operator=(const Persoana& src);
};