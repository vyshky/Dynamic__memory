#include "Header.h"
int* erase(int arr[], int& n, int index)
{
	int* buffer = new int[--n]{};

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

void erase_row(int**& arr, int& m, int n, int index) //Удаляет строку по указанному индексу
{
	int** buffer = new int* [--m]{};
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


void erase_col(int**& arr, int m, int& n, int index)  //Удаляет столбец по указанному индексу
{
	int** buffer = new int* [m] {};
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