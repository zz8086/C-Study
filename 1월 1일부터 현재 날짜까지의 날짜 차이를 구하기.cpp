#include <stdio.h>

int getDays(int month, int day)
{
	int i, sum = 0;
	for(i = 1; i < month; i++)
	{
		if(i == 2)	// �� ���α׷������� ������ �������� �ʽ��ϴ�.
		{
			sum += 28;
		} 
		else if(i % 2 == 0)
		{
			sum += 30;
		}
		else
		{
			sum += 31;
		}
	}
	return sum + day;
}
int main(void)
{
	int month, day;
	scanf("%d %d", &month,  &day);
	printf("1�� 1�Ϻ��� �ش� ��¥������ �Ÿ��� %d�Դϴ�.", getDays(month, day)); 
	return 0;
}
