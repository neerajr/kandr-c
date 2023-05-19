#include<stdio.h>
main()
{
	float far=0;
	float cel=0;
	printf("\n Fahrenheit-Celsius Conversion Table\n");
	printf("*************************************\n");
	while(far <= 300){
		cel = (5.0/9.0)*(far-32);
		printf("%3.0f\t%6.2f\n",far,cel);
		far+=20;
	}
}
