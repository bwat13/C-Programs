#include<stdio.h>
#include<conio.h>

#define clrscr() system("cls")
void readArray(int arraynum[], int input);
void printArray(int arraynum[], int input);
int minArray(int arraynum[], int input);
int maxArray(int arraynum[], int input);
int min2Array(int arraynum[], int input);
int max2Array(int arraynum[], int input);
int minPosi(int arraynum[], int input);
int maxPosi(int arraynum[], int input);
int min2Posi(int arraynum[], int input);
int max2Posi(int arraynum[], int input);
int main()
{
	int arraynum[30],minpos,maxpos,minnum,maxnum,input,max2num,min2num,max2pos,min2pos;
	clrscr();
	//system("cls"); 
	printf("\nEnter the number of Elements ");
	scanf("%d",&input);
	if(input < 4)
	{
		printf("\nIf The Number Of Elements Is %d It Glitches Out Many Times Enter Another Number Of Elements ",input);
		printf("\nEnter A Number Greater Than 3 ");
		sleep(5);
		main();
		return 0;
	}
	readArray(arraynum,input);
	printArray(arraynum,input);
	minnum=minArray(arraynum,input);
	maxnum=maxArray(arraynum,input);
	minpos=minPosi(arraynum,input);
	maxpos=maxPosi(arraynum,input);
	min2num=min2Array(arraynum,input);
	max2num=max2Array(arraynum,input);
	min2pos=min2Posi(arraynum,input);
	max2pos=max2Posi(arraynum,input);
	printf("\nThe maximum number is %d and its position on array is %d ",maxnum,maxpos);
	printf("\nThe minimum number is %d and its position on array is %d ",minnum,minpos);
	printf("\nThe 2nd maximum number is %d and its position on array is %d ",max2num,max2pos);
	printf("\nThe 2nd minimum number is %d and its position on array is %d ",min2num,min2pos);
	getch();
	return 0;
}
void readArray(int arraynum[],int input)
{
		int i;
		printf("\nEnter The Numbers ");
		for(i=0;i<input;i++)
		{
			scanf("%d",&arraynum[i]);
		}
}
 
void printArray(int arraynum[],int input)
{
		int i;
		printf("\nThe Numbers Are : ");
		for(i=0;i<input;i++)
		{
			printf("%d ",arraynum[i]);
		}
 }
 
int minArray(int arraynum[], int input)
{
	 int min=arraynum[0],i;
	 for(i=1;i<input;i++)
	 {
		 if(min>arraynum[i])
				min=arraynum[i];
	 }
	 return min;
 }
 
int maxArray(int arraynum[], int input)
{
	 int max=arraynum[0],i;
	 for(i=1;i<input;i++)
	 {
		 if(max<arraynum[i])
				max=arraynum[i];
				
	 }
	 return max;
 }
 
 int min2Array(int arraynum[], int input)
{
	 int firstmin=arraynum[0],i,secondmin=arraynum[0];
	 
	 for(i=1;i<input;i++)
	 {
		if(firstmin>arraynum[i])
		{
			secondmin=firstmin;
			firstmin=arraynum[i];
		}
		else if(arraynum[i] < secondmin && secondmin < firstmin)
		{
			secondmin=arraynum[i];
		}
	 }
	 return secondmin;
 }
 
int max2Array(int arraynum[], int input)
{
	 int firstmax=arraynum[0],secondmax=arraynum[0],i;
	 for(i=1;i<input;i++)
	 {
		if(firstmax<arraynum[i])
		{
			secondmax=firstmax;
			firstmax=arraynum[i];
		}
		else if(arraynum[i] > secondmax && secondmax < firstmax)
		{
			secondmax=arraynum[i];
		}
				
	 }
	 return secondmax;
 }
 
int minPosi(int arraynum[], int input)
{
	 int minnum=arraynum[0],i,minpos=1;
	 for(i=1;i<input;i++)
	 {
		 if(minnum>arraynum[i])
		 {
				minpos=i+1;
				minnum=arraynum[i];
		 }
	 }
	 return minpos;
 }
 
int maxPosi(int arraynum[], int input)
{
	 int maxnum=arraynum[0],i,maxpos=1;
	 for(i=1;i<input;i++)
	 {
		 if(maxnum<arraynum[i])
				maxpos=i+1;
				maxnum=arraynum[i];
	 }
	 return maxpos;
 }
 
int min2Posi(int arraynum[], int input)
{
	 int min2num=arraynum[0],minnum=arraynum[0],i,minpos=1,min2pos=1;
	 for(i=1;i<input;i++)
	 {
		if(minnum>arraynum[i])
		{
			min2pos=minpos;
			min2num=minnum;
			minpos=i+1;
			minnum=arraynum[i];
		}
		else if(arraynum[i] < min2pos && min2pos > minpos)
		{
			min2pos=i+1;
		}
	 }
	 return min2pos;
 }
 
int max2Posi(int arraynum[], int input)
{
	 int max2num=arraynum[0],maxnum=arraynum[0],i,maxpos=1,max2pos=1;
	 for(i=1;i<input;i++)
	 {
		if(maxnum<arraynum[i])
		{
			max2pos=maxpos;
			maxnum=max2num;
			maxpos=i+1;
			maxnum=arraynum[i];
		}
		else if(arraynum[i] > max2pos && max2pos < max2pos)
		{
			max2pos=i+1;
		}
	 }
	 return max2pos;
 }
