#include <stdio.h>
int main()
{
    // 입력을 받을 정수를 선언을 한다
    int n;

    // 입력을 받는다
    scanf("%d",&n);
    
	// 논리연산과 관계연산을 통해서 계산을 한다
    printf("%d",(20<=n)&&(n<=30));
    
	// 기본적으로 항상 들어가는 return 값
	return 0;
}