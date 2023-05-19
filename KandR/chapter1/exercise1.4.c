#include<stdio.h>
main()
{
	float far=0;
	float cel=0;
	printf("\n Celsius-Fahrenheit Conversion Table\n");
	printf("*************************************\n");
	while(cel <= 300){
		far = (9.0/5.0)*cel+32;
		printf("%3.0f\t%6.2f\n",cel,far);
		cel+=20;
	}
}
