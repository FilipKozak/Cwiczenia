#include <stdio.h>

int main(void)
{
		int num = 0;
		printf("Podaj liczbę, która ma być podniesiona do kwadratu: ");
		scanf("%i", &num);
		printf("%ix%i=%i\n",num, num, num*num);
		return 0;
}

