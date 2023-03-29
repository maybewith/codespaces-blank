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
    
    // 평균에 맞는 성적을 출력을 한다
    if(average>=91.5){
        printf("A");
    } else if(average>=85.5){
        printf("B");
    } else if(average>=80.5){
        printf("C");
    } else {
        printf("F");
    }
    
    // 100점이 있는지 확인을 한다
    if((i==100)||(j==100)||(k==100))
        printf("Good");
        
    // 60점 미만 확인
    if((i<60)||(j<60)||(k<60))
        printf("Bad");

    return 0;
}