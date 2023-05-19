#include<stdio.h>
#include<math.h>

#define MAXOP 100
#define NUMBER '0'

int getop(char []);
void push(double);
double pop(void);

main()
{
	int type;
	double op2;
	char s[MAXOP];

	while((type= getop(s)) != EOF){
		switch(type){
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
				if(op2 !=0.0)
					push(pop() op2);
				else
					printf("ERROR division by zero\n");
				break;
			case '%':
				op2 = pop();
				if(op2 != 0)
					push(fmod(pop()),op2);
				else
					printf("ERROR division by zero\n");
				break;
			case '\n':
				printf(".8%g\n",pop());
				break;
			default:
				printf("Unknown command\n");
				break;
		}
	}
	return 0;
}






