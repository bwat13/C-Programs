#include <stdio.h>
#include <conio.h>

int main(){
	int a,b,c,val;
	printf("\nEnter 3 Numbers to get a Maximum from!");
	scanf("%d%d%d",&a,&b,&c);
	val=maximum(a,b,c);
	printf("\nThe Maximum of from the list of %d %d %d is %d!",a,b,c,val);
	printf("\nEnter 3 Numbers to get a Minimum from!");
	scanf("%d%d%d",&a,&b,&c);
	val=minimum(a,b,c);
	printf("\nThe Minimum of from the list of %d %d %d is %d!",a,b,c,val);
	getch();
	return 0;
}

/* Function minimum definition */
/* x, y and z are parameters */
int minimum(int x, int y, int z) {
	int min = x; /* assume x is the smallest */

	if (y < min) { /* if y is smaller than min, assign y to min */
		min = y;
	} /* end if */

	if (z < min) { /* if z is smaller than min, assign z to min */
		min = z;
	} /* end if */

	return min; /* min is the smaller value */
} /* 
/* Function maximum definition */
/* x, y and z are parameters */
int maximum(int x, int y, int z) {
	int max = x; /* assume x is the largest */

	if (y > max) { /* if y is larger than max, assign y to max */
		max = y;
	} /* end if */

	if (z > max) { /* if z is larger than max, assign z to max */
		max = z;
	} /* end if */

	return max; /* max is the largest value */
} /* end function maximum */
