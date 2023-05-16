#include <stdio.h>

// is_prime_number 함수를 만들어준다
int is_prime_number(int num){
    // 개수를 세는 변수를 선언한다
    int count=0;
    
    // 반복문을 통해서 나눠지는 것을 센다
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count+=1;
        }
    }
    
    // 조건문으로 나눠준다
    if(count==2){
        // 소수이므로 다음과 같은 값을 돌려준다
        return 1;
    } else {
        // 소수가 아니므로 다음과 같은 값을 돌려준다
        return 0;
    }
}

// count_prime_number 함수를 만들어준다
int count_prime_number(int cnt, int num){
    // 만약 소수라면
    if(is_prime_number(num)==1 && num<100){
        return cnt+1;
    } else {
        return 0;
    }
}
int main()
{
    // 입력을 받을 변수를 선언해준다
    int N;
    
    // 입력을 받는다
    scanf("%d",&N);
    
    // 입력을 받을 배열을 선언해준다
    int a[N];
    
    // 반복문을 통해서 입력을 받는다
    for(int i=0;i<N;i++)
        scanf("%d",&a[i]);
        
    // 최대의 개수를 기억하는 변수를 선언한다
    int maxcount=0;

    // 마지막 소수를 기억하는 변수를 선언한다    
    int lastprime=0;
    
    // 일시적으로 길이 값을 기억할 변수를 선언한다
    int tmplength=0;
    
    // 반복문을 통해서 제일 긴 소수 구간을 구한다
    for(int i=0;i<N;i++){
        // 만든 함수를 불러온다
        tmplength=count_prime_number(tmplength,a[i]);
            
        // 최대의 길이보다 크면 그것을 최대값으로 만든다
        if(maxcount<tmplength){
            maxcount=tmplength;
            
            // 마지막 소수도 갱신 시키기
            lastprime=a[i];
        }
            
    }
    
    // 만약 소수가 없다면 0을 출력해준다
    if(maxcount==0){
        printf("0");
    } else{
        // 최대길이를 출력해준다
        printf("%d\n",maxcount); 
        
        // 그 구간의 마지막 소수를 출력해준다
        printf("%d",lastprime); 
    }
        

    return 0;
}
