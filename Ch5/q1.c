// C_Primer_Solutions_Ch5.cpp : Defines the entry point for the console application.
//

//Chapter 5 exercise 1
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

