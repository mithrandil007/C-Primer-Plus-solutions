

#include<stdio.h>

int main(void) {
	float sum1 = 0,sum2=0;
	int n;
	float sign = 1.0f;
	printf("Please enter number of terms");
	scanf("%d", &n);
	for (float i = 1.0f; i <= n; i++) {
		sum1 = sum1 + (1.0 / i);
		sum2 = sum2 + (1.0 / i)*sign;
		sign = -(sign);
		}
	printf("sum = %.2f   sum2=%.2f", sum1,sum2);
	}
