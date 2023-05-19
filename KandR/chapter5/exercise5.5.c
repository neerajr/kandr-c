#include<stdio.h>
#define MAX 100
void strn_cpy(char *, char *, int);
void strn_cat(char *, char *, int);
int strn_cmp(char *, char *, int);
main()
{
  char str1[MAX], str2[MAX];
  int ch,n;
  printf("Enter the first string\n");
  scanf("%s",str1);
  printf("Enter the second one\n");
  scanf("%s",str2);
  printf("Enter the number of characters\n");
  scanf("%d",&n);
  printf("1:copy\n2:concatinate\n3:compare\nEnter your choice\n");
  scanf("%d",&ch);
  switch(ch){
	case 1: strn_cpy(str1,str2,n);
		printf("copied string is : %s\n",str1);
		break;
	case 2: strn_cat(str1,str2,n);
	       	printf("Concatinated string is : %s\n",str1);
		break;
	case 3: printf("Difference is: %d\n",strn_cmp(str1,str2,n));
		break;
	default: printf("Enter correct choice\n");
  		break;
  }

}

void strn_cpy(char *s, char *t, int n)
{
	while(*t && n-- >0)
		*s++ = *t++;
	while(n-- >=0)
		*s++ = '\0';
}

void strn_cat(char *s, char *t, int n)
{
	int strlen(char *);
	strn_cpy(s+strlen(s),t,n);
}

int strn_cmp(char *s, char *t, int n)
{
	for( ; *s == *t; s++,t++)
		if(*s == '\0' || --n <=0)
			return 0;
	return *s - *t;
}

