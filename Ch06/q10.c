

#include<stdio.h>
int main(void) {
	int array[8];
	for (int i = 0; i < 8; i++) {
		scanf("%d", &array[i]);
	}
	for (int i = 7; i >= 0; i--)
		printf("%d\n", array[i]);
	return 0;
}

