#include <stdio.h>
#include <math.h>

int main() {
	int num, sum = 0, temp, digit;
	printf("Enter 3-digit number: ");
	scanf("%d", &num);
	temp = num;

	while (temp != 0) {
		digit = temp % 10;
		sum += digit * digit * digit;
		temp /= 10;
	}

	if (sum == num)
		printf("Armstrong\n");
	else
		printf("Not Armstrong\n");

	return 0;
}
