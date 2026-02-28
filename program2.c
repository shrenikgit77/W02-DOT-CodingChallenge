/* WAP to input 5 digit number and show digit addition */

#include<stdio.h>

void main()
{
	int no=86139;
	
	printf("\n sum = %d",
			(no/10000) + ((no/1000)%10) + ((no/100)%10) + ((no/10)%10) + no%10);



	
}
