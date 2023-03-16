#include <stdio.h>
int main()
{
	// 원의 둘레,반지름,넓이를 선언한다
    double l,r,s;

	// 입력을 받는다	
    scanf("%f",&l);
    
    // 반지름을 구한다
    r = l/(2*3.14);

	// 넓이를 구한다
    s = 3.14*r*r;

    // 결과값을 출력을 한다
    printf("%.1lf",s);
    
	// 기본적으로 항상 들어가는 return 값
	return 0;
}