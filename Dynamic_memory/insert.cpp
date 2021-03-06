#include"Header.h"
template <typename T>T* insert(T arr[], int& n, int index)
{
	int value;
	cout << "Введите добавляемое значение ";	cin >> value;
	T* buffer = new T[++n]{};

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

template <typename T>void insert_row(T**& arr, int& m, int n, int index)
{
	T** buffer = new T* [++m]{};
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

template <typename T>void insert_col(T**& arr, int m, int& n, int index)
{
	T** buffer = new T* [m] {};
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
