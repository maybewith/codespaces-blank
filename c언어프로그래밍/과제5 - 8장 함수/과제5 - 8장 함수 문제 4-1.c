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
int main()
{
    // 입력을 받을 변수를 선언해준다
    int N,M;
    
    // 입력을 받는다
    scanf("%d %d",&N,&M);
    
    // 입력을 받을 배열을 선언해준다
    int a[N];
    
    // 반복문을 통해서 입력을 받는다
    for(int i=0;i<N;i++)
        scanf("%d",&a[i]);
        
    // 결과값을 출력을 하는데
    // 소수인지 확인해주는 함수를 사용을 하고
    // 소수를 몇 개 출력을 했는지도 count 변수를 통해서 기록을 하면서 출력을 한다
    int count=0;
    for(int i=0;i<N;i++){
        if(count<M)
            if(is_prime_number(a[i])==1){
                printf(" %d",a[i]);
                count+=1;
            }
    }
    
    // 만약 소수가 없다면 0을 출력해준다
    if(count==0)
        printf("0");

    return 0;
}
