#include<string.h>
#include<stdio.h>
#define IN 1
#define OUT 0
#include "task5.h"

int getSumInt(int arr[],int n)
{
	int summ = 0, i = 0;
	
	while (arr[i] > 0)//lookout the first furst negative number
	{
		i++;
	}
			summ = arr[i];
			i++;
			while (arr[n-1] < 0)//first the last positive number
			{
				n--;
			}
			
			for (;i < n;i++)
			{
				summ += arr[i];
			}

	return summ;
}

/*
Написать программу, которая формирует целочисленный массив размера N,
а затем находит сумму элементов, расположенным между первым отрицательным
и последним положительным элементами.
Пояснение

Массив заполняется случайными числами: отрицательными и положительными поровну (или почти поровну...)

Пример:

[1 -2 3 -4 -6 2 3] -> -5

Состав

Программа должна состоять из функций:

- int getSumInt(int arr[],int N) - нахождение суммы в массиве arr длины N
- main().
*/