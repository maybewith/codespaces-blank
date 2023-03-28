#include <stdio.h>

int main() {
    // 입력을 받을 변수를 선언한다
	int a;

    // 입력을 받는다
	scanf("%d", &a);

	// 범위 안에 있는지 확인하고 아니면 버린다
    if((10000<=a)&&(10500)){
        switch((a-10000)/100)
        {
        // 적절히 계산 후에 알맞게 케이스를 넣어준다
        case 0:
            printf("Seoul");
            break;
        case 1:
            printf("Seoul");
            break;
        case 2:
            printf("Seoul");
            break;
        case 3:
            printf("Busan");
            break;
        case 4:
            printf("Busan");
            break;
        case 5:
            printf("Gwangju");
            break;
        default:
            // 아무것도 아니므로 none을 출력한다
            printf("none");
            break;
        }
    } else {
        // 범위를 넘어서 있는 수이므로 그냥 아무것도 출력을 하지 않는다
        printf("none");
    }

	return 0;
}