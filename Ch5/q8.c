#include<stdio.h>

double Temperatures(double temp);
int main(void) {
	double temp;
	printf("Please enter temperature to be converted");
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
}

