#include <stdio.h>
#include <conio.h>

int Add(int,int);
int Sub(int,int);
int Mul(int,int);
int Div(int,int);
void main()
{
	int n,a,b;
	char ch;
	printf("\nenter an action to perform");
	printf("\nValid choices : '+' , '-' , '*' , '/'\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case '+': printf("\nenter 2 numbers to add");
			 	  scanf("%d %d",&a,&b);
			 	  n=Add(a,b);
			 	  printf("%d + %d is %d",a,b,n);
			 	  break;
		case '-': printf("\nenter 2 numbers to substract");
  			 	  scanf("%d %d",&a,&b);
			 	  n=Sub(a,b);
			 	  printf("%d - %d is %d",a,b,n);
			 	  break;
		case '*': printf("\nenter 2 numbers to multiply");
		 	 	  scanf("%d %d",&a,&b);
			 	  n=Mul(a,b);
			 	  printf("%d * %d is %d",a,b,n);
			 	  break;
		case '/': printf("\nenter 2 number to divide");
	 		 	  scanf("%d %d",&a,&b);
			 	  n=Div(a,b);
			 	  printf("%d / %d is %d",a,b,n);
			 	  break;
	 	default: printf("\nenter a valid choice");
	}
	getchar();
}

int Add(int a,int b)
{
	int t;
	t=a+b;
	return(t);
}
int Sub(int a,int b)
{
	int t;
	t=a-b;
	return(t);
}
int Mul(int a,int b)
{
	int t;
	t=a*b;
	return(t);
}
int Div(int a,int b)
{
	int t;
	t=a/b;
	return(t);
}
