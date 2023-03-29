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
	int cafe = 400;
	int L = 300;

    // 음료의 종류와 투입 금액을 입력을 받는다
	scanf("%d", &n);
	scanf("%d", &m); 

    // 아메리카노 선택를 선택했을 때, 다른 것을 선택을 했을 때를 순서대로 출력을 한다
	if (n == 1) { 
		printf("Americano\n");
		d = m-A;
		c500 = d/500;
		c100 = (d%500)/100;
	}
	else if (n == 2) {
		printf("Cafe Latte\n");
		d = m-cafe;
		c500 = d/500;
		c100 = (d%500)/100;
	}
	else { 
		printf("Lemon Tea\n");
		d = m-L;
		c500 = d/500;
		c100 = (d%500)/100;
	}

    // 결과를 출력을 한다
	printf("%d %d\n", c500, c100);


	return 0;
}