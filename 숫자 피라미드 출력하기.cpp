#include <stdio.h>

// �ݺ��Լ��� �̿��ؼ� ���� �Ƕ�̵带 ����մϴ�. 
// �ݺ��Լ� ���� ���� ���� FOR���� WHILE������ ������ �ȴ�.
int printf(int a)
{
	int i, j;
	for(i = 0; i < a; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("%d", j + 1);
		}
		printf("\n");
	}
} 

int main(void)
{
	int a;
	scanf("%d", &a);
	printf(a);	
	return 0;
}
