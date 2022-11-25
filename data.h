#pragma once
#include <iostream>
using namespace std;
class Data {
	int an;
	int luna;
	int zi;
public:
	Data(int, int, int);
	Data();
	int getAn();
	int getZi();
	int getLuna();
	void setAn(int);
	void setZi(int);
	void setLuna(int);
};
