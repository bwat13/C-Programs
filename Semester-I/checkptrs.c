#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

void RunPtrArray();
int CheckTernary(int n);
	
void main()
{
	int i,*iptr;
	char c,*cptr;
	float f,*fptr;
	int n,j;
	c='R';
	i=3;
	f=3.0;
	iptr=&i;
	cptr=&c;
	fptr=&f;
	printf("\nChar %c and its Address %p and its size is %d \nand address in digits is %u",*cptr,c,sizeof(c),&c);
	printf("\nChar %c and its ptr Address %p and its size is \n%d and address in digits is %u",*cptr,cptr,sizeof(iptr),cptr);
	printf("\nint %d and its Address %p and its size is %d \nand address in digits is %u",*iptr,i,sizeof(i),&i);
	printf("\nint %d and its ptr Address %p and its size is %d \nand address in digits is %u",*iptr,iptr,sizeof(iptr),iptr);
	printf("\nfloat %f and its Address %p and its size is %d and \naddress in digits is %u",*fptr,f,sizeof(f),&f);
	printf("\nfloat %f and its ptr Address %p and its size is %d \nand address in digits is %u",*fptr,fptr,sizeof(fptr),fptr);
	printf("\n\n\nEnter the value to test ternary operator\nNegative for exiting and positive for goint through with operation\n");
input:
	scanf("%d",&n);
	CheckTernary(n) ? printf("\nYou entered a positive integer") : printf("\nYou entered a negative integer");
	CheckTernary(n) ? RunPtrArray() : printf("\nEnter a positive integer");
	getch();
}

void RunPtrArray()
{
	int A[]={30,20,10,9,8,7,6,5,4,3,2,1};
	int *aptr,i;
	aptr=A;
	printf("\nSize of A = %d and size Of ptr = %d",sizeof(A),sizeof(aptr));
	printf("\nsizeof(A)/sizeof(int) = %d",sizeof(A)/sizeof(int));
	printf("\nArray A= {");
	for(i=0;i<sizeof(A)/sizeof(int);i++)
	{	
		if(i!=0)
		{
			printf(",");
		}
		printf("%d",*(aptr + i));  //*aptr + i = wrong cuz it will point to value of first element then add value of i  right is *(aptr+i)
	}
	printf("}");
	printf("\n          ");
	printf("\nElement   ");
	for(i=0;i<sizeof(A)/sizeof(int);i++)
	{
		if(i<3)
		{
			printf("%d  ",i);  //*aptr + i = wrong cuz it will point to value of first element then add value of i  right is *(aptr+i)
		}
		else
		{
			printf("%d ",i);
		}
	}
	
}

int CheckTernary(int n)
{
	if(n<=0)
	return 0;
	else
	return 1;
}
