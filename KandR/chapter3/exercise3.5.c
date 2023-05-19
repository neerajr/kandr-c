#include<stdio.h>
#include<string.h>
void itob(int n,char s[], int b);
main()
{
	int n,i,b;
	char s[100];
	printf("Enter the integer\n");
	scanf("%d",&n);
	printf("Enter the base\n");
	scanf("%d",&b);
	itob(n,s,b);
	for(i=0; s[i] !='\0'; ++i)
		printf("%c",s[i]);
	printf("\n");
}


void itob(int n, char s[], int b)
{
	int i,j,sign;
	void str_reverse(char s[]);

	if((sign = n) < 0)
		n = -n;
	i=0;
	do{
		j = n % b;
		s[i++] = (j <= 9) ? j+'0' : j+'a' -10;
	} while((n /=b) > 0);
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


