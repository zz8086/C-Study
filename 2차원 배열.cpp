#include <stdio.h>

int main(void)
{
	int a[3][4];	// 3행 4열의 크기를 갖는 정수형 배열 a를 선언합니다. 
	int i, j, k = 0;
	for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 4; j++)
			{
				k++;	// k를 1씩 증가시킵니다. k는 총 12회 이므로 1 ~ 12까지 변합니다. 
				a[i][j] = k;
			}
		
		}
	return 0;
} 
