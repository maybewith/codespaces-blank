// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // 변수를 선언한다
    int y1,m1,d1;
    int y2,m2,d2;
    
    // 입력을 받는다
    scanf("%d/%d/%d",&y1,&m1,&d1);
    scanf("%d/%d/%d",&y2,&m2,&d2);
    
    // 년도 같은지 부터 확인을 한다
    if(y1!=y2){
        // 년도가 다르므로 년도가 더 작은 날짜를 프린트 한다
        if(y1>y2){
            // y1 더 크므로 y2를 출력을 한다
            printf("%04d/%02d/%02d",y2,m2,d2);
        } else {
            // y2가 더 크므로 y1을 출력을 한다
            printf("%04d/%02d/%02d",y1,m1,d1);
        }
    } else {
        // 년도가 같으므로 월을 확인한다
        if(m1!=m2){
            // 월이 다르므로 월이 더 작은 날짜를 프린트 한다
            if(m1>m2){
                // m1이 더 크므로 m2를 출력한다
                printf("%04d/%02d/%02d",y2,m2,d2);
            } else {
                // m2이 더 크므로 m1를 출력한다
                printf("%04d/%02d/%02d",y1,m1,d1);
            }
        } else {
            // 월이 같으므로 날짜를 비교를 하여 더 작은 날짜를 출력한다
            if(d1!=d2){
                // 날짜가 같지 않으므로 더 작은 날짜를 출력을 한다
                if(d1>d2){
                    // d2가 d1보다 작으므로 d2를 출력한다
                    printf("%04d/%02d/%02d",y2,m2,d2);
                } else {
                    // d1이 d2 보다 작으므로 d1을 출력한다
                    printf("%04d/%02d/%02d",y1,m1,d1);
                }
            } else {
                // 날짜가 같으므로 아무것이나 출력을 한다
                printf("%04d/%02d/%02d*",y1,m1,d1);
            }
        }
    }
    

    return 0;
}