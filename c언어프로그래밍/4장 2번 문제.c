#include <stdio.h>
int main()
{
	// 각 시간을 위한 변수를 설정을 해준다
    int h,m,s,ss;

    // 초를 입력을 받는다
    scanf("%d",&ss);

    // 각 시,분,초를 나누기를 통해서 구한다
    h=ss/3600;
    ss-=3600*h;
    m=ss/60;
    ss-=60*m;
    s=ss;

    // 각 시,분,초를 출력을 한다
    printf("%d:%d:%d",h,m,s);
    
	// 기본적으로 항상 들어가는 return 값
	return 0;
}