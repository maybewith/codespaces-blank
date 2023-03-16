#include <stdio.h>
int main()
{
	// 각 자릿 수를 위한 변수를 설정을 해준다
    int a,b,c,d,e;

	// 입력을 받는다
	scanf("%d",&a);

	// 값들을 초기화를 한다
	b=0;
	c=0;
	d=0;
	e=0;

	// 각 자릿 수에 맞게 저장을 해준다
	b=a/10000;
	a-=b*10000;
	c=a/1000;
	a-=c*1000;
	d=a/100;
	a-=d*100;
	e=a/10;
	a-=e*10;
    
	// 값들을 출력을 한다
	printf("%dTTHO %dTHO %dHUN %dTEN %d",b,c,d,e,a);
	
	// 기본적으로 항상 들어가는 return 값
	return 0;
}