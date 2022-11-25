#include "angajat.h"

Angajat::Angajat(char* n, char* p, Data* dn, Data dA, int sal):Persoana(n, p, dn)
{
	this->dataAngajare = dA;
	this->salariu = sal;
}

Data Angajat::getDataAngajare()
{
	return dataAngajare;
}
int Angajat::getSalariu()
{
	return salariu;
}
int Angajat::getVarstaAngajare()
{
	Data temp(2022,11,25);
	Data* cont = getDataNastere();
	int varsta = temp.getAn() - cont->getAn();
	if (temp.getLuna() < cont->getLuna())
	{
		varsta--;
	}
	else
	{
		if (temp.getLuna() == cont->getLuna() && temp.getZi() < cont->getZi())
		{
			varsta--;
		}
	}
	return varsta;
}
void Angajat::afisarePerioadaMuncita(Data& dataCurenta)
{
	Data temp = this->getDataAngajare();
	Data azi(2022, 11, 25);
	int ani, luni, zile;
	if (azi.getZi() < temp.getZi())
	{
		azi.setLuna(azi.getLuna() - 1);
		azi.setZi(azi.getZi() + 30);
	}
	if (azi.getLuna() < temp.getLuna())
	{
		azi.setAn(azi.getAn() - 1);
		azi.setLuna(azi.getLuna() + 12);
	}
	zile = azi.getZi() - temp.getZi();
	luni = azi.getLuna() - temp.getLuna();
	ani = azi.getAn() - temp.getAn();

	cout <<"\nA muncit: "<<ani << " ani " << luni << " luni " << zile <<" zile" << endl;
}
void Angajat::afisare()
{
	afisarePersoana();
	Data temp = getDataAngajare();
	cout << " angajat la data de: "<<temp.getAn() <<"."<<temp.getLuna() <<"."<<temp.getZi()<< " cu salariul: " << salariu << " ";;
}