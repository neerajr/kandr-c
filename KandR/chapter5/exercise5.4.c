#include<stdio.h>
#define MAX	100
int strend(char *, char *);
main()
{
	char str1[MAX], str2[MAX];
	int result;
	printf("Enter the first string\n");
	scanf("%s",str1);
	printf("Enter the second one\n");
	scanf("%s",str2);
	result = strend(str1,str2);
	if (result == 1)
		printf("Found the second string at the end of first :-)\n");
	else
		printf("Not found!!!\n");
}

int strend(char *s, char *t)
{
	char *bs = s;
	char *bt = t;
	for(; *s; s++)
		;
	for( ; *t; t++)
		;
	for( ; *s == *t; s--,t--)
		if(s==bs || t==bt)
			break;
	if(*s == *t && t == bt && *s!= '\0')
		return 1;
	else
		return 0;
}



