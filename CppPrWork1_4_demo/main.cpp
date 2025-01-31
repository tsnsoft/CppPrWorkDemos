#define _CRT_SECURE_NO_WARNINGS // отключение предупреждений о небезопасности

#include <iostream> //подключаем библиотеку ввода-вывода
#include <fstream> //подключаем библиотеку файлового ввода-вывода
#include <cstring> //подключаем библиотеку для работы со строками

using namespace std; //используем пространство имен std

struct costume { // структура для хранения данных о костюмах
	char firm[30]; // название фирмы
	int size; // размер
	int price; // цена
};

char firm[30]; // название фирмы
int ssize; // размер
int price; // цена
const int n = 3; // количество костюмов
costume mas[n]; // массив структур

int main() {
	setlocale(LC_ALL, "Russian"); // установка русской локализации
//	setlocale(LC_ALL, "ru_RU.UTF-8"); // установка русской локализации

	// Запись данных в файл
	ofstream f_out("costume.txt"); //открываем файл для записи
	for (int i = 0; i < n; i++) {//в цикле заполняем файл
		cout << i + 1 << " фирма: ";
		cin >> firm;
		f_out << firm << endl; //вводим название фирмы и записываем в файл
		cout << "Размер:";
		cin >> ssize;
		f_out << ssize << endl; //вводим размер и записываем в файл
		cout << "Цена: ";
		cin >> price;
		f_out << price << endl; //вводим цену и записываем в файл
		cout << "\n"; //переход на новую строку
	}
	f_out.close(); //закрываем файл

	// Чтение данных из файла
	ifstream f_in("costume.txt"); //открываем файл для чтения
	for (int i = 0; i < n; i++) {//в цикле читаем файл
		f_in >> mas[i].firm;
		f_in >> mas[i].size;
		f_in >> mas[i].price; //считываем данные из файла в массив структур
	}
	f_in.close(); //закрываем файл

	// Поиск фирмы с заданным названием
	cout << "\nВведите фирму: "; // выводим сообщение
	scanf("%s", &firm); //вводим название фирмы
	for (int i = 0; i < n; i++) { //в цикле ищем фирму
		if (strcmp(mas[i].firm, firm) == 0) { //если фирма найдена
			cout << "Фирма: " << mas[i].firm << " Размер:"
			     << mas[i].size << " Цена: " << mas[i].price << endl;
		}
	}
}

