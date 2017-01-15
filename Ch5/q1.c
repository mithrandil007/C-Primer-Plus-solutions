
#include<stdio.h>
#define MPH 60
int main(void) {
	int min;
	int hours, minutes;
	printf("Enter time in minutes\n");
	scanf("%d", &min);
	while (min > 0) {
		hours = min / MPH;
		minutes = min%MPH;
		printf("%d minutes is equivalent to %d hours %d minutes\n", min, hours, minutes);
		printf("Enter time in minutes\n");
		scanf("%d", &min);
	}
	return 0;
}

