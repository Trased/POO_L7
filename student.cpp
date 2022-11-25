#include "student.h"
Student::Student(char*n, char*p, Data* dn, int gr):Persoana(n,p,dn)
{
	this->grupa = gr;
}
void Student::afisare()
{
	afisarePersoana();
	cout << " grupa: " << grupa;
}
Student::Student(const Student& src):Persoana(src)
{
	this->grupa = src.grupa;
}
Student& Student::operator=(const Student& src)
{
	this->Persoana::operator=(src);
	this->grupa = src.grupa;
	return *this;
}
void Student::sortare(Student std[])
{
	Student temp(std[0]);
	int cont = 6;
	for (int i = 0; i < cont-1; i++)
	{
		for (int j = i+1; j < cont; j++)
		{
			if (std[i].grupa > std[j].grupa)
			{
				temp.Persoana::operator=(std[i]);
				temp.grupa = std[i].grupa;
				std[i] = std[j];
				std[j] = temp;
			}
		}
	}
}