#include <stdio.h>

int main() {
	int input1, input2, input3;
	int pizza = 15000;
	int burger = 5000;
	int salad = 4500;
	int ice_cream = 800;
	int beverage = 500;
	int sum = 0;

	scanf("%d %d %d", &input1, &input2, &input3);

	if (input1 == 1) {
		printf("Pizza\n");
		sum = sum + pizza;
	}
	else if (input1 == 2) {
		printf("Burger\n");
		sum = sum + burger;
	}
	else if (input1 == 3) {
		printf("Salad\n");
		sum = sum + salad;
	}
	else if (input1 == 4) {
		printf("Ice cream\n");
		sum = sum + ice_cream;
	}
	else if (input1 == 5) {
		printf("Beverage\n");
		sum = sum + beverage;
	}
	else {
		printf("None\n");
		sum = sum + 0;
	}


	if (input2 == 1) {
		printf("Pizza\n");
		sum = sum + pizza;
	}
	else if (input2 == 2) {
		printf("Burger\n");
		sum = sum + burger;
	}
	else if (input2 == 3) {
		printf("Salad\n");
		sum = sum + salad;
	}
	else if (input2 == 4) {
		printf("Ice cream\n");
		sum = sum + ice_cream;
	}
	else if (input2 == 5) {
		printf("Beverage\n");
		sum = sum + beverage;
	}
	else {
		printf("None\n");
		sum = sum + 0;
	}



	if (input3 == 1) {
		printf("Pizza\n");
		sum = sum + pizza;
	}
	else if (input3 == 2) {
		printf("Burger\n");
		sum = sum + burger;
	}
	else if (input3 == 3) {
		printf("Salad\n");
		sum = sum + salad;
	}
	else if (input3 == 4) {
		printf("Ice cream\n");
		sum = sum + ice_cream;
	}
	else if (input3 == 5) {
		printf("Beverage\n");
		sum = sum + beverage;
	}
	else {
		printf("None\n");
		sum = sum + 0;
	}

	printf("Total:%dwon\n", sum);

	return 0;
}