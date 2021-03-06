#include "Header.h"
template <typename T>T* pop_back(T arr[], int& n)
{
	T* buffer = new T[--n]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	return buffer;
}

template <typename T>T* pop_front(T arr[], int& n)
{
	int* buffer = new int[--n]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[] arr;
	return buffer;
}

template <typename T>void pop_row_back(T**& arr, int& m, int n) //Удаляет строку с конца двумерного динамического массива
{
	T** buffer = new T* [--m]{};
	Allocate(buffer, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			buffer[i][j] = arr[i][j];
		}
	}
	Clear(arr, m + 1);
	arr = buffer;
}

template <typename T>void pop_row_front(T**& arr, int& m, int n)//Удаляет строку с начала двумерного динамического массива
{
	T** buffer = new T* [--m]{};
	Allocate(buffer, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			buffer[i][j] = arr[i + 1][j];
		}
	}
	Clear(arr, m + 1);
	arr = buffer;
}

template <typename T>void pop_col_back(T**& arr, int m, int& n)
{
	T** buffer = new T* [m] {};
	Allocate(buffer, m, --n);

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			buffer[i][j] = arr[i][j];
		}
		delete[] arr[i];
	}
	delete[] arr;
	arr = buffer;
}


template <typename T>void pop_col_front(T**& arr, int m, int& n)  //Удаляет столбец в начале двумерного динамического массива
{
	T** buffer = new T* [m] {};
	Allocate(buffer, m, --n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			buffer[i][j] = arr[i][j + 1];
		}
		delete[] arr[i];
	}
	delete[] arr;
	arr = buffer;
}