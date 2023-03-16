#include <stdio.h>
int main()
{
	// 변수를 설정을 해준다
    int a,b,c;

	// 입력을 받는다
	scanf("%d",&a);
    
	// 100의 자릿수를 구하기 위해서 계산을 한다
    b=a/10000;
    a-=b*10000;
	c=a/1000;
    a-=c*1000;
    a=a/100;

    // 결과값을 출력을 한다
    printf("%d",a);
    
	// 기본적으로 항상 들어가는 return 값
	return 0;
}