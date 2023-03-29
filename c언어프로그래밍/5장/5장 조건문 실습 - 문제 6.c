// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // 입력을 받을 변수를 선언을 한다
    int a,b,c;
    
    // 문자를 입력을 받는다
    scanf("%d %d %d",&a,&b,&c);
    
    // 최대와 최소를 설정을 한다
    int max=a;
    int min=a;
    
    // 최대를 구한다
    if(max<b){
        max=b;
    }
    if(max<c){
        max=c;
    }
    
    // 최소를 구한다
    if(min>b){
        min=b;
    }
    if(min>c){
        min=c;
    }
    
    // 결과를 출력을 한다
    printf("%d %d",max,min);

    return 0;
}