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
float cube(int n);
int main(void) {
	int num;
	float cubed;
	printf("Please enter the number to be cubed\n");
	scanf("%d", &num);
	cubed=cube(num);
	printf("Cube of the number is: %.2f\n", cubed);


	return 0;
}
float cube(int n) {
	float cubed;
	cubed = n*n*n;
	return cubed;
}