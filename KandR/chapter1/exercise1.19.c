#include <stdio.h>
#define MAXLINE 1000
int get_line(char line[], int maxline);
void rever(char line[]);
main()
{
	int len;
        char line[MAXLINE];
        while ((len = get_line(line, MAXLINE)) > 0){
		rever(line);
		printf("%s\n",line);
	}
}

int get_line(char s[],int lim)
{
	int c, i;
	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void rever(char line[])
{
	int i,j;
	char temp;
	i=0;
	while(line[i] != '\0')
		++i;
	--i;
	if(line[i] == '\n')
		--i;
	j=0;
	while(j<i){
		temp = line[j];
		line[j] = line[i];
		line[i] = temp;
		--i;
		++j;
	}
}

