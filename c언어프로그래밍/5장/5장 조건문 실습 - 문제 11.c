// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // 변수 선언하기
    int a,b,c;
    int a1,b1,c1;
    int s,ball;
    s=0;
    ball=0;
    
    // 입력을 받는다
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d %d",&a1,&b1,&c1);
    
    // 스트라이크부터 확인을 한다
    if(a==a1)
        s+=1;
    if(b==b1)
        s+=1;
    if(c==c1)
        s+=1;

    // 볼을 확인한다
    if((a==b1)||(a==c1))
        ball +=1;
    if((b==a1)||(b==c1))
        ball +=1;
    if((c==b1)||(c==a1))
        ball +=1;
        
    // 결과를 출력을 한다
    printf("%dS%dB",s,ball);
    return 0;
}