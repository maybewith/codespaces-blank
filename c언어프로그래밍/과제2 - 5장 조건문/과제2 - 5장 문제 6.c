#include <stdio.h>

int main() {
	int a, b, c;
	int flag = 0;

	scanf("%d %d %d", &a, &b, &c);

	if (c == (a + b)) {
		printf("+\n");
		flag++;
	}
	if (c == (a - b)) {
		printf("-\n");
		flag++;
	}
	if (c == (a*b)) {
		printf("*\n");
		flag++;
	}
	if (c == (a / b)) {
		printf("/\n");
		flag++;
	}
	if (flag == 0) {
		printf("Incorrect\n");
	}

	return 0;
}