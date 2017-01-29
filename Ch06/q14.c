

#include<stdio.h>
int main(void)
{
	char string[255];
	int i = 0; 
	printf("Enter a string:");
	while (scanf("%c", &string[i]), string[i] != '\n') {
		i++;
	}
	for (; i >= 0; i--) 
		printf("%c", string[i]);

	printf("\n");

	return 0;
}
