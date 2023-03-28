#include <stdio.h>

int main() {
	char c;
	int num;
	int length = 'Z' - 'A' + 1;
	char result;

	scanf("%c %d", &c, &num);

	if (c >= 'A' && c <= 'Z') {
		result = (c - 'A' + num) % length + 'A';
		printf("%c", result);
	}
	else if (c >= 'a' && c <= 'z') {
		result = (c - 'a' + num) % length + 'a';
	}
	else {
		printf("%c", c);
	}



	return 0;
}