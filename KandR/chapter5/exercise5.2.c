#include<stdio.h>
#include<ctype.h>
#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;

int getch(void);
void ungetch(int);
int getfloat(int *pn);

main()
{
	int *val;
	getfloat(val);
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

int getfloat(int *pn)
{
	int c,sign;
	float power;
	while (isspace(c=getchar()))
		;
	if(!isdigit(c) && c !=EOF && c != '+' && c != '-' && c != '.'){
		ungetch(c);
		return 0;
	}
	sign = (c == '-') ? -1 : 1 ;
	if(c == '+' || c == '-')
		c = getch();
	for(*pn =0.0; isdigit(c); c=getch())
		*pn = 10.0 * *pn + (c - '0');
	if(c = '.')
		c = getch();
	for(power = 1.0; isdigit(c); c=getch()){
		*pn = 10.0 * *pn + (c-'0');
		power *= 10.0;
	}
	*pn *= sign/power;
	if(c != EOF)
		ungetch(c);
	return c;
}

