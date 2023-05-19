#include<stdio.h>
int htoi(char s[]);
main()
{
	int c,i,n;
	char s[100];
	i=0;
	while((c=getchar()) != '\n'){
		s[i] = c;
		++i;
	}
	n = htoi(s);
	printf("integer value is : %d\n",n);
}

int htoi(char s[])
{
	int i=0,hexdigit,n;
	int valid =1;		// Flag to check whether hex or not 1-> hex; 0->not hex
	if(s[i] == '0'){
		++i;
		if(s[i] == 'x' || s[i] == 'X')
			++i;
	}
	n=0;
	for( ; valid == 1; ++i){
		if(s[i] >= '0' && s[i] <= '9')
			hexdigit = s[i] - '0';
		else if(s[i] >= 'a' && s[i] <= 'f')
			hexdigit = s[i] - 'a';
		else if(s[i] >= 'A' && s[i] <= 'F')
			hexdigit = s[i] - 'A';
		else
			valid = 0;
		if(valid == 1)
			n = n*16 + hexdigit;
	}
	return n;
}


