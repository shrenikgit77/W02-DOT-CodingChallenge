/* Reverse a string */

#include<stdio.h>
#include<string.h>

void main()
{
	char sample[100];
	
	printf("\n Enter string = ");
	gets(sample); //Hello
	
	strrev(sample);
	
	printf("\n String in reverse = %s", sample);
}
