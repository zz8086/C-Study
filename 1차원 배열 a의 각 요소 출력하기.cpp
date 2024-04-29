#include <stdio.h>

int main(void)
{
	int a[5];	// 5개의 요소를 갖는 정수형 배열 a를 선언합니다. 
	int i;	// 정수형 변수 i를 선언합니다. 
	for (i = 0; i < 5; i++)	// 반복 변수 i가 0에서 시작하여 1씩 증가하면서 5보다 작은 동안 문장을 수행 
		a[i] = i + 10;	// 배열 a의 i번째에 i + 10을 저장합니다. 
	for (i = 0; i < 5; i++)
		printf("%d ", a[i]);	// 배열 a의 i번째를 출력합니다.
	return 0; 
}
