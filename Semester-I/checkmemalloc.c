#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	int *mptr,i,j,n;
	float *cptr,sum=0;
	printf("\nenter the number of elements");
	scanf("%d",&n);
	
	mptr = (int*) malloc(n * sizeof(int));
	
	if(mptr == NULL)
	{
		printf("\nError! memory not allocated.");
		exit(0);
	}
	
	printf("\nEnter The elements of the array.");
	for(i=0;i<n;++i)
	{
		scanf("%d",mptr+i);
		sum+=*(mptr + i);
        printf("\n%u", *(mptr + i));
	}
	printf("\nMalloc sum = %.0f",sum);
	free(mptr);
	
	cptr = (float*) calloc(n,sizeof(float));
	if(cptr == NULL)
	{
		printf("\nError! memory not allocated.");
		exit(0);
	}
	sum=0;
	printf("\nEnter The elements of the array.");
	for(i=0;i<n;++i)
	{
		scanf("%f",cptr+i);
		sum= sum + *(cptr + i);
		printf("\n%u", cptr + i);
	}
	printf("\nCalloc sum = %.0f",sum);
//	free(cptr);

    printf("\nAddress of previously allocated memory: ");
    for(i = 0; i < n; ++i)
         printf("%u\n",cptr + i);

    printf("\nEnter new size of array: ");
    scanf("%d", &n);
    cptr = realloc(cptr, n * sizeof(int));
    for(i = 0; i < n; ++i)
         printf("%u\n", cptr + i);

    free(cptr);
    return 0;

}
