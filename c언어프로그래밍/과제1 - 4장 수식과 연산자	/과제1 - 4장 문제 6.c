// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // 입력을 받을 변수를 선언을 한다
    int a,b,c;
    
    // 입력을 받는다
    scanf("%d %d %d",&a,&b,&c);
    
    // 저장을 위한 변수를 선언을 한다
    int sum;
    
    // 개수를 구한다
    sum += ((a>=b)&&(b>=c))*b;
    sum += ((a>=c)&&(c>=b))*c;
    sum += ((b>=a)&&(a>=c))*a;
    sum += ((b>=c)&&(c>=a))*c;
    sum += ((c>=a)&&(a>=b))*a;
    sum += ((c>=b)&&(b>=a))*b;
    
    // 출력을 한다
    printf("%d",sum);

    return 0;
}