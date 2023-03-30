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
    if(a>=20&&a<100){
        // 10의 자릿수거를 출력한다
        switch (ten)
        {
        case 2:
            printf("twenty");
            break;
	case 3:
            printf("thirty");
            break;
	case 4:
            printf("forty");
            break;
	case 5:
            printf("fifty");
            break;
	case 6:
            printf("sixty");
            break;
	case 7:
            printf("seventy");
            break;
	case 8:
            printf("eighty");
            break;
	case 9:
            printf("ninety");
            break;
        default:
            // 아무것도 출력하지 않는다
            break;
        }
        // 1의 자릿수거를 출력한다
        switch (n)
        {
        case 1:
            printf("-one");
            break;
	case 2:
            printf("-two");
            break;
	case 3:
            printf("-three");
            break;
	case 4:
            printf("-four");
            break;
	case 5:
            printf("-five");
            break;
	case 6:
            printf("-six");
            break;
	case 7:
            printf("-seven");
            break;
	case 8:
            printf("-eight");
            break;
	case 9:
            printf("-nine");
            break;
        default:
	// 아무것도 출력하지 않는다
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
            printf("twelve");
            break;
	case 13:
            printf("thirteen");
            break;
	case 14:
            printf("fourteen");
            break;
	case 15:
            printf("fifteen");
            break;
	case 16:
            printf("sixteen");
            break;
	case 17:
            printf("seventeen");
            break;
	case 18:
            printf("eighteen");
            break;
	case 19:
            printf("nineteen");
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
