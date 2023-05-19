#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define NUMBER	'0'

int getch(void);
int ungetch(int);

int getop(char s[])
{
	int c.i;
	while((s[0] =c =getch()) == ' ' || c= '\t')
		;
	s[i] ='\0';
	i = 0;

