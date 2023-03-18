#include <stdio.h>
int main()
{
	// 입력을 받을 수를 변수를 선언한다
    int a;

    // 입력을 받는다
    scanf("%d",&a);

    // 홀수이면 2로 나누었을 때에 1을 나머지로 가지게 된다.
    a=a%2;

    // 홀수와 짝수
    a==1 ? printf("odd") : printf("even");

	// 기본적으로 항상 들어가는 return 값
	return 0;
}