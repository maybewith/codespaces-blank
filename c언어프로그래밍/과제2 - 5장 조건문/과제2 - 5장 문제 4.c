#include <stdio.h>

int main() {
    // 변수를 설정한다
	int a;

    // 입력을 받는다
	scanf("%d", &a);

    // 자릿수를 입력받을 변수를 설정하고 자릿수를 설정한다
    int ten,n;
    ten=a/10;
    n=a-ten*10;

    // 적절히 범위를 구별해준다
    if(a>20){
        // 10의 자릿수거를 출력한다
        switch (ten)
        {
        case /* constant-expression */:
            /* code */
            break;
        
        default:
            // 아무것도 출력하지 않는다
            break;
        }
        // 1의 자릿수거를 출력한다
        switch (n)
        {
        case /* constant-expression */:
            /* code */
            break;
        
        default:
            break;
        }
    } else if((10<a)&&(a<20)){

    } else {
        printf("none");
    }

	return 0;
}