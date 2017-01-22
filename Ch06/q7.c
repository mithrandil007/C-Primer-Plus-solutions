

#include<stdio.h>
int main(void) {
	float a, b,ans;
	printf("Enter two numbers\n");
	while (scanf("%f %f", &a, &b) == 2) {
		ans = (float)(a - b) / (a*b);
		printf("Ans: %.2f", ans);
		printf("Enter two numbers\n");
	}
	return 0;
}

