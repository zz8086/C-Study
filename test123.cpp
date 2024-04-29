#include <stdio.h>

int main(void)
{
	int a, b, c;
	a = 3;
	b = 3;
	c = ++a / b++;
	printf("%d", c);  
	return 0;
}
