#include<stdio.h>
#include<ctype.h>
#define MAXLINE 100
double atof(char s[]);
main()
{
	int c,i=0;
	char s[MAXLINE];
	printf("Enter the value\n");
	while((c=getchar()) != '\n'){
			s[i] = c;
			++i;
	}
	s[i] = '\0';
	printf("%g\n",atof(s));
}

double atof(char s[])
{
	double val,power;
	int i,sign,exp;
	for(i=0; isspace(s[i]); ++i)
		;
	sign = (s[i] == '-')? -1 : 1;
	if(s[i] == '-' || s[i] == '+')
		++i;
	for(val=0.0; isdigit(s[i]); i++)
		val= val*10 + (s[i] - '0');  // Check the digits till . or e and assigns to val
	
	if(s[i] == '.')
		i++;
	for(power=1.0; isdigit(s[i]); ++i){
		val = val*10 + (s[i] - '0');
		power *= 10.0;			//if . then also checks the digit and assigns to val. But last divide by power which counts the number of digit after .
	}
	val = sign* val/power;
//	printf("VALUE is %g\n",val);


	if(s[i] == 'e' || s[i] == 'E'){
		sign = (s[++i] == '-')? -1 : 1;
		if(s[i] == '+' || s[i] == '-')
			i++;
		for(exp=0; isdigit(s[i]); ++i)
			exp = 10*exp + (s[i] - '0'); // If s[i] is e or E then compute the value after it including sign
		if(sign == 1)
			while(exp-- > 0)
				val *= 10;	//if sig is positive multiply the val by the value after e ie exp
		else
			while(exp-- >0)
				val /= 10;	//else divide 
	}
//	printf("VALUE is %g\n",val);
	return val;
}



