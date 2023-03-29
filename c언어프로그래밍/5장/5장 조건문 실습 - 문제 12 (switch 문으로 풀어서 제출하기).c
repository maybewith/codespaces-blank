#include <stdio.h>

int main() {

	// 음료의 종류와 투입된 금액을 선언한다
	int n,m; 
	int c500 = 0;
	int c100 = 0;

    // 금액의 차이를 위한 변수를 선언한다
	int d; 

	// 가격을 선언한다
	int A = 500;
	int C = 400;
	int L = 300;

    // 음료의 종류와 투입 금액을 입력을 받는다
	scanf("%d", &n); 
	scanf("%d", &m); 

	switch (n) {
	case 1:
    // 아마리카노 일때
		printf("Americano\n");
		d = m-A;
		c500 = d/500;
		c100 = (d%500)/100;
		break;
	case 2:
    // 카페라떼 일때
		printf("Cafe Latte\n");
		d = m-C;
		c500 = d/500;
		c100 = (d%500)/100;
		break;
	default:
    // 레몬티 일때
		printf("Lemon Tea\n");
		d = m-L;
		c500 = d/500;
		c100 = (d%500)/100;
		break;
	}

    // 결과를 출력을 한다
	printf("%d %d\n", c500, c100);




	return 0;
}