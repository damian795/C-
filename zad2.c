#include <stdio.h>
#include <math.h>

int main()
{
	double liczba1 = 25.0, liczba2 = 5.0;
	double kwadrat;
	double pierwiastek;

	kwadrat = pow(liczba2, 2);	
	printf("Kwadrat liczby2 = %lf\n", kwadrat);

	pierwiastek = sqrt(liczba1);
	printf("Pierwiastek liczby1 = %.0lf\n", pierwiastek);

	return 0;
}
