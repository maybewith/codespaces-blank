// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // 입력을 받을 변수를 선언을 한다
    int a;
    
    // 입력을 받는다
    scanf("%d",&a);
    
    // 조건 연산자를 사용하여 평년인지 윤년인지 연산을 한다
    (((a%4==0)&&(a%100!=0))||(a%400==0)) ? printf("L"): printf("C");

    return 0;
}