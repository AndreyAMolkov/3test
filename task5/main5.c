#include<stdio.h>
#include<time.h>
#include "task5.h"
#define N 20
#include<stdlib.h>
int main()
{
	int i,n = 20;
	int arr[N] = { 0 };
	srand(time(0));
	n = N;
	for (i = 0;i <= N;i++)
	{
		switch (rand() % 2)
		{
		case 0:
			arr[i] = rand() %(1 - 9)+1;
			break;
		case 1:
			arr[i] = -(rand() %(1 - 9)+1);
			break;
		}
	}

	arr[N] = '\0';
	
	printf("random entered array of numbers :\n");
	i = 0;
	while (i < n)
	{
		printf(" %i",arr[i]);
			i++;
	}
	printf("\nresult =%i\n", getSumInt(arr, n));
	return 0;
}

