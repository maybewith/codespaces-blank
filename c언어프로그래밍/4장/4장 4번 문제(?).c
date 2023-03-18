#pragma warning(disable:4996)
#include<stdio.h>

int main() {

	int input;
	double num;
	int result;

	scanf("%d", &input);

	num = input / 1000.0;
	num = num + 0.5;

	result = (int)num;
	result = result * 1000;


	printf("%d\n", result);

	return 0;
}