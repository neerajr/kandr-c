#include<stdio.h>
main()
{
	int ndigit[10], nwhite=0, nother=0,c,i;
	for(i =0 ; i<10; i++)
		ndigit[i] = 0;
	printf("Enter input\n");
	while((c=getchar()) != EOF){
		switch(c) {
			case '0': case '1': case '2': case '3': case '4': case '5':  case '6': case '7': case '8': case '9':
				ndigit[c - '0'] ++;
				break;
			case '\n': case '\t': case ' ':
				nwhite++;
				break;
			default: nother++;
				break;
		}
	}
	printf("digits\n");
	for(i=0; i<10; i++)
		printf("%d : %d\n",i,ndigit[i]);
	printf("White space = %d\n",nwhite);
	printf("Others = %d\n", nother);
	return 0;
}

