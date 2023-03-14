#include <stdio.h>
int main()
{
	// 
	int a;

	// char 변수를 선언을 한다
	char c;

	// (int->int)을 수행한다
	scanf("%d", &a);

	// (int->char->int)를 수행한다
	c = a;

	// printf를 이용하여 두개를 출력을 한다
	printf("(int->int) %d\n", a);
	printf("(int->char->int) %d", c);

	// 기본적으로 항상 들어가는 return 값
	return 0;
}