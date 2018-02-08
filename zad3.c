#include <stdio.h>
#include <math.h>

int main()
{
	double a=4,b=5,c=3,p,S;
	p = (a+b+c)/2.0;

	S = sqrt(p * (p-a) * (p-b) * (p-c)) / 4.0;

	printf("Pole trojkata wynosi = %lf\n", S);
	
	return 0;
}
