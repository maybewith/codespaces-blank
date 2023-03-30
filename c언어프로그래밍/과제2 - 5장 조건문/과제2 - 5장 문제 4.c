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
    if(a>=20){
        // 10의 자릿수거를 출력한다
        switch (ten)
        {
        case 2:
            printf("");
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
    } else if((10<=a)&&(a<20)){
	switch (a)
        {
        case 10:
            printf("ten");
            break;
	case 11:
            printf("eleven");
            break;
	case 12:
            printf("");
            break;
	case 13:
            printf("");
            break;
	case 14:
            printf("");
            break;
	case 15:
            printf("");
            break;
	case 16:
            printf("");
            break;
	case 17:
            printf("");
            break;
	case 18:
            printf("");
            break;
	case 19:
            printf("");
            break;
        default:
            // 아무것도 출력하지 않는다
            break;
        }
    } else {
        printf("none");
    }

	return 0;
}
