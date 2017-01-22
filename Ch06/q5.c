

#include<stdio.h>
int main(void) {
	int var;
	int up, low;
	printf("Please enter upper limit:");
	scanf("%d", &up);
	printf("\n");
	printf("Please enter lower limit:");
	scanf("%d", &low);
	printf("\n");
	printf("number\tsquare\tcube\n");
	for (int i = low; i <= up; i++) {
		printf("%d\t%d\t%d\n", i, i*i, i*i*i);
	}
	return 0;
}

