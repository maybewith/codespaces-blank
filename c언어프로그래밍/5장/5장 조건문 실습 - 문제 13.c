// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // 변수를 선언한다
    int i,j,k;
    float average;
    
    // 입력을 받는다
    scanf("%d %d %d",&i,&j,&k);
    
    // 평균을 구한다
    average = i+j+k;
    average = average/3;
    
    // 평균 출력을 하기
    printf("%.2f\n",average);
    
    // 평균에 맞는 성적을 출력을 한다
    if(average>=75){
        printf("A");
    } else if(average>=50){
        printf("B");
    } else {
        printf("F");
    }
    
    return 0;
}