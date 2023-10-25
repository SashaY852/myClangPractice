#include <stdio.h>

int main()
{
	printf("Celsius to Fahrenheit Conversion\n");

	int celsius, fahrenheit;
	int lower, upper, step;

	lower = -32;
	upper = 32;
	step = 8;

	celsius = lower;
	while (celsius <= upper) {
		fahrenheit = (celsius * 1.8) + 32;
		printf("%3d %6d\n", celsius, fahrenheit);
		celsius = celsius + step;
	}
}

