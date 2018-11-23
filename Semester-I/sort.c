#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	int A[5]={1,5,7,9,13};
	int i,search,n=5;
	int middle,first,last;
	printf("\nEnter the element to search");
	scanf("%d",&search);
	first = 0;
	last = n-1;
	middle=(first+last)/2;
	for(i=0;i<n-1;i++)
	{
		if(A[middle]==search)
		{
			printf("\n%d found at %d",search,middle+1);
			break;
		}
		else if(A[middle]<search)
		{
			first=middle+1;
		}
		else 
		last=middle-1;
		
		middle=(first+last)/2;
	}
	if(first>last)
	{
		printf("\nelement is not to be found");
	}
	return 0;
}
