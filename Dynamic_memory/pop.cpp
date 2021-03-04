#include "Header.h"
int* pop_back(int arr[], int& n)
{
	int* buffer = new int[--n]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	return buffer;
}

int* pop_front(int arr[], int& n)
{
	int* buffer = new int[--n]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[] arr;
	return buffer;
}

void pop_row_back(int**& arr, int& m, int n) //Удаляет строку с конца двумерного динамического массива
{
	int** buffer = new int* [--m]{};
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

void pop_row_front(int**& arr, int& m, int n)//Удаляет строку с начала двумерного динамического массива
{
	int** buffer = new int* [--m]{};
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

void pop_col_back(int**& arr, int m, int& n)
{
	int** buffer = new int* [m] {};
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


void pop_col_front(int**& arr, int m, int& n)  //Удаляет столбец в начале двумерного динамического массива
{
	int** buffer = new int* [m] {};
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