#include <stdio.h>

int main() 
{

	int KW[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};



	float kw;
	int x;
	int i = 0;
	int n;

	printf("Podaj kwote, ktora zamierzasz wyplacic.\n");
	printf("Najmniejszy nominał obsługiwany przez bankomat: 10gr.\n");
	printf("Przykład kwoty 000.0 \n");
	printf("Wpisz kwote: " );
	scanf("%f", &kw);
	
	printf("Wprowadzono kwote: %3.2f PLN \n", kw);
	

	if (kw > 0)
	{ 
	kw *= 100;
	n = kw;

	printf("\n Wyplacoana kwota: \n");

	while (n >= 1000) {
		
		x = n / KW[i];
		n = n % KW[i];
		
		KW[i] = KW[i] / 100;
		
		if (x ==1 || x==2|| x==3 ||x==4||x>5) {
		printf("Banknotów o nominale %d zl: %d\n", KW[i], x);
		}
		i++;
			}
	while (n >= 100) {
	
		x = n / KW[i];
		n = n % KW[i];
		KW[i] = KW[i] / 100;
	
		if (x ==1 || x==2|| x==3 ||x==4||x>5) {
		printf("Monet o nominale %d zl: %d\n", KW[i], x);
			   }
		i++;
			   }

	while (n >= 1) {
		x = n / KW[i];
		n = n % KW[i];
		
		if (x ==1 || x==2|| x==3 ||x==4||x>5) {
				printf("Monet o nominale %d gr: %d\n", KW[i], x);
					   }
		i++;
			   }
	}
		
return 0;
} 	
