#include "Header.h"
template <typename T>void FillRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 255 + 0.5;
	}
}



template <typename T>void FillRand(T** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 255 + 0.5;
		}
	}
}


