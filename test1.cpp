
 
#include <stdio.h>
#include <ctype.h>
 
int main()
{
    int i = 0;
    int len;
    char str[100] = "";
    
    printf("��ȯ�� ���� �Է�: ");
    gets(str);
 
    for ( i = 0; str[i]; i++)
    {
        if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
    puts(str);
    return 0;
}



