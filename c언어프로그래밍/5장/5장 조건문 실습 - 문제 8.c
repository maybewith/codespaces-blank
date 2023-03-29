// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // 입력을 받을 변수를 선언한다
    int n;
    
    // 입력을 받는다
    scanf("%d",&n);
    
    // if문을 통해서 잘 나누어 본다
    if(n%4==0){
        if(n%100==0){
            if(n%400==0){
                printf("leap year");
            } else {
                printf("common year");
            }
        } else {
            printf("leap year");
        }
    } else {
        printf("common year");
    }

    return 0;
}