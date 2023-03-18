// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // 입력을 받을 변수를 선언을 해준다.
    int a;
    
    // 어떤 배수인지 받을 변수를 선언을 해준다.
    int multi=0;
    
    // 입력을 받는다
    scanf("%d",&a);
    
    // 어떤 배수인지 찾아주는 계산을 하자.
    // 15의 배수
    multi += (a%15==0)*15;
    // 5의 배수
    multi += ((a%15!=0)&&(a%5==0))*5;
    // 3의 배수
    multi += ((a%15!=0)&&(a%3==0))*3;
    // 나머지의 경우들
    multi += ((a%15!=0)&&(a%3!=0)&&(a%5!=0))*a;
    
    // 결과값을 출력을 한다.
    printf("%d is a multiple of %d.",a,multi);

    return 0;
}