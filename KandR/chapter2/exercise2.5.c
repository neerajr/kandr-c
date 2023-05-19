#include<stdio.h>
int any_index(char s1[], char s2[]);
main()
{
	int i=0;
	int c,index;
	char s1[100], s2[100];
	printf("Enter first string\n");
	while((c=getchar()) != '\n')
		s1[i] = c;
	i=0;
	printf("\nEnter second string\n");
	while((c=getchar()) != '\n')
		s2[i] = c;
	index = any_index(s1,s2);
	printf("index in s1 is : %d\n", index);
}

int any_index(char s1[], char s2[])
{
	int i,j;
	for(i=0; s2[i] !='\0'; ++i)
		for(j=0; s1[j]!='\0' && s2[j] != s1[i]; ++j)
			;
		if(s1[j] == s2[i])
			return j;
		else
			return -1;
}

