

#include<stdio.h>

int main(void) {
	float sum = 1000000.00;
	int i = 0;
	while (sum >= 0.0) {
		sum = sum + 0.08*sum;
		sum = sum - 100000;
		printf("%f\n", sum);
		i++;
	}
	printf("%d", i);
}
