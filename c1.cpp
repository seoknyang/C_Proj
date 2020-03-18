#include <stdio.h>
int main(void)
{
	unsigned char a1=0xa1;
	unsigned char a2=0xe1;
	
	printf("%c%c%c%c%c%c%c%c%c%c\n", a1, a2, a1, a2, a1, a2, a1, a2, a1, a2);
	printf("%c%c%c%c\n", a1, a2, a1, a2);
	printf("%c%c%c%c\n", a1, a2, a1, a2);
	printf("%c%c%c%c%c%c%c%c%c%c\n", a1, a2, a1, a2, a1, a2, a1, a2, a1, a2);
	
	
	return 0;
}
