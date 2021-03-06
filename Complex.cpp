#include <iostream>
#include "Complex.h"

using namespace std;

bool check(double x, double y)//Проверка
{
	if (x > 1000 || x < -1000 || y > 1000 || y < -1000)
	{
		cout << "Введено неправильное числол\n";
		return 1;
	}
	return 0;
}

void pluss(Complex Z, Complex X)//Сумма двух чисел
{
	Complex rez;
	rez.re = Z.re + X.re;
	rez.im = Z.im + X.im;
	cout << rez.re << " + (" << rez.im << ")i\n";
}

void substruct(Complex Z, Complex X)//Разнасть двух чисел
{
	Complex rez;
	rez.re = Z.re - X.re;
	rez.im = Z.im - X.im;
	cout << rez.re << " + (" << rez.im << ")i\n";
}

void multiplication(Complex Z, Complex X)//Умножение двух чисел
{
	Complex rez;
	rez.re = Z.re * X.re - Z.im * X.im;
	rez.im = Z.re * X.im - Z.im * X.re;
	cout << rez.re << " + (" << rez.im << ")i\n";
}

void devide(Complex Z, Complex X)//Деление двух чисел
{
	Complex rez;
	rez.re = (Z.re * X.re + Z.im * X.im) / (Z.re * X.re + X.im * X.im);
	rez.im = (X.re * Z.im - Z.re * X.im) / (X.re * X.re + X.im * X.im);
	cout << rez.re << " + (" << rez.im << ")i\n";
}
