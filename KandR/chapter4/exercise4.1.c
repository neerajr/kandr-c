#include<stdio.h>
#define MAXLINE 1000
int get_line(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";
main()
{
	char line[MAXLINE];
	int found = 0;
	int i;
	while(get_line(line,MAXLINE) > 0)
		if( (i=strindex(line,pattern)) >=0){
			printf("\n%s index : %d\n",line,i);
			found++;
		}
	return found;
}

int get_line(char s[], int  lim)
{
	int c,i;
	i=0;
	while(--lim > 0 && (c=getchar()) != EOF && c != '\n')
		s[i++] = c;
	if(c=='\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

int strindex(char s[], char t[])
{
	int i,j,k,pos=-1;
	for(i=0;s[i] != '\0'; i++){
		for(j=i,k=0; t[k] != '\0' && s[j]==t[k]; j++,k++)
			;
		if(k>0 && t[k]=='\0')
			pos = i;
	}
	return pos;
}


