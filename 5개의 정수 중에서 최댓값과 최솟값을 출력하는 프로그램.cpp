#include <stdio.h>
#include <limits.h>
#define NUMBER 5


int main(void)
{
	int i, max, index, min;
	int array[NUMBER];
	max = 0;
	index = 0;
	// array[0] ~ array[4] : 를 5개가 들어갈 수 있는 크기의 배열 선언
	// array[0] = 30, array[1] = 34, array[2] = 72, array[3] = 35, array[4] = 90
	for(i = 0; i < NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(max < array[i])
		{
			max = array[i];
			index = i;
		}
	}
	printf("가장 큰 값은 %d입니다. 그리고 %d번째에 있습니다.\n", max, index + 1);
	min = INT_MAX;
	for (i = 0; i < NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(min > array[i])
		{
			min = array[i];
			index = 1;
		}
	}
	printf("가장 작은 값은 %d입니다. 그리고 %d번째에 있습니다.\n", min, index + 1); 
	return 0;
} 
