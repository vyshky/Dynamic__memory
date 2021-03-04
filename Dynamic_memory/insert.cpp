#include"Header.h"
int* insert(int arr[], int& n, int index)
{
	int value;
	cout << "Введите добавляемое значение ";	cin >> value;
	int* buffer = new int[++n]{};

	for (int i = 0, j = 0; i < n; i++, j++)
	{
		if (index == i)
		{
			i++;
		}
		buffer[i] = arr[j];
	}
	delete[] arr;
	buffer[index] = value;
	return buffer;
}

void insert_row(int**& arr, int& m, int n, int index)
{
	int** buffer = new int* [++m]{};
	Allocate(buffer, m, n);

	for (int i = 0, offset = 0; i < m; i++)
	{
		if (i == index)
		{
			offset++;
			continue;
		}
		for (int j = 0; j < n; j++)
		{
			buffer[i][j] = arr[i - offset][j];
		}
	}
	Clear(arr, m - 1);
	arr = buffer;
}

void insert_col(int**& arr, int m, int& n, int index)
{
	int** buffer = new int* [m] {};
	Allocate(buffer, m, ++n);
	for (int i = 0, offset = 0; i < m; i++, offset--)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == index)
			{
				offset++;
			}
			buffer[i][j + offset] = arr[i][j];
		}
		delete[] arr[i];
	}
	delete[] arr;
	arr = buffer;
}
