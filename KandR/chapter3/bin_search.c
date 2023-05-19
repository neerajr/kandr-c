#include<stdio.h>
#define MAX 20
int binsearch(int x,int a[], int n);
main()
{
	int i,x,index;
	int array[MAX];
	for(i=0; i<MAX; ++i)
		array[i] = i;
	printf("Enter the element to search\n");
	scanf("%d",&x);
	index = binsearch(x,array,MAX);
	if(index != -1)
		printf("Found at position %d\n",index);
	else
		printf("Not found\n");
}

int binsearch(int x, int a[], int n)
{
	int mid;
	int low = 0;
	int high = n - 1;
	while(low<high){
		mid = (low + high) / 2;
		if(x < a[mid])
			high = mid - 1;
		else if(x > a[mid])
			low = mid +1;
		else 
			return mid;
	}
	return -1;
}

			

