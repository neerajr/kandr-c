#include<stdio.h>
main()
{
	char c;
	int cnt=0;
//	c= getchar();
	while((c=getchar())!=EOF){
		++cnt;
		putchar(c);
		printf("%d\n",cnt);
	}
}
