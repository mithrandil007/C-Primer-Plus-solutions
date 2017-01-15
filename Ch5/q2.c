// C_Primer_Solutions_Ch5.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
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
}

