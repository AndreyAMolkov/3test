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


/*�������� ���������, ������� ��� �������� ������ ������� ����� �������
����� ��� �����
���������

������, �������� � ���������� ����� ��������� ����� ���������� ���������� � ������������ ��������.����� �������, �� ������������� ����� ��� ������������������ ��������, ����������� ����� ����������� ��������(������� ����� ���������� � � ������ � � ����� ������).

������

��������� ������ �������� �� ������� :

int getMaxWord(char buf[], char word[]) - ���������� ����� ������������ �����.����� ������������ � ������ word, � ���
����� ������������ �� �������
main().*/