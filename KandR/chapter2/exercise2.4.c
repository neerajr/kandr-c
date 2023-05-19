#include<stdio.h>
void squeeze(char s1[],char s2[]);
main()
{
	int i =0;
	int c;
	char s1[100],s2[100];
	printf("Enter first string\n");
	while((c=getchar()) != '\n')
		s1[i++] = c;
	printf("\nEnter second string\n");
	while((c=getchar()) != '\n')
		s2[i++] =c;
	squeeze(s1,s2);
	printf("Processed string : ");
	for(i=0;s1[i] != '\0' ; i++)
		printf("%c",s1[i]);
}


void squeeze(char s1[], char s2[])
{
	int i,j,k;
	for(i = k = 0; s1[i] != '\0' ; i++){
		for(j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++)
			;
		if(s2[j] == '\0')
			s1[k++] = s1[i];
	}
	s1[k] = '\0';
}


