#include "Header.h"
int* push_back(int arr[], int& n, int value)
{
	int* buffer = new int[n + 1]{};
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

int* push_front(int arr[], int& n, int value)
{
	int* buffer = new int[n + 1];
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


void push_row_back(int**& arr, int& m, int n)
{
	int** buffer = new int* [++m];
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

int* push_row_front(int**& arr, int& m, int n)
{
	int** buffer = new int* [++m];
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
	return *buffer;
}


void push_col_back(int**& arr, int m, int& n)
{
	int** buffer = new int* [m] {};
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

void push_col_front(int**& arr, int m, int& n)
{
	int** buffer = new int* [m] {};
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