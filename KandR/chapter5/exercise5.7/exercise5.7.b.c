#include<string.h>
#include<stdio.h>

#define MAXLEN 1000
#define MAXTOR 5000

int get_line(char *, int);

int readlines(char *lineptr[], char *linestor, int maxlines)
{
	int len, nlines;
	char line[MAXLEN];
	char *p = linestor;
	char *linestop =  linestor + MAXTOR;

	nlines = 0;
	while((len = get_line(line, MAXLEN)) > 0){
		printf("len= %d\n",len);
		if (nlines >= maxlines || p+len > linestop)
			return -1;
		else {
			line[len-1] = '\0';
//			printf("%u\n",p);
			strcpy(p,line);
//			printf("%u\n",p);
			lineptr[nlines++] = p;
			p += len;
//			printf("%u\n",p);
		}
//	printf("%d\n",nlines);
	}
	return nlines;
}

void writelines(char *lineptr[], int nlines)
{
	int i;

	for(i = 0; i<nlines; i++)
		printf("%s\n",lineptr[i]);
}

int get_line(char *s, int lim)
{
	int c;
	char *t = s;

	while(--lim > 0 && (c=getchar()) != EOF && c != '\n')
		*s++ = c;
	if(c == '\n')
		*s++ = c;
	*s = '\0';
//	printf("%d\n",s-t);
	return s -t;
}

