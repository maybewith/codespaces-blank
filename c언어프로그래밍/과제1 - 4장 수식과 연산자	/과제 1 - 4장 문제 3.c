// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // 입력을 받을 변수를 선언을 한다
    int a,b,c;
    
    // 입력을 받는다
    scanf("%d %d %d",&a,&b,&c);
    
    // 자릿수를 위한 변수를 선언을 한다
    int n,m,j;
    
    // 자릿수를 구한다
    n=a/100;
    m=b/100;
    j=c/100;
    
    // 저장을 위한 변수를 선언을 한다
    char sum;
    
    // 개수를 구한다
    sum += ((n==m)&&(m==j)&&(n==j))*'T';
    sum += ((n!=m)&&(m!=j)&&(n!=j))*'S';
    sum += ((n!=m)&&(m==j)&&(n!=j))*'D';
    sum += ((n!=m)&&(m!=j)&&(n==j))*'D';
    sum += ((n==m)&&(m!=j)&&(n!=j))*'D';
    
    // 출력을 한다
    printf("%c",sum);

    return 0;
}