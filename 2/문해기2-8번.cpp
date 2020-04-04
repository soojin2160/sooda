#include<stdio.h>
int main() {
	int coef, expo_x, expo_y;

	scanf_s("%d %d %d", &coef, &expo_x, &expo_y);

	if (coef < -1 && expo_x == 1)
	{
		if (expo_y == 1)
			printf("%d x y", coef);
		if (expo_y > 1)
			printf("%d x y^%d", coef, expo_y);
		if (expo_y == 0)
			printf("%d x", coef);
	}
	if (coef < -1 && expo_x>1)
	{
		if (expo_y == 1)
			printf("%d x^%d y", coef, expo_x);
		if (expo_y > 1)
			printf("%d x^%d y^%d", coef, expo_x, expo_y);
		if (expo_y == 0)
			printf("%d x^%d", coef, expo_x);
	}
	if (coef < -1 && expo_x == 0)
	{
		if (expo_y == 1)
			printf("%d y", coef);
		if (expo_y > 1)
			printf("%d y^%d", coef, expo_y);
		if (expo_y == 0)
			printf("%d ", coef);
	}
	if (coef > 1 && expo_x == 1)
	{
		if (expo_y == 1)
			printf("%d x y", coef);
		if (expo_y > 1)
			printf("%d x y^%d", coef, expo_y);
		if (expo_y == 0)
			printf("%d x", coef);
	}
	if (coef > 1 && expo_x > 1)
	{
		if (expo_y == 1)
			printf("%d x^%d y", coef, expo_x);
		if (expo_y > 1)
			printf("%d x^%d y^%d", coef, expo_x, expo_y);
		if (expo_y == 0)
			printf("%d x^%d", coef, expo_x);
	}
	if (coef > 1 && expo_x == 0)
	{
		if (expo_y == 1)
			printf("%d y", coef);
		if (expo_y > 1)
			printf("%d y^%d", coef, expo_y);
		if (expo_y == 0)
			printf("%d ", coef);
	}
	if (coef == -1 && expo_x == 1)
	{
		if (expo_y == 1)
			printf("-x y");
		if (expo_y > 1)
			printf("-x y^%d", expo_y);
		if (expo_y == 0)
			printf("-x");
	}
	if (coef == -1 && expo_x > 1)
	{
		if (expo_y == 1)
			printf("-x^%d y", expo_x);
		if (expo_y > 1)
			printf("-x^%d y^%d", expo_x, expo_y);
		if (expo_y == 0)
			printf("-x^%d", expo_x);
	}
	if (coef == -1 && expo_x == 0)
	{
		if (expo_y == 1)
			printf("-y");
		if (expo_y > 1)
			printf("-y^%d", expo_y);
		if (expo_y == 0)
			printf("%d", coef);
	}
	if (coef == 1 && expo_x == 1)
	{
		if (expo_y == 1)
			printf("x y");
		if (expo_y > 1)
			printf("x y^%d", expo_y);
		if (expo_y == 0)
			printf("x");
	}
	if (coef == 1 && expo_x > 1)
	{
		if (expo_y == 1)
			printf("x^%d y", expo_x);
		if (expo_y > 1)
			printf("x^%d y^%d", expo_x, expo_y);
		if (expo_y == 0)
			printf("x^%d", expo_x);
	}
	if (coef == 1 && expo_x == 0)
	{
		if (expo_y == 1)
			printf("y");
		if (expo_y > 1)
			printf("y^%d", expo_y);
		if (expo_y == 0)
			printf("%d ", coef);
	}
	return 0;
}