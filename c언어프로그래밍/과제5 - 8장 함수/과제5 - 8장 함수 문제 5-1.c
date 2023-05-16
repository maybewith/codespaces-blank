#include <stdio.h>
// 함수를 만들어준다
// 반복문을 통해서 자릿수를 더해준다
int add_digits(int N){
    // 임시로 합을 기억할 변수를 선언해준다
    int sum=0;
    
    // 반복문을 활용하여 자릿수를 더해준다
    while(N>0){
        sum += N % 10;
        N /= 10;
    }
    
    // 합을 돌려준다
    return sum;
}

int main()
{
    // 입력을 받을 변수를 선언한다
    int n;
    
    // 입력을 받는다
    scanf("%d",&n);
    
    
    // 결과를 출력해준다
    printf("%d %d",n,add_digits(n));

    return 0;
}
