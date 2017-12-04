#include<stdio.h>
#include<string.h>
#include "task3.h"
int main()
{
	char word[SIZE];
	//char result[SIZE] = { " " };
	char buf[SIZE];
	printf("Enter a line :\n");
	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = '\0';// change '\n' on  end of line
	
	getMaxWord(buf, word);
	printf("max lenght : %i symbol \nword it:  %s   \n", getMaxWord(buf, word), word);
	
	return 0;
}


/*Написать программу, которая для введённой строки выводит самое длинное
слово его длину
Пояснение

Строка, вводимая с клавиатуры может содержать любое количество пробельных и непробельных символов.Таким образом, мы рассматриваем слово как последовательность символов, разделенную любым количеством пробелов(пробелы могут находиться и в начале и в конце строки).

Состав

Программа должна состоять из функций :

int getMaxWord(char buf[], char word[]) - нахождение слова максимальной длины.Слово записывается в массив word, а его
длина возвращается из функции
main().*/