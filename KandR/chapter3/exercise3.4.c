#include<stdio.h>
#include<string.h>
#define abs(x)	((x) < 0 ? -(x) : (x))
void itoa(int n,char s[]);
main()
{
	int n,i;
	char s[100];
	printf("Enter the integer\n");
	scanf("%d",&n);
	itoa(n,s);
	for(i=0; s[i] !='\0'; ++i)
		printf("%c",s[i]);
	printf("\n");
}

void itoa(int n, char s[])
{
	int i,sign;
	void str_reverse(char s[]);

	sign = n;
	i=0;
	do{
		s[i++] = abs(n % 10) + '0';
	}	while((n /= 10) != 0);
	if(sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	str_reverse(s);
}

void str_reverse(char s[])
{	
	char c;
	int i,j;
	for(i=0,j=strlen(s)-1; i<j; ++i,--j){
		c = s[i], s[i] = s[j], s[j] = c;
	}
}



