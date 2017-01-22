

#include<stdio.h>

int main(void) {
	const float sum = 100.0f;
	const float si = 0.1f;
	const float ci = 0.05f;
	float s_daphne, s_deirdre;
	int years = 0;
	s_daphne = sum;
	s_deirdre = sum;
	while (s_daphne >= s_deirdre) {
		s_daphne = s_daphne + sum*si;
		s_deirdre = s_deirdre + s_deirdre*ci;
		years++;
	}
	printf("%d\n", years);
}


