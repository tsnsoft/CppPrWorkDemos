#define _CRT_SECURE_NO_WARNINGS // отключение предупреждений о небезопасности

#include<iostream> // подключение библиотеки iostream для использования функций ввода/вывода
#include<math.h> // подключение библиотеки math.h для использования математических функций

int main() {
	setlocale(LC_ALL, "Russian"); // установка русской локализации
//	setlocale(LC_ALL, "ru_RU.UTF-8"); // установка русской локализации

	float x, y, b;
	printf("Введите исходные данные х, b через пробел : ");
	scanf("%f %f", &x, &b);

	if (x < 10) {
		y = 1 + b * pow(x, 2);
	} else {
		if (x <= 15) {
			y = log(x) + b;
		} else {
			y = sin(b * x);
		}
	}

	printf("y = %7.3f", y);
}
