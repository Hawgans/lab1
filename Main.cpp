#include <iostream>
#include <fstream>
#include "Complex.h"

using namespace std;

int main()
{
	system("chcp 1251");
	double x1, x2, y1, y2;
	char v;
	cout << "Число должно быть в диопазоне[-1000; 1000]\n";
	cout << "Введите первое комплексное число(re, im):\n";
	bool bCheck{ true };
	while (bCheck)
	{
		cin >> x1;
		cin >> y1;
		bCheck = check(x1, y1);
	}
	cout << "Введите второе комплексное число(re, im):\n";
	bCheck = true;

	while (bCheck)
	{
		cin >> x2;
		cin >> y2;
		bCheck = check(x2, y2);
	}

	Complex Z = { x1, y1 };
	Complex X = { x2, y2 };
	cout << "Введите операцию:\n";
	cin >> v;

	switch (v)// Выбор операции
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
		cout << "Несуществующая операция\n";
	}

	ifstream F;
	F.open("Text.txt");
	int n;
	F >> n;
	int i;
	int k, k1;
	int MAX = -1;

	Complex pm;

	Complex *p = new Complex[n];
	for (i = 0; i < n; i++)
	{
		F >> k;
		F >> k1;
		Complex z{ k, k1 };
		cout << p[i].re << " " << p[i].im << endl;
		if (sqrt(p[i].re * p[i].re + p[i].im * p[i].im) > MAX)
		{
			MAX = sqrt(p[i].re * p[i].re + p[i].im * p[i].im);
			pm = p[i];
		}
	}
	cout << "Максимум: ";
	cout << pm.re << " " << pm.im << endl;
	system("pause");
}
