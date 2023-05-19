#include<stdio.h>
#define	LIM	100
main()
{
	int flag=1;
	int c,i=0;
	char s[LIM];
	while(flag)
		if(i>LIM-1)
			flag = 0;
		else if((c= getchar()) == '\n')
			flag = 0;
		else if(c = EOF)
			flag = 0;
		else{
			s[i] = c;
			++i;
		}
}



