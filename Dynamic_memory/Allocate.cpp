#include"Header.h"
//Выделяет память под динамический массив
template<typename T>void Allocate(T** arr, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		arr[i] = new T[n] {};	
	}	
}

//void Allocate(double** arr, int m, int n)//Выделяет память под динамический массив
//{
//	for (int i = 0; i < m; i++)
//	{
//		arr[i] = new double[n] {};
//	}
//}
//
//void Allocate(char** arr, int m, int n)//Выделяет память под динамический массив
//{
//	for (int i = 0; i < m; i++)
//	{
//		arr[i] = new char[n] {};
//	}
//}