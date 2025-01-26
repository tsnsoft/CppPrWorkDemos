#include<iostream> //подключаем библиотеку ввода и вывода

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian"); //установим русский язык

	const int NUM_ROWS = 5; //константа количества строк
	const int NUM_COLS = 5; //константа количества столбцов

	int array[NUM_ROWS][NUM_COLS] = {//объявление двух мерного массива и его инициализация
		{2, 1, 5, 4, 2},
		{5, 6, 4, 7, 5},
		{6, 2, 3, 4, 8},
		{2, 2, 1, 6, 4},
		{1, 6, 9, 7, 3}
	};

	// выводим исходный массив
	printf("Исходный массив \n");
	for (int r = 0; r < NUM_ROWS; ++r) {//выводим исходный массив
		for (int c = 0; c < NUM_COLS; ++c) { //перебираем столбцы
			cout << array[r][c] << " "; //выводим элементы массива
		}
		cout << endl; //переходим на новую строку
	}
	cout << endl;

	//поиск минимального элемента
	int min = array[0][0]; //ищем минимальное число в массиве
	int position_r = 0; //номер строки минимального элемента
	for (int r = 0; r < NUM_ROWS; ++r) { // перебираем строки
		for (int c = 0; c < NUM_COLS; c++) { //перебираем столбцы
			if (array[r][c] < min) { //если элемент меньше минимального
				min = array[r][c]; //записываем его в переменную min
				position_r = r; //сохраняем номер строки минимального элемента
			}
		}
	}
	cout << "Минимальный элемент массива " << min << endl;
	cout << "Строка с минимальным элементом " << position_r << endl;

	if (position_r == 0) { //если минимальный элемент в первой строке
		cout << "В первой строке есть минимальный элемент! \n";
		cout << endl;
		for (int c = 0; c < NUM_COLS; c++) { //перебираем столбцы
			if (array[0][c] != min) { //если элемент не равен минимальному
				array[0][c] = 0; //заменяем его на 0
			}
		}
	} else {
		cout << "В первой строке нет минимального элемента! \n";
		cout << endl;
	}

	//выводим измененный массив
	for (int r = 0; r < NUM_ROWS; ++r) { //перебираем строки
		for (int c = 0; c < NUM_COLS; ++c) { //перебираем столбцы
			cout << array[r][c] << " "; //выводим элементы массива
		}
		cout << endl; //переходим на новую строку
	}

	return 0; //завершение программы
}

