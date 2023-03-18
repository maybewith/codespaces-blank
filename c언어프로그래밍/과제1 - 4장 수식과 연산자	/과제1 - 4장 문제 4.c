// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // 입력을 받을 정수를 선언을 한다.
    int num,n;
    
    // 입력을 받는다
    scanf("%d",&n);
    
    // 각 자릿수를 위한 변수를 선언을 한다.
    int a,b,c,d;
    
    num=n;
    a=num/1000;
    num-=1000*a;
    b=num/100;
    num-=b*100;
    c=num/10;
    num-=c*10;
    
    // 뒤집은 숫자를 변수 선언해준다.
    int p;
    
    // 뒤집은 숫자를 만들어준다.
    p=num*1000+c*100+b*10+a;
    
    // 그 수를 뒤집은 숫자와의 차의 절댓값을 출력하는 프로그램을 작성한다.
    (n-p)<0 ? printf("%d",p-n) : printf("%d",n-p);

    
    return 0;
}