#include <stdio.h>

int main(void)
{
		int c,n,silnia=1;
		printf("Podaj liczbę: ");
		scanf("%i", &n);
			if (n < 0)
				printf("%ix%i=%i\n",n, n, n*n);	// Liczy kwadrat liczby ujemnej
			else
			{
				for(c=1; c<= n; c++)
				{
					silnia = silnia * c;
				}
				printf("Silnia liczby %i = %i\n",n,silnia); // Podaje silnie liczby dodatniej
			}
			return 0;

}
