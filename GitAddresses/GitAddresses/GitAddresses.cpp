// GitAddresses.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <string>
using namespace std;

class Address
{
private:
	string City;
	string Street;
	int hNumb;
public: 
	Address()
	{
		City = "";
		Street = "";
		hNumb = NULL;
	}
	void setAdrs(string iCity, string iStreet, int iNumb)
	{
		City = iCity;
		Street = iStreet;
		hNumb = iNumb;
	}
	void getAdrs()
	{
		cout << "г. " << City << ", ул. " << Street << ", д. " << hNumb;
	}
};

int main()
{
	string City; string Street; int numb;
	setlocale(LC_ALL, "Russian");
	cout << "Введите город: "; cin >> City;
	cout << "Введите улицу: "; cin >> Street;
	cout << "Введите номер дома: "; cin >> numb;
	cout << endl;
	Address adr1;
	adr1.setAdrs(City, Street, numb);
	adr1.getAdrs();
	system("pause");
}

