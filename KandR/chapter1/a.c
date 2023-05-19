#include<stdio.h>
int add(int a,int b);
main()
{
	int sum;
	sum= add(12,14);
	printf("sum is: %d\n",sum);
	return 0;
}

add(int a, int b)
{
	int s;
	s=a*b;
	return s;
}

