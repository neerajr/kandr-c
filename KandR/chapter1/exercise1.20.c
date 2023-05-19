#include<stdio.h>
#define	TABINC	8
main()
{
	int c,nb;
	int pos =1;
	while((c=getchar()) != EOF){
		if(c == '\t'){
			nb = TABINC - pos % TABINC;
			while(nb > 0){
				putchar(' ');
				++pos;
				--nb;
			}
		}
		else if(c == '\n'){
			pos = 1;
			putchar(c);
		}
		else {
			putchar(c);
			++pos;
		}
	}
}

			
