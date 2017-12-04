#include<string.h>
#include<stdio.h>
#include "task6.h"

int getSumMaxMin(int arr[], int n)
{
	int summ = 0, i ,max , min ;
	min=max = arr[0];
		for (i=0;i < n;i++)
	{
			
			if (max < arr[i])// lookout the largerest number
			{
				max = arr[i];
			}
			else if(min > arr[i])// lookout the smallerest number
			{
				min = arr[i];
			}
			summ = max+min;
	}

	return summ;
}



/*
Написать программу, которая формирует целочисленный массив размера N,
а затем находит сумму элементов между минимальным и максимальным элементами.
Пример:

[1 -2 3 -4 -6 2 3] -> -4

Состав

Программа должна состоять из функций:

- int getSumMaxMin(int arr[],int N) - нахождение суммы в массиве arr длины N
- main().
*/