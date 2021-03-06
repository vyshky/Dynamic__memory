#include "Header.h"
template <typename T>T* erase(T arr[], int& n, int index)
{
	T* buffer = new T[--n]{};

	for (int i = 0, j = 0; i < n; i++, j++)
	{
		if (index == i)
		{
			j++;
		}
		buffer[i] = arr[j];
	}
	delete[] arr;
	return buffer;
}

template <typename T>void erase_row(T**& arr, int& m, int n, int index) //Удаляет строку по указанному индексу
{
	T** buffer = new T* [--m]{};
	Allocate(buffer, m, n);
	for (int i = 0, offset = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == index)
			{
				offset = 1;
			}
			buffer[i][j] = arr[i + offset][j];
		}
	}
	Clear(arr, m + 1);
	arr = buffer;
}


template <typename T>void erase_col(T**& arr, int m, int& n, int index)  //Удаляет столбец по указанному индексу
{
	T** buffer = new T* [m] {};
	Allocate(buffer, m, --n);
	for (int i = 0, offset = 0; i < m; i++, offset--)
	{
		for (int j = 0; j < n + 1; j++)
		{
			if (j == index)
			{
				offset++;
			}
			buffer[i][j] = arr[i][j + offset];
		}
		delete[] arr[i];
	}
	delete[] arr;
	arr = buffer;
}