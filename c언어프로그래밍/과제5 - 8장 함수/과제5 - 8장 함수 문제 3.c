// Online C compiler to run C program online
#include <stdio.h>

// 서로의 배수인지를 확인하는 함수를 만든다
int multiple(int x,int y){
    if(x%y==0){
        // 배수이므로
        return 1;
    } else {
        // 배수가 아니므로
        return 0;
    }
}

// 최대를 구하는 함수를 만든다
int maximum(int x,int y){
    // 조건문으로 최대를 구한다
    if(x>y){
        // x가 제일 크므로
        return x;
    } else {
        // x가 제일 큰것이 아니므로
        return y;
    }
}

// 자릿수 중에서 제일 큰 것을 찾아주는 함수를 만든다
int digit_maximum(int x){
    // 최대인 함수를 선언한다
    int max=0;
    
    // 반복문을 통해서 최대의 자릿수를 구한다
    while(x != 0)
    {
        // 만약 최대인 것보다 크다면
        if(x%10>max){
            // 최대로 설정을 해준다
            max=x%10;
        }
        // 한번 줄여준다
        x = x/10;
    }
    
    // 최대값을 변환해준다
    return max;
}

int main() {
    // 입력을 받을 변수들을 선언해준다
    int N,M,K;
    
    // 입력을 받는다
    scanf("%d %d %d",&N,&M,&K);
    
    // 최대값을 저장할 변수를 선언한다
    int max=0;
    
    // 반복문을 통해서 N,M 사이의 값들이
    int j=N;
    while((N<=j)&&(j<=M)){
        // K의 배수인지를 확인한다
        if(multiple(j,K)==1){
            // 자릿수가 최대보다 큰지 확인
            max=maximum(max,digit_maximum(j));    
        }
        
        // 나눈 나머지가 더 큰지 확인
        max=maximum(max,j%K);

        // 숫자를 늘려준다
        j++;
    }
    
    // 결과를 출력을 한다
    printf("%d",max);
    
    return 0;
}