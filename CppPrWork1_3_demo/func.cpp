#include<iostream> // подключаем библиотеку ввода-вывода
#include<cmath> // подключаем библиотеку математических функций

float func(float z, float a, float x) { // определение функции
	float y = (0.7 * exp(x - 5) + cos(z)) / sqrt(a * x * z); // вычисляем значение функции
	return y; // возвращаем значение функции
}
