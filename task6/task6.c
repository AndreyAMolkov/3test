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
�������� ���������, ������� ��������� ������������� ������ ������� N,
� ����� ������� ����� ��������� ����� ����������� � ������������ ����������.
������:

[1 -2 3 -4 -6 2 3] -> -4

������

��������� ������ �������� �� �������:

- int getSumMaxMin(int arr[],int N) - ���������� ����� � ������� arr ����� N
- main().
*/