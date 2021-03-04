#include"Header.h"
//Выделяет память под динамический массив
void Allocate(int** arr, int m, int n)
{	
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n]{};		
	}	
}