#include<iostream> // подключаем библиотеку ввода-вывода
#include"func.h" // подключаем заголовочный файл с нашей функцией

using namespace std; // используем пространство имен std

float z, a, x; // объявляем переменные

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian"); // установка русской локализации
//	setlocale(LC_ALL, "ru_RU.UTF-8"); // установка русской локализации
	printf("Введите z, a, x: "); // выводим на экран сообщение
	scanf("%f %f %f", &z, &a, &x); // считываем с клавиатуры значения переменных
	cout << func(z, a, x); //вызываем функцию и передаем в нее параметры
	return 0; // возвращаем 0
}
