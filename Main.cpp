#include <iostream>

#include <fstream>

#include "Complex.h"



using namespace std;



int main()



{



	system("chcp 1251");



	double x1, x2, y1, y2;



	char v;



	system("chcp 1251");



	cout << "����� ������ ���� � ���������[-1000; 1000]\n";



	cout << "������� ������ ����������� �����(re, im):\n";



	bool bCheck{ true };



	while (bCheck)



	{



		cin >> x1;

		cin >> y1;

		bCheck = check(x1, y1);



	}



	cout << "������� ����� ����������� �����(re, im):\n";



	bCheck = true;



	while (bCheck)



	{

		cin >> x2;

		cin >> y2;

		bCheck = check(x2, y2);

	}



	Complex Z = { x1, y1 };

	Complex X = { x2, y2 };





	cout << "������� ��������:\n";

	cin >> v;



	switch (v)// ����� ��������



	{



	case '+':

		pluss(Z, X);

		break;



	case '-':

		substruct(Z, X);

		break;



	case '*':

		multiplication(Z, X);

		break;



	case '/':

		devide(Z, X);

		break;



	default:

		cout << "�������������� ��������\n";

	}



	ifstream F;

	F.open("complex.txt");



	int n;



	F >> n;



	int i;

	int k, k1;

	int MAX = -1;



	Complex pm;



	Complex* p = new Complex[n];



	for (i = 0; i < n; i++)



	{

		F >> k;

		F >> k1;



		Complex z{ k, k1 };

		p[i] = z;

		cout << p[i].re << " " << p[i].im << endl;



		if (sqrt(p[i].re * p[i].re + p[i].im * p[i].im) > MAX)



		{



			MAX = sqrt(p[i].re * p[i].re + p[i].im * p[i].im);

			pm = p[i];

		}



	}



	cout << "��������: ";



	cout << pm.re << " " << pm.im << endl;



	system("pause");



}