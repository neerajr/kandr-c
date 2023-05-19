#include<stdio.h>
main()
{
	int c;
	int bl=0,tb=0,nl=0;
	while((c=getchar())!=EOF){
		if(c ==' ')
			++bl;
	 	if(c == '\t')
			++tb;
		if(c == '\n')
			++nl;
	}
	printf("blanks:%d\ntabs:%d\nlines:%d\n",bl,tb,nl);
}
