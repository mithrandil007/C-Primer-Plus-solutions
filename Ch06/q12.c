

#include<stdio.h>
int main(void) {
	int array[8];
	for (int i = 0,j =1; i < 8; i++,j++) 
		array[i] = 2 * j;
	int i = 0;
	do {
		printf("%d\n", array[i]);
		i++;
	} while (i < 8);
	return 0;
}

