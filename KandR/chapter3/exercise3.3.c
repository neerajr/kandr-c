#include<stdio.h>
#define MAX 100
int expand(char [], char []);
main()
{
	int i=0,c;
	char s1[MAX],s2[MAX];
	printf("Enter the string (eg: a-z,0-9 etc..)\n");
	while((c=getchar()) !='\n'){
		s1[i] = c;
		++i;
	}
	s1[i] = '\0';
	expand(s1,s2);
	for(i=0;s2[i] != '\0'; ++i)
		printf("%c",s2[i]);
	printf("\n");
	return 0;
}

int expand(char s1[], char s2[])
{
	int c;
	int i,j;
	i=j=0;
	while((c = s1[i++]) != '\0'){
		if(s1[i] == '-' && c <= s1[i+1]){
			++i;
			while(c<s1[i])
				s2[j++] = c++;
		}else
			s2[j++] = c;
	}
	s2[j] = '\0';
	return 0;
}


