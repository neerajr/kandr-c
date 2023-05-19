#include<stdio.h>
unsigned setbits(unsigned  x,int p,int n,unsigned y);
main()
{
	int p,n;
	unsigned x,y;
	unsigned result;
	x=y=result= 0;
	printf("\nEnter first number, position, number of bits, second number\n");
	scanf("%u,%d,%d,%u",&x,&p,&n,&y);
	result = setbits(x,p,n,y);
	printf("result is : %d\n", result);
}

unsigned setbits(unsigned x,int p, int n, unsigned y)
{
	return (x & ~(~(~0<<n)<<(p+1-n)))  | ( (y & (~(~0<<n))) << (p+1-n));
}
