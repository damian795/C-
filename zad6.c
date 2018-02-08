#include <stdio.h>

int main()
{
	/* 
		|| OR, LUB
		&& AND, I
	*/

	/* [5, 10) */

	int a, b = 101; 
	scanf("%d", &a);

	if(a >= 5 && a < 10)
	{
		printf("liczba miesci sie w przedziale\n");
		
		if(b % 2 == 0)
			printf("parzysta\n");
			
		if(b % 2 != 0)
			printf("nieparzysta\n");
	}
	else
	{
		printf("liczba nie miesci sie w przedziale\n");
	}

	return 0;
}
