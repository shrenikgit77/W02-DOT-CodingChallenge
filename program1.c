/* WAP to input 5 digit number and show digit addition */

#include<stdio.h>

void main()
{
	int no=86139;
	int a, b, c, d, e, sum;
	
	a = no/10000; //8
	b = (no/1000)%10;	//6
	c = (no/100)%10;    //1
	d = (no/10)%10;     //3
	e = no%10;			///9
	
	sum = a + b + c + d + e;
	printf("\n sum = %d", sum);



	
}
