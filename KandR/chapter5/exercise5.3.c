#include<stdio.h>
void str_cat(char *s, char *t);
int main()
{
	char s[100],t[100];
	printf("Enter first string\n");
	scanf("%s",s);
	printf("Enter second one\n");
	scanf("%s",t);
	str_cat(s,t);
	printf("%s\n",s);
}

void str_cat(char *s, char *t)
{
	while(*++s)
		;
	while(*s++ = *t++)
		;
}
