#include<stdio.h>
#include<ctype.h>

void count(char *s);

int main(void)
{
	char str[50];
	printf("문자열 입력:");
	scanf("%s", str);
	count(str);
	return 0;
}

void count(char *s)
{
	int number=0, alphabet=0, expression=0;
	for(int i=0; s[i] != NULL; i++)
	{
		if (isdigit(s[i]))
		{
			number++;
		}
		else if (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <=122)
		{
			alphabet++;
		}
		else
		{
			expression++;
		}
	}
	printf("숫자: %d개\n 알파벳: %d개\n 특수기호: %d개\n", number, alphabet, expression);
}
