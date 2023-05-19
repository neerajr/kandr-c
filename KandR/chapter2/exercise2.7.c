#include<stdio.h>
unsigned invert(unsigned  x,int p,int n);
main()
{
	int p,n;
	unsigned x;
	unsigned result;
	x=result= 0;
	printf("\nEnter first number, position, number of bits\n");
	scanf("%u,%d,%d",&x,&p,&n);
	result = invert(x,p,n);
	printf("result is : %d\n", result);
}

unsigned invert(unsigned x,int p, int n)
{
	return x ^ (~(~0 << n) << (p+1-n));
}
