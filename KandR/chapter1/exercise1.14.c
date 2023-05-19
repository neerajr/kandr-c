#include<stdio.h>
main()
{
	int c,i,j;
	int other = 0;
	int frq[60];
	for(i=0;i<60;i++)
		frq[i]=0;
	while((c=getchar()) != EOF){
		if(c >= 'A' && c <= 'z')
			++frq[c-'A'];
		else
			++other;
	}
	for(i=0;i<60;i++){
		if(frq[i] !=0){
			printf("%c :", i+'A');
			for(j=0;j<frq[i];j++)
				printf("#");
			printf("\n");
		}
/*		else{
			printf("Others : ");
			for(j=0;j<other;j++)
				printf("#");
			printf("\n");
		} 	*/
	}
}
	
	
