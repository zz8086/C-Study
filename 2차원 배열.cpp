#include <stdio.h>

int main(void)
{
	int a[3][4];	// 3�� 4���� ũ�⸦ ���� ������ �迭 a�� �����մϴ�. 
	int i, j, k = 0;
	for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 4; j++)
			{
				k++;	// k�� 1�� ������ŵ�ϴ�. k�� �� 12ȸ �̹Ƿ� 1 ~ 12���� ���մϴ�. 
				a[i][j] = k;
			}
		
		}
	return 0;
} 
