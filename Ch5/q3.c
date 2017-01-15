
#include<stdio.h>
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
}
