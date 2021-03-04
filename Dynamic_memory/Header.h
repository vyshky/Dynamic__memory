#pragma once
#include <iostream>


using std::cin;
using std::cout;
using std::endl;

void FillRand(int arr[], const int n);//запись случайных чисел в динамический массив            
void FillRand(int** arr, const int m, const int n);//запись случайных чисел в динамический массив

void Print(int arr[], int n);                   //Выводит на экран динамический массив
void Print(int** arr, const int m, const int n);//Выводит на экран двумерный динамический массив

void Allocate(int** arr, int m, int n);//Выделяет память под динамический массив

void Clear(int** arr, int m);    //Удаляет динамический массив

int* push_back(int arr[], int& n, int value); //Добавляет элемент в конец динамический массив
int* push_front(int arr[], int& n, int value);//Добавляет элемент в начало динамического массива

int* pop_back(int arr[], int& n); //Удаляет эелемент в конце динамического массива
int* pop_front(int arr[], int& n);//Удаляет элемент в начале динамического массива

int* insert(int arr[], int& n, int index);//Вставляет значение в массив по указанному индексу
int* erase(int arr[], int& n, int index); //Удаляет значение из массива по указанному индексу


void push_row_back(int**& arr, int& m, int n);//Добавляет строку в конец двумерного динамического массива
int* push_row_front(int**& arr, int& m, int n);//Добавляет строку в начало двумерного динамического массива

void insert_row(int**& arr, int& m, int n, int index);//Вставляет строку в двумерный динамический массив по индексу

void pop_row_back(int**& arr, int& m, int n);//Удаляет строку с конца двумерного динамического массива
void pop_row_front(int**& arr, int& m, int n);//Удаляет строку с начала двумерного динамического массива

void erase_row(int**& arr, int& m, int n, int index);//Удаляет строку по указанному индексу

void push_col_back(int**& arr, int m, int& n);//Добавляет столбец в конец двумерного динамического массива
void push_col_front(int**& arr, int m, int& n);//Добавляет столбец в начало двумерного динамического массива

void insert_col(int**& arr, int m, int& n, int index);//Вставляет столбец по указанному индексу

void pop_col_back(int**& arr, int m, int& n);	//Удаляет столбец в конце двумерного динамического массива
void pop_col_front(int**& arr, int m, int& n);  //Удаляет столбец в начале двумерного динамического массива

void erase_col(int**& arr, int m, int& n, int index);  //Удаляет столбец по указанному индексу



