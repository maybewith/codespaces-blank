#include <stdio.h>
int main()
{
    // 입력을 받을 char를 선언을 한다
    char n;

    // 입력을 받는다
    scanf("%c",&n);
    
	// 논리연산과 관계연산을 통해서 계산을 한다
    printf("%d",(('a'<=n)&&(n<='z'))||(('A'<=n)&&(n<='Z')));
    
	// 기본적으로 항상 들어가는 return 값
	return 0;
}