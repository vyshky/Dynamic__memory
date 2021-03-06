#include "Header.h"
template <typename T>T* push_back(T arr[], int& n, int value)
{
	T* buffer = new T[n + 1]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[n] = value;
	n++;
	return arr;
}

template <typename T>T* push_front(T arr[], int& n, int value)
{
	T* buffer = new T[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return arr;
}


/// Двумерный динамический массив.Строки


template <typename T>void push_row_back(T**& arr, int& m, int n)
{
	T** buffer = new T* [++m];
	Allocate(buffer, m, n);

	for (int i = 0; i < m - 1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			buffer[i][j] = arr[i][j];
		}
		delete[] arr[i];
	}
	delete[] arr;
	//Clear(arr, m - 1, n); //Можно использовать функцию Clear вместо delete
	arr = buffer;
}

template <typename T>void push_row_front(T**& arr, int& m, int n)
{
	T** buffer = new T* [++m];
	Allocate(buffer, m, n);

	for (int i = 0; i < m - 1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			buffer[i + 1][j] = arr[i][j];
		}
		delete[] arr[i];
	}
	delete[] arr;
	//Clear(arr, m - 1, n); //Можно использовать функцию Clear вместо delete
	arr = buffer;

}


template <typename T>void push_col_back(T**& arr, int m, int& n)
{
	T** buffer = new T* [m] {};
	Allocate(buffer, m, ++n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			buffer[i][j] = arr[i][j];
		}
		delete[] arr[i];
	}
	delete[] arr;
	arr = buffer;
}

template <typename T>void push_col_front(T**& arr, int m, int& n)
{
	T** buffer = new T* [m] {};
	Allocate(buffer, m, ++n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			buffer[i][j + 1] = arr[i][j];
		}
		delete[] arr[i];
	}
	delete[] arr;
	arr = buffer;
}