#include<stdio.h>
int main() {
	int n, i;
	int sum = 0, bin = 1;

	for (i = 1; i <= 10; i++) {
		scanf_s("%d", &n);
		sum += n;
		bin = sum / i;
		printf("%d", bin);

	}
	return 0;
}