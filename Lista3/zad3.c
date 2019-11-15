#include<stdio.h>
#include<stdlib.h>

    int main()
    {
        int liczba; 
		int t,d,j,s;
		int i = 0;

        printf("Podaj liczbe slownie w zakresie 0-10 000. \n");
        printf("Prosze podac liczbe: ");
        scanf("%d", &liczba);
        
        while ( liczba >= 10000 || liczba < 0) 
        {
        printf ("Liczba nie znajduje się w zakresie 0-10000!\n Sprobuj ponownie. \n");
        printf("\nPodaj kwote: ");
        scanf("%d", &liczba); 
        i++;
        }
        
        if ( liczba == 0)
		{
        printf("zero złotych");
		}
        
        if( liczba == 1)
        {
        printf("jeden złotych");
        }
        
        t = liczba/1000;
        s = (liczba-t*1000)/100;
        d = (liczba-(t*1000+s*100))/10;
        j = liczba-(t*1000+d*10+s*100);

        printf("\n\nTwoja liczba slownie to: \n");

        if(t > 0){
        switch(t) {
          case 1: printf("tysiac "); break;
          case 2: printf("dwa tysiace "); break;
          case 3: printf("trzy tysiace "); break;
          case 4: printf("cztery tysiace "); break;
          case 5: printf("piec tysiecy "); break;
          case 6: printf("szesc tysiecy "); break;
          case 7: printf("siedem tysiecy "); break;
          case 8: printf("osiem tysiecy "); break;
          case 9: printf("dziewiec tysiecy "); break;
          case 10: printf("dziesiec tysiecy "); break;     
        	}
        }
        if(s > 0){
        switch(s) {
          case 1: printf("sto "); break;
          case 2: printf("dwiescie "); break;
          case 3: printf("trzysta "); break;
          case 4: printf("czterysta "); break;
          case 5: printf("piecset "); break;
          case 6: printf("szescset "); break;
          case 7: printf("siedemset "); break;
          case 8: printf("osiemset "); break;
          case 9: printf("dziewiecset "); break;
        	}
        }
        if(d > 1 && d > 0){
        switch(d) {
          case 1: printf("dziesiec "); break;
          case 2: printf("dwadziescia "); break;
          case 3: printf("trzydziesci "); break;
          case 4: printf("czterdziesci "); break;
          case 5: printf("piecdziesiat "); break;
          case 6: printf("szescdziesiat "); break;
          case 7: printf("siedemdziesiat "); break;
          case 8: printf("osiemdziesiat "); break;
          case 9: printf("dziewiecdziesiat "); break;   
        	}
        }
        if(d == 1 && d > 0) {
         switch((d*10)+j) {
          case 10: printf("dziesiec "); break;
          case 11: printf("jedenascie "); break;
          case 12: printf("dwanascie "); break;
          case 13: printf("trzynascie "); break;
          case 14: printf("czternascie "); break;
          case 15: printf("pietnascie "); break;
          case 16: printf("szesnascie "); break;
          case 17: printf("siedemnascie "); break;
          case 18: printf("osiemnascie "); break;   
          case 19: printf("dziewietnascie "); break;
         }
        }
        if(d != 1) {
        switch(j) {
          case 1: printf("jeden "); break;
          case 2: printf("dwa "); break;
          case 3: printf("trzy "); break;
          case 4: printf("cztery "); break;
          case 5: printf("piec "); break;
          case 6: printf("szesc "); break;
          case 7: printf("siedem "); break;
          case 8: printf("osiem "); break;
          case 9: printf("dziewiec "); break;   
        	}
        if (j == 2 || j == 3 || j == 4)
        {
        printf("zlote");
    	}
    	else
    	{
    	printf("zlotych");
    	}
    	printf("\n\n");
        return 0;   
    }
}
