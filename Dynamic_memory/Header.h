#pragma once
#include <iostream>

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

using std::cin;
using std::cout;
using std::endl;
//------------------------------------------------------------------------------------------------------
template <typename T>void FillRand(T arr[], const int n);//запись случайных чисел в динамический массив 
template <typename T>void FillRand(T** arr, const int m, const int n);//запись случайных чисел в двумерный динамический массив
//------------------------------------------------------------------------------------------------------
template <typename T>void Print(T arr[], int n);                   //Выводит на экран динамический массив
template <typename T>void Print(T** arr, const int m, const int n);//Выводит на экран двумерный динамический массив
//------------------------------------------------------------------------------------------------------
template<typename T>void Allocate(T** arr,int m, int n);//Выделяет память под динамический массив
template <typename T>void Clear(T** arr, int m);    //Удаляет динамический массив
//------------------------------------------------------------------------------------------------------
template <typename T>T* push_back(T arr[], int& n, int value); //Добавляет элемент в конец динамический массив
template <typename T>T* push_front(T arr[], int& n, int value);
template <typename T>void push_row_back(T**& arr, int& m, int n);//Добавляет строку в конец двумерного динамического массива
template <typename T>void push_row_front(T**& arr, int& m, int n);//Добавляет строку в начало двумерного динамического массива
template <typename T>void push_col_back(T**& arr, int m, int& n);//Добавляет столбец в конец двумерного динамического массива
template <typename T>void push_col_front(T**& arr, int m, int& n);//Добавляет столбец в начало двумерного динамического массива
//------------------------------------------------------------------------------------------------------
template <typename T>T* pop_back(T arr[], int& n); //Удаляет эелемент в конце динамического массива
template <typename T>T* pop_front(T arr[], int& n);//Удаляет элемент в начале динамического массива
template <typename T>void pop_row_back(T**& arr, int& m, int n);//Удаляет строку с конца двумерного динамического массива
template <typename T>void pop_row_front(T**& arr, int& m, int n);//Удаляет строку с начала двумерного динамического массива
template <typename T>void pop_col_back(T**& arr, int m, int& n);	//Удаляет столбец в конце двумерного динамического массива
template <typename T>void pop_col_front(T**& arr, int m, int& n);  //Удаляет столбец в начале двумерного динамического массива
//------------------------------------------------------------------------------------------------------
template <typename T>T* insert(T arr[], int& n, int index);//Вставляет значение в массив по указанному индексу
template <typename T>void insert_row(T**& arr, int& m, int n, int index);//Вставляет строку в двумерный динамический массив по индексу
template <typename T>void insert_col(T**& arr, int m, int& n, int index);//Вставляет столбец по указанному индексу
//------------------------------------------------------------------------------------------------------
template <typename T>T* erase(T arr[], int& n, int index); //Удаляет значение из массива по указанному индексу
template <typename T>void erase_row(T**& arr, int& m, int n, int index);//Удаляет строку по указанному индексу
template <typename T>void erase_col(T**& arr, int m, int& n, int index);  //Удаляет столбец по указанному индексу




