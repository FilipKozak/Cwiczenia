#include <stdio.h>

int main(void)
{
		int liczb = 0;
		printf("Podaj liczbę, która ma być podniesiona do kwadratu: ");
		scanf("%i", &liczb);
		printf("%ix%i=%i\n",liczb, liczb, liczb*liczb);
		return 0;
}

