// C_Primer_Solutions_Ch5.cpp : Defines the entry point for the console application.
//

//Chapter 5 exercise 1
/*#include<stdio.h>
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
}*/
/*#include<stdio.h>
int main(void)
{
	int num, i = 0;
	printf("Enter the number\n");
	scanf("%d", &num);
	while (i <= 10) {
		printf("%d \n", num + i);
		i++;
	}
	return 0;
}*/

/*#include<stdio.h>
#define DPW 7
int main(void) {
int days;
int weeks, d;
printf("Enter number of days\n");
scanf("%d", &days);
while (days > 0) {
weeks = days / DPW;
d = days%DPW;
printf("%d days is equivalent to %d weeks and %d days\n", days, weeks, d);
printf("Enter number of days\n");
scanf("%d", &days);
}
return 0;
}*/

#include<stdio.h>
int main(void) {
	int count, sum,var;

	count = 0;
	sum = 0;
	printf("Please enter the limit\n");
	scanf("%d", &var);
	while (count++ < var)
		sum = sum + count*count;
	printf("sum = %d\n", sum);
	return 0;
}
