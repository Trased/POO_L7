#include "Student.h"
#include "angajat.h"
int main() {
	Data data(2000, 3, 20);
	Data data1(2001, 4, 19);
	Data data2(1999, 7, 12);
	Data data3(1989, 12, 12);
	Data data4(1998, 11, 11);
	Data data5(2002, 1, 1);
	int grupa1 = 1102;
	int grupa2 = 1100;
	int grupa3 = 1101;
	Student v[6] = {
		Student((char*)"Radu", (char*)"Stefan", &data, grupa1),
		Student((char*)"Andrei", (char*)"Ifrim", &data1, grupa2),
		Student((char*)"Ciprian", (char*)"Baieru", &data2, grupa2),
		Student((char*)"Valentin", (char*)"Gisca", &data3,grupa3),
		Student((char*)"Tudor", (char*)"Cozma", &data4, grupa1),
		Student((char*)"Cristian", (char*)"Bajieru", &data5, grupa3)
	};
	for (int i = 0; i < 6; i++)
	{
		v[i].afisare();
		cout << "\n";
	}
	cout << "\n________________________\n";
	 v->sortare(v);
	cout << "\n________________________\n";
	for (int i = 0; i < 6; i++)
	{
		v[i].afisare();
		cout << "\n";
	}

	Data angajare(2019, 3, 12);
	Data angajare1(2018, 9, 9);
	Data angajare2(2022, 10, 25);
	Data angajare3(2010, 12, 28);
	Data curent(2022, 11, 26);
	Angajat a[4] = {
		Angajat((char*)"Radu", (char*)"Stefan",&data,angajare, 500),
		Angajat((char*)"Andrei", (char*)"Ifrim", &data1,angajare1, 9000),
		Angajat((char*)"Ciprian", (char*)"Baieru", &data2,angajare2, 5678),
		Angajat((char*)"Valentin", (char*)"Gisca", &data3,angajare3, 9999)
	};
	for (int i = 0; i < 4; i++)
	{
		cout << "\n________________________\n";
		a[i].afisare();
		a[i].getVarstaAngajare();
		a[i].afisarePerioadaMuncita(curent);
	}
	
	return 0;
}