#include <stdio.h>
#include <limits.h>
#define NUMBER 5


int main(void)
{
	int i, max, index, min;
	int array[NUMBER];
	max = 0;
	index = 0;
	// array[0] ~ array[4] : �� 5���� �� �� �ִ� ũ���� �迭 ����
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
	printf("���� ū ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n", max, index + 1);
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
	printf("���� ���� ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n", min, index + 1); 
	return 0;
} 
