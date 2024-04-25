#include <stdio.h>

int main(void) 
{
	int a = 99;
	
	printf(" AND 연산 : %d\n", (a >= 100) && (a <= 200));	//	AND 연산을 사용한다.
	printf(" OR 연산 : %d\n", (a >= 100) || (a <= 200));	// OR 연산을 사용한다.
	printf(" NOT 연산 : %d\n", !(a == 100);	//	NOT 연산을 사용한다.
	 
	return 0;
}
