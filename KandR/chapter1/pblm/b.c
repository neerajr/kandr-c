#include<stdio.h>
main()
{
	char c;
//	c= getchar();
	while((c=getchar())!=EOF){
		putchar(c);
		c= getchar();
	}
}
