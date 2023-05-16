/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
    // 디지털근의 최대값을 기억할 변수를 선언한다
    int digitmin=10;
    
    // 최소값이였던 것을 기억할 변수를 선언한다
    int digitreal=0;
        
        
    // 반복문을 통해서 문제를 해결한다
    while(1){
        // 입력을 받을 변수를 선언한다
        int n;
        
        // 입력을 받는다
        scanf("%d",&n);
        
        // 만약 입력된 값이 음수이면 멈춘다
        if(n<0)
            break;
            
        // 임시적으로 디지글근을 저장할 변수를 선언한다
        int digit=n;
        
        // 만약 디지털근이 1자리수가 아니면 한번 더 반복문을 돌려준다
        while(digit/10>0){
            digit=add_digits(digit);
        }
        
        // 만약 digit가 digitmax보다 크면 
        // digit가 digitmax가 된다
        if(digit<digitmin){
            digitmin=digit;
            digitreal=n;
        }
    }
    
    // 결과를 출력해준다
    printf("%d %d",digitreal,digitmin);
    
    return 0;
}
