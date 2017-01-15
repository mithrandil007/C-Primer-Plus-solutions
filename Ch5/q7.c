

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
