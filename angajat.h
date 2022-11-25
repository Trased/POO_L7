#pragma once
#include "persoana.h"
class Angajat :public Persoana {
	Data dataAngajare;
	int salariu;
public:
	Angajat(char*, char*, Data* dn, Data dA, int sal);
	Data getDataAngajare();
	int getSalariu();
	int getVarstaAngajare();
	void afisarePerioadaMuncita(Data& dataCurenta);
	void afisare();

};