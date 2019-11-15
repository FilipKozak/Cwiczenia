#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int hours,minutes,seconds,tim;
	time_t now;
	time(&now);
	struct tm *local = localtime(&now);
	hours = local-> tm_hour;
	minutes = local->tm_min;
	seconds = local->tm_sec;
		{
			printf("Godzina w systemie 24h : %02d:%02d:%02d\n",hours, minutes, seconds);
		}
		{
			if (hours < 12) {
				printf("Godzina w systemie 12h : %02d:%02d:%02d am\n",hours, minutes, seconds);
							}
			else {
				printf("Godzina w systemie 12h : %02d:%02d:%02d pm\n",hours - 12, minutes, seconds);
				}
		 }
	 	 {
		 char hex_hour[10],hex_min[10];
		 sprintf(hex_hour,"%x",hours);
		 sprintf(hex_min,"%x",minutes);
		 printf("Godzina w systemie szesnastkowym : %s:%s\n",hex_hour,hex_min);
	 	 }
	 	 {
	 		 int i,j,bin_hour=0;
	 		 i=1;
	 		 for(j=hours;j>0;j=j/2)
	 		 {
	 			bin_hour=bin_hour+(hours%2)*i;
	 			i=i*10;
	 			hours=hours/2;
	 		 }
	 		 int bin_min=0;
	 		 i=1;
	 		 for(j=minutes;j>0;j=j/2)
	 		 {
	 			 bin_min=bin_min+(minutes%2)*i;
	 			 i=i*10;
	 			 minutes=minutes/2;
	 		 }
	 		 printf("Godzina w systemie binarnym: %d:%d\n", bin_hour,bin_min);

	 	 }
	 	 return 0;
 }

