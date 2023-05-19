#include<stdio.h>
#include<string.h>
#define MAX 100
int str_reverse(char []);
main()
{
	int i=0,c;
	char s[MAX];
	printf("Enter the string\n");
	while((c=getchar()) != '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	str_reverse(s);
	for(i=0; s[i] !='\0'; ++i)
		printf("%c",s[i]);
	printf("\n");
	return 0;
}

int str_reverse(char s[])
{
	char c;
	int i,j;
	for(i=0,j=strlen(s)-1; i<j; ++i,--j){
		c = s[i], s[i] = s[j], s[j] = c;
	}
	return 0;
}


