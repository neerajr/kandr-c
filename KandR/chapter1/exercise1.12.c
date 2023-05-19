#include<stdio.h>
main()
{
	int c,in;
	while((c=getchar()) !=EOF){
		if(c == ' ' || c == '\n' || c == '\t'){
			in =0;
//			printf("\n");
		}
		else if(in == 0){
			in = 1;
			printf("\n");
		}
		putchar(c);
	}
}	
