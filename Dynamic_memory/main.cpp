#include "Header.h"
#include "Allocate.cpp"
#include "Clear.cpp"
#include "erase.cpp"
#include "FillRand.cpp"
#include "insert.cpp"
#include "pop.cpp"
#include "Print.cpp"
#include "push.cpp"




int main()
{
	setlocale(LC_ALL, "rus");

#ifdef DYNAMIC_MEMORY_1
	int n;//Количество элементов в массиве
	cout << "Введите размер массива ";	cin >> n;
	int value;

	int* arr = new int[n] {};
	FillRand(arr, n);
	Print(arr, n);
	cout << "Введите добавляемое значение "; cin >> value;

	arr = push_back(arr, n, value);
	Print(arr, n);

	cout << "Введите добавляемое значение "; cin >> value;
	arr = push_front(arr, n, value);
	Print(arr, n);

	cout << "Удаление последнего элемента массива " << endl;
	arr = pop_back(arr, n);
	Print(arr, n);

	cout << "Удаление первого элемната массива" << endl;
	arr = pop_front(arr, n);
	Print(arr, n);


	cout << "Введите индекс элемента для добавления от 0 до " << n << endl; cin >> value;
	arr = insert(arr, n, value);
	Print(arr, n);


	cout << "Введите индекс эелемента для удаления от 0 до " << n - 1 << endl;	cin >> value;
	arr = erase(arr, n, value);
	Print(arr, n);

	delete[] arr;
	cout << "Массив удален";
#endif // DYNAMIC_MEMORY_1


#ifdef DYNAMIC_MEMORY_2	

	int m;//Количество строк 
	int n;//Количество элементов в строке
	int value;
	cout << "Введите количество строк "; cin >> m;
	cout << "Введите количество элементов в строке "; cin >> n;
	///////////////////////////////////////////////////////////
	//1)Создаем массив указателей:
	


	double** arr = new double* [m];
	//char** arr = new char* [m];
	//int** arr = new int* [m];


	//2)Выделяем память под строки двумерного масива:
	cout << "arr" << endl;
	Allocate(arr, m, n);
	FillRand(arr, m, n);
	Print(arr, m, n);

	//3)Удаление двумерного динамического массива:
	//Clear(arr, m);

	/////////////////////////////////////////////////////////


	//4)Добавляем строку в конец двумерного динамического массива
	cout << "push_row_back" << endl;
	push_row_back(arr, m, n);
	Print(arr, m, n);
	cout << endl;


	//5)Добавляем строку в начало двумерного динамического массива

	cout << "push_row_front" << endl;
	push_row_front(arr, m, n);
	Print(arr, m, n);

	cout << endl;
	cout << endl << m << endl;
	//6)Вставляет строку в двумерный динамический массив по индексу	
	cout << "Введите индекс для добавления строки от 0 до " << m << endl; cin >> value;
	cout << "insert_row" << endl;
	insert_row(arr, m, n, value);
	Print(arr, m, n);

	system("pause");


	//7)Удаляет строку с конца двумерного динамического массива
	cout << "pop_row_back" << endl;
	pop_row_back(arr, m, n);
	Print(arr, m, n);


	//8)Удаляет строку с начало двумерного динамического массива
	cout << "pop_row_front" << endl;
	pop_row_front(arr, m, n);
	Print(arr, m, n);


	//9)Удаляет строчку по указанному индексу
	cout << "erase_row" << endl;
	cout << "Введите индекс строки для удаления от 0 до " << m - 1 << endl; cin >> value;
	erase_row(arr, m, n, value);
	Print(arr, m, n);
	system("pause");


	//10)Добавляет столбец в конец двумерного динамического массива
	cout << "push_col_back" << endl;
	push_col_back(arr, m, n);
	Print(arr, m, n);


	//11)Добавляет столбец в начало двумерного динамического массива
	cout << "push_col_front" << endl;
	push_col_front(arr, m, n);
	Print(arr, m, n);


	//12)//Вставляет столбец по указанному индексу
	cout << "Введите индекс для добавления столбца от 0 до " << n << endl; cin >> value;
	cout << "insert_col" << endl;
	insert_col(arr, m, n, value);
	Print(arr, m, n);
	system("pause");

	//13)Удаляет столбец в конце двумерного динамического массива
	cout << "pop_col_back" << endl;
	pop_col_back(arr, m, n);
	Print(arr, m, n);


	//14)Удаляет столбец в начале двумерного динамического массива
	cout << "pop_col_front" << endl;
	pop_col_front(arr, m, n);
	Print(arr, m, n);


	//15)Удаляет столбец в начале двумерного динамического массива
	cout << "Введите индекс для удаления столбца от 0 до " << n - 1 << endl; cin >> value;
	cout << "erase_col" << endl;
	erase_col(arr, m, n, value);
	Print(arr, m, n);

	Clear(arr, m);

#endif // DYNAMIC_MEMORY_2

	return 0;
}






