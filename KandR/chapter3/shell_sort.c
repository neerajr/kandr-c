#include<stdio.h>
int shellsort(int v[],int n);
int main()
{
	int i;
	int v[] = {4,34,345,245,2,523,24,87,8,68,457,356,78};
	int n = sizeof(v) / sizeof(int);
	shellsort(v,n);
	for(i =0;i<n;++i)
		printf("%d\t",v[i]);
	return 0;
}


int shellsort(int v[],int n)
{
	int i,j,gap,temp;
	for(gap = n/2; gap>0; gap /= 2)
		for(i=gap; i<n; ++i)
			for(j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap){
				temp =v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
	return 0;
}

