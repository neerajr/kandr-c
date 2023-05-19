#include<stdio.h>
main()
{
	int far;
	printf("\n Fahrenheit-Celsius in Reverse\n");
	printf("********************************\n");
	for(far=300; far>=0; far-=20)
		printf("%3d\t%6.2f\n",far,(5.0/9.0)*(far-32));
}

