/*#include<stdio.h>

double Temperatures(double temp);
int main(void) {
	double temp;
	int num;
	char t;
	while (scanf("%d", &num) == 1);
	printf("Please enter temperature to be converted");
	scanf("%c", &t);
	while (scanf("%lf", &temp)) {
		Temperatures(temp);
		printf("Please enter temperature to be converted");
	}

	return 0;

}
double Temperatures(double temp) {
	const double CM = (double) 5/9;
	const double CA = -32.0;
	const double KA = 273.16;
	double kelvin, celcius;
	celcius = (temp + CA)*CM;
	kelvin = celcius + KA;
	printf("Temperature in celcius:%.2lf \nTemperature in kelvin: %.2lf\n", celcius, kelvin);
}*/

/*#include<stdio.h>
#define SIZE 10
#define PAR 72
int main(void) {
	int index, score[SIZE];
	int sum = 0;
	float average;
	printf("Enter %d golf scores:\n", SIZE);
	for (index = 0; index < SIZE; index++)
		scanf("%d", &score[index]);
	printf("The scores read in are as follows:\n");
	for (index = 0; index < SIZE; index++)
		printf("%5d", score[index]);
	printf("\n");
	for (index = 0; index < SIZE; index++)
		sum += score[index];
	average = (float)sum / SIZE;
	printf("Sum = %d, average = %.2f\n", sum, average);
	printf("That's a handicap of %.0f.\n", average - PAR);

	return 0;
}*/

#include<stdio.h>

int main(void) {
	float sum = 1000000.00;
	int i = 0;
	while (sum >= 0.0) {
		sum = sum + 0.08*sum;
		sum = sum - 100000;
		printf("%f\n", sum);
		i++;
	}
	printf("%d", i);
}
