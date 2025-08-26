#include <stdio.h>

int main() {
	int n;
	printf("Enter size: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enternnumbers:\n");
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

	int first = arr[0], second = -99999;
	for (int i = 1; i < n; i++) {
		if(arr[i] > first) {
			second = first;
			first = arr[i];
		}else if (arr[i] > second && arr[i] != first) {
			second = arr[i];
		}
	}

	printf("Second largest = %d\n", second);
	return 0;
}
