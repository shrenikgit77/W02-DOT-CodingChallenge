/* WAP to input 5 digit number and show digit addition */

#include<stdio.h>
#include<stdlib.h>

void main()
{
	char no[10]="86139";
	int i, sum=0, d;
	
	for(i=0;i<5;i++)
	{
		d = atoi(no[i]);
		printf("%d",d);
		sum=sum+d;
	}
	
	printf(" sum = %d", sum);
	

	
}


/* 
	1) atoi() : (string)all to int
	2) itoa() : int to all(string)

*/
