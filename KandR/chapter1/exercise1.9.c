#include<stdio.h>
main()
{	int c,d;
	while((c=getchar())!=EOF){
		if(c !=' ')
			putchar(c);
		if (c == ' '){
			putchar(c);
			while((c=getchar()) == ' ')
				;
			putchar(c);
		}
	}
}
			
