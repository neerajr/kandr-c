#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

#define MAXOP 100
#define NUMBER '0'

int getop(char[]);
void ungets(char[]);
void push(double);
double pop(void);

int main(int argc, char *argv[])
{
	char s[MAXOP];
	double op2;

	while(--argc > 0){
		ungets(" ");
		ungets(*++argv);
		switch(getop(s)) {
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case '/':
				op2 = pop();
				push(pop() / op2);
				break;
			default : 
				printf("error: unknown command %s\n", s);
				argc = 1;
				break;
		}
	}
	printf("\t%8g\n",pop());
	return 0;
}

void ungets(char s[])
{
	int len = strlen(s);
	void ungetch(int);

	while(len > 0)
		ungetch(s[--len]);
}

char buf[MAXOP];
int bufp = 0;

int getch(void)
{
	return(bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int c)
{
	if(bufp >= MAXOP)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}

int sp = 0;
double val[MAXOP];

void push(double f)
{
	if(sp > MAXOP)
		val[sp++] = f;
	else
		printf("error: stack full,can't push\n");
}

double pop(void)
{
	if(sp > 0)
		return val[--sp];
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}

int getop(char s[])
{
	int i,c;
	while((s[0] = c = getch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	if(!isdigit(c) && c != '.')
		return c;
	i = 0;
	if(isdigit(c))
		while(isdigit(s[++i] = c = getch()))
			;
	if(c == '.')
		while(isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';
	if(c != EOF)
		ungetch(c);
	return NUMBER;
}


