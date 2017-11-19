
#include "task2.h"
#include<stdio.h>
#include<stdio.h>
#include<string.h>
#define IN 1
#define OUT 0
#define SIZE 512
int main()
{
	char buf[SIZE];
	int flag = OUT;
	int i = 0;
	int count = 0;
	printf("Enter a line :\n");
	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = ' ';//  THE NUmber of the letters of the string
	putchar('\n');
	while (buf[i])
	{
		if (buf[i] != ' ' && flag == OUT)
		{
			count++;
			flag = IN;//enter inside of word
			putchar(buf[i]);// print the first letter of word
		}
		else if (buf[i] != ' ' && flag == IN)
		{
			putchar(buf[i]);// print followings letters of the word
		}

		else if (buf[i] == ' ' && flag == IN)
		{
			flag = OUT;// exit outside of the word
			putchar('\n');// go  to new line for new the word

		}
		i++;
	}
	putchar('\n');
	printf("%d word\n", count);
	return 0;
}

/*Написать программу, которая для введённой строки определяет ко -
личество слов и выводит каждое слово на отдельной строке и его
длину
Пояснение

Строка, вводимая с клавиатуры может содержать любое количество пробельных и непробельных символов.Таким образом, мы рассматриваем слово как последовательность символов, разделенную любым количеством пробелов(пробелы могут находиться и в начале и в конце строки).

Состав

Программа должна состоять из функции :

main().*/