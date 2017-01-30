

#include<stdio.h>
int main(void)
{
	double one[8], two[8],sum = 0;
	int a,i=0;
	printf("Enter elements of array\n");
	for (i = 0; i < 8; i++) {
		scanf("%lf", &one[i]);
		sum += one[i];
		two[i] = sum;
	}
	for (i = 0; i < 8; i++) {
		printf("%f\n", two[i]);
	}


	return 0;
}