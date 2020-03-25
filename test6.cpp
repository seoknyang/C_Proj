#include <stdio.h>
#include <stdlib.h>

void birthday(int number)

{
        int year = number / 10000;

        int month = number % 10000 / 100;

        int day = number % 100;

        if (year > 17)

               printf("19%d년 %d월 %d일\n", year, month, day);

        else if (year > 0 && year < 10)

               printf("200%d년 %d월 %d일\n", year, month, day);

        else if (year >= 10 && year <= 17)

               printf("20%d년 %d월 %d일\n", year, month, day);
}

 
int main(void)

{
        int number;

        while (1)
        {

               printf("생년월일을 입력하시오:");

               scanf("%d", &number);

               birthday(number);

        }
        return 0;
}

