#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Rus");
	int a, b, s, i;
	string c;
	cout << "Выберите операцию: +, -, *, /, ^, sqrt, %, !, exit :";
	cin >> c;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	if (c == "+")
	{
		int c = a + b;
		cout << "Сумма чисел = " << c << endl;
	}
	else if (c == "-")
	{
		int c = a - b;
		cout << "Разность чисел = " << c << endl;
	}
	else if (c == "*")
	{
		int c = a * b;
		cout << "Произведение чисел = " << c << endl;
	}
	else if (c == "/")
	{
		int c = a / b;
		cout << "Частное чисел = " << c << endl;
	}
	else if (c == "^")
	{
		int s = a;
		for (i = 1; i < b; i++)
		{
			s = s * a;
		}
		cout << "Ответ = " << s << endl;
	}
	else if (c == "sqrt")
	{
		cout << "Ответ = " << sqrt(a) << endl;
	}
	else if (c == "%")
	{
		int o;
		s = a / 100;
		o = a % 100;
		cout << "Ответ = " << s << "." << o << endl;
	}
	else if (c == "!")
	{
		s = 1;
		for (i = 1; i <= a; i++)
		{
			s = s * i;
		}
		cout << "Ответ = " << s << endl;
	}
	else if (c == "exit")
	{
		exit;
	}
	return 0;
}