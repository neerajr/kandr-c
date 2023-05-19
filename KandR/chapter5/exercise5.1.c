#include<stdio.h>
#include<ctype.h>
#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;

int getch(void);
void ungetch(int);
int getint(int *pn);

main()
{
	int *val;
	getint(val);
	printf("%d\n",*val);

}

int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if(bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else 
		buf[bufp++] = c;
}

int getint(int *pn)
{
	int c, d, sign;
	while (isspace(c=getchar()))
		;
	if(!isdigit(c) && c !=EOF && c != '+' && c != '-'){
		ungetch(c);
		return 0;
	}
	sign = (c == '-') ? -1 : 1 ;
	if(c == '+' || c == '-'){
		d = c;
		if(!isdigit(c=getchar())){
			if(c != EOF)
				ungetch(d);
			return d;
		}
	}
	for(*pn =0; isdigit(c); c=getch())
		*pn = 10 * *pn + (c - '0');
	*pn *= sign;
	if(c != EOF)
		ungetch(c);
	return c;
}

