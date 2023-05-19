#include<stdio.h>
#include<ctype.h>
#define MAX 100
int atoi(char []);
main()
{
	int c;
	char s[MAX];
	printf("Enter string\n");
	int i=0;
	while((c=getchar()) != '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	int result = atoi(s);
	printf("numeric equivalent : %d\n",result);
	return 0;
}

int atoi(char s[])
{
	int i,n,sign =1;
	for(i=0; isspace(s[i]); ++i)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if(s[i] == '-' || s[i] == '+')
		++i;
	for(n=0; isdigit(s[i]); ++i){
		printf("%c\n",s[i]);
		n = 10 *n + (s[i] - '0');
	}
//	printf("%d\n",n);
	return sign * n;
}


