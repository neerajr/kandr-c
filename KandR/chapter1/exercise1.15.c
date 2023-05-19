#include<stdio.h>
int Fahrenheit_Celsius(int, int);
int Celsius_Fahrenheit(int, int);
main()
{
	printf("\n Fahrenheit-Celsius Conversion Table\n");
	printf("**************************************\n");
	Fahrenheit_Celsius(300,20);
	printf("\n");
	printf("\n Celsius-Fahrenheit Conversion Table\n");
        printf("**************************************\n");
	Celsius_Fahrenheit(300,20);
}

int Fahrenheit_Celsius(int range,int interval)
{
	float far=0;
	float cel=0;
	while(far <= range){
		cel = (5.0/9.0)*(far-32);
		printf("%3.0f\t%6.2f\n",far,cel);
		far+=interval;
	}
}

int Celsius_Fahrenheit(int range,int interval)
{
        float far=0;
        float cel=0;
        while(cel <= range){
                far = (9.0/5.0)*cel+32;
                printf("%3.0f\t%6.2f\n",cel,far);
                cel+=interval;
        }
}

	

