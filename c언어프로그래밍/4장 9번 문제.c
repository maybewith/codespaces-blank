#include <stdio.h>
int main()
{
	// 입력을 받을 수를 변수를 선언한다
    int a,b;

    // 입력을 받는다
    scanf("%d %d",&a,&b);

    // 두 변수를 서로 곱하고 출력을 한다
    a>b ? printf("%d",a) : printf("%d",b);

	// 기본적으로 항상 들어가는 return 값
	return 0;
}