#include<stdio.h>
main()
{	int c;
	c=getchar();
	putchar(c);
	while(c==EOF)
		printf("nn\n");
}
