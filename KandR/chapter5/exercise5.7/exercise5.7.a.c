#include<stdio.h>
#include<string.h>

#define MAXLINES 5000

char *lineptr[MAXLINES];

int readlines(char **, char *, int nlines);
void writelines(char **, int nlines);

void qsort(char **, int left, int right);

main()
{
	int nlines,i;
	char linestor[MAXLINES];

	if((nlines = readlines(lineptr,linestor, MAXLINES)) >=0){
		qsort(lineptr, 0, nlines-1);
		writelines(lineptr, nlines);
		return 0;
	}
	else {
		printf("error: input too big to sort\n");
		return 1;
	}
}



