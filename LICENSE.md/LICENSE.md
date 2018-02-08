#include <stdio.h>

int main()
{
	float liczba1, liczba2;
	float wynik;
	// float temp = 5.6;

	printf("Podaj pierwsza liczbe:\n");
	scanf("%f", &liczba1);

	printf("Podaj druga liczbe:\n");
	scanf("%f", &liczba2);

	wynik = liczba1 + liczba2;

	printf("Wynik = %.1f\n", wynik);

	return 0;
}


