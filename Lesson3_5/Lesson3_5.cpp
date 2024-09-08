
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int firstNum;
	int secondNum;
	cout << "Введите первое число: ";
	cin >> firstNum;
	cout << "Введите второе число: ";
	cin >> secondNum;
	cout << "-----Проверяем-----\n";
	if (firstNum % secondNum == 0) {
		cout << "Да, " << firstNum << " делится на " << secondNum << " без остатка!\n";
	}
	else {
		cout << "Нет, " << firstNum << " не делится на " << secondNum << " без остатка!";
	}

}
