#include <stdio.h>

int main(void) 
{
	int a = 100, b = -200;
	
	printf("����� AND ���� : %d\n", a && b); 
	printf("����� NOT ���� : %d\n", a || b);
	printf("����� OR ���� : %d\n", !a);
	return 0;
}
