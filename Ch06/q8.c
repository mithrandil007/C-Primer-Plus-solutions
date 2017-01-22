

#include<stdio.h>
float ansc(float a, float b) {
	return ((float)((a - b) / (a*b)));
}
int main(void) {
	float a, b,ans;
	printf("Enter two numbers\n");
	while (scanf("%f %f", &a, &b) == 2) {
		ans = ansc(a, b);
		printf("Ans: %.2f", ans);
		printf("Enter two numbers\n");
	}
	return 0;
}

