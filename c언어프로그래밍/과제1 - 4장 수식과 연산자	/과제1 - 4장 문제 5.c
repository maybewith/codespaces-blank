// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // 입력을 받을 변수를 선언을 한다
    int a;
    
    // 입력을 받는다
    scanf("%d",&a);
    
    // 자릿수를 위한 변수를 선언을 한다
    int n,m,j;
    
    // 자릿수를 구한다
    n=a/100;
    a-=100*n;
    m=a/10;
    a-=m*10;
    j=a;
    
    // 저장을 위한 변수를 선언을 한다
    int sum=0;
    
    // 개수를 구한다
    sum += ((n==m)&&(m==j)&&(n==j))*3;
    sum += ((n!=m)&&(m!=j)&&(n!=j))*1;
    sum += ((n!=m)&&(m==j)&&(n!=j))*2;
    sum += ((n!=m)&&(m!=j)&&(n==j))*2;
    sum += ((n==m)&&(m!=j)&&(n!=j))*2;
    
    // 출력을 한다
    printf("%d",sum);

    return 0;
}