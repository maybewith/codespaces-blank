// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // 입력을 받을 변수를 선언을 한다
    int a;
    
    // 문자를 입력을 받는다
    scanf("%d",&a);
    
    // 다음과 같이 한다
    if((a%2==0)&&(a%3==0)&&(a%5==0)){
        // 2,3,5로 나누어 떨어지는 경우
        printf("A");
    } else if((a%2==0)&&(a%3==0)){
        // 2,3 떨어질 때
        printf("B");
    } else if((a%2==0)&&(a%5==0)){
        // 2,5 떨어질 때
        printf("C");
    } else if((a%3==0)&&(a%5==0)){
        // 3,5 떨어질 때
        printf("D");
    } else if((a%2==0)||(a%3==0)||(a%5==0)){
        // 2,3,5 중 하나로만 나누어 떨어질 때
        printf("E");
    } else {
        // 나누어 지지 않을 때
        printf("N");
    }
    
    // 코드가 성공적이게 끝났다는 것
    return 0;
}