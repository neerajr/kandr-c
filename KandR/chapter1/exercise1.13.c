#include<stdio.h>
main()
{
	int c,i,j;
	int wc=0;
	int a[11];
	for(i=0;i<=10;i++)
		a[i] = 0;
	while((c=getchar()) != EOF){
		wc=0;
		while(c != ' ' && c != '\t' && c != '\n'){
			++wc;
			c = getchar();
		}
		++a[wc];
	}
	for(i=0; i<=10; i++){
		printf("%d :",i);
		for(j=0;j<a[i];j++)
			printf("#");
		printf("\n");
	}
}
	
		 
		
