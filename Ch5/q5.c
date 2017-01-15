

#include<stdio.h>
int main(void) {
	int count, sum,var;

	count = 0;
	sum = 0;
	printf("Please enter the limit\n");
	scanf("%d", &var);
	while (count++ < var)
		sum = sum + count;
	printf("sum = %d\n", sum);
	return 0;
}
