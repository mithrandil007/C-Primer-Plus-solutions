

#include<stdio.h>

int main(void) {
	int lower, upper;
	int sum;
	printf("Enter lower and upper limit");
	

	while (scanf("%d %d", &lower, &upper) == 2 && upper > lower) {
		
		sum = 0;
		for (int i = lower; i <= upper; i++) {
			sum = sum + i*i;
		}

		printf("Sum: %d\n", sum);
		printf("Enter lower and upper limit");
		
	}
	return 0;
}

