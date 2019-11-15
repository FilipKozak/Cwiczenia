# include <stdio.h>
# include <math.h>

int main() {
int flomin(float time)

	{
    int hrs = (int) floor(time);
    int min = (time - hrs) * 100;
    return hrs * 60 + min;
	}

float minflo(int time)
	{
    float hrs = floor((float)time / 60);
    float min = time - (hrs * 60);
    return hrs + (min / 100);
	}

char operator;
float firstN,secondN;

printf("Wprowadz operator dzialania (+, -, *,): ");
scanf("%c", &operator);

printf("Wprowadz dwie liczby, które mają ulec dzialaniu: ");
scanf("%f %f",&firstN, &secondN);

switch(operator)
	{
    case '+':
    	printf("%0.2f + %0.2f = %0.2f\n",firstN, secondN, minflo(flomin(firstN) + flomin(secondN)));
        break;

    case '-':
    	printf("%0.2f - %0.2f = %0.2f\n",firstN, secondN, minflo(flomin(firstN) - flomin(secondN)));
        break;

    case '*':
    	printf("%0.2f * %0.2f = %0.2f\n",firstN, secondN, minflo(flomin(firstN) * flomin(secondN)));
        break;

    case '/':
    	printf("%0.2f / %0.2f = %0.2f\n",firstN, secondN, minflo(flomin(firstN) / flomin(secondN)));
        break;

    default:
        printf("Operator nie poprawny");
	}

return 0;
}
