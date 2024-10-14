#include <stdio.h>;
#include <math.h>;


int main() {
	float a = 4.16, b = 5.07, x = 7.48;

	float exponent = a * x;
	float term1 = 2 / (1 - x);
	float term2 = b * sin(3 * x);

	float y = exp(exponent) * (term1 + term2);
	printf("Result: %.3f\n", y);
	return 0;
};