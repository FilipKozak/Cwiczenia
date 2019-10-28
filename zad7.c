#include <stdio.h>
#include <stdlib.h> // biblioteka, mozemy wykorzystac funkcje exit_succes

int main(void)
{
		int odpowiedz, wynik; // podstawiamy liczby pod odpowiedz oraz wynik
		odpowiedz = 100;
		wynik = odpowiedz -10;
		printf ("Wynik: %i\n" , wynik - 5); // Od otrzymanego wyniku odejmujemy jeszcze 5 i wyświetla prawidłowy wynik
		exit(EXIT_SUCCESS); // Informuje system, iż aplikacja została zakończona sukcesem
}
