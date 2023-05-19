#include<stdio.h>
#define MAX 100
int escape(char [] , char []);
main()
{
	int c,i=0;
	char s[MAX], t[MAX];
	printf("Enter the input\n");
	while((c=getchar()) != EOF){
		t[i] = c;
		++i;
	}
	t[i] = '\0';
	escape(s,t);
//	printf("copied string is : ");
//	for(i= 0; i<len(t); ++i)
//		printf("%c",t[i]);
//	printf("\n");
}

int escape(char s[], char t[])
{
	int i=0;
	int j =0;
//	for(i=0;i<100;++i)
//		printf("%c\n",t[i]);
	while(t[i] != '\0'){
		switch(t[i]){
			case '\n': s[j++] = '\\';
				   s[j++] = 'n';
				   break;
			case '\t' : s[j++] = '\\';
				    s[j++] = 't';
				    break;
			default : s[j++] = t[i];
				  break;
		}
		++i;
	}
	//	printf("Hello\n");
	s[j] = '\0';
	printf("copied string is : ");
	for(i= 0; s[i] != '\0'; ++i)
		printf("%c",s[i]);
	printf("\n");
	return 0;
}	
