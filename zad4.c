#include <stdio.h>
#include <math.h>

int main()
{
	double p1, p2;
	double liczba = 25;
	double liczba2 = 27;

	p1 = sqrt(liczba);
	p2 = pow(liczba2, 1/3.0);
	
	printf("%lf\n %lf\n", p1, p2);
	
	return 0;
}
