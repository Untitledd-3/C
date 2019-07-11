#include <stdio.h>

/* print Fahrenheit-Celsius table
   	for fahr = 0, 20, ..., 300 */
main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = -40;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = -20;	/* set size */

	fahr = upper;
	printf("Fahrenheit   Celsius\n");
	while (fahr >= lower) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%10.0f %9.2f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
