#include <stdio.h>
#include <math.h>

int timmin(float times);
float mintim(float minutes);

int timmin(float number)
{
    int hours = number;
    int minutes = (number - hours)*100 + hours*60;
    return minutes;
}

float mintim(float min)
{
    int hours = min/60;
    int minutes = min - hours*60;
    float times = (float)hours + (float)minutes/100;
    return times;
}


char c;

int main()
{  

float firstN,secondN;

printf("Wprowadz operator dzialania (+, -, *, /): \r\n");
scanf("%c", &c);

printf("Wprowadz dwie liczby, ktore maja ulec dzialaniu( W formacie 00.00): \r\n");
printf("Pierwsza: \r\n");
scanf("%f",&firstN);
printf("Druga: \r\n");
scanf("%f", &secondN);

int time_in_min;

switch(c)
	{
    case '+':
        time_in_min = timmin(firstN) + timmin(secondN);
    	printf("%0.2f + %0.2f = %0.2f\n",firstN, secondN, mintim(time_in_min));
        break;
    case '-':
        time_in_min = timmin(firstN) - timmin(secondN);
    	printf("%0.2f - %0.2f = %0.2f\n",firstN, secondN, mintim(time_in_min));
        break;
    case '*':
        time_in_min = timmin(firstN) * secondN;
    	printf("%0.2f * %0.2f = %0.2f\n",firstN, secondN, mintim(time_in_min));
        break;
    case '/':
        time_in_min = timmin(firstN) / secondN;
    	printf("%0.2f / %0.2f = %0.2f\n",firstN, secondN, mintim(time_in_min));
        break;
    default:
       printf("Operator nie poprawny");
	}
	
return 0;		
}
