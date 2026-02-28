/* WAP to input a string. count and print total number of characters. print string in 
   uppercase as well as in lowercase */
   
#include<stdio.h>
#include<string.h>

void main()
{
	char sample[100];
	int n;
	
	printf("\n Enter string = ");
	gets(sample);
	
	n = strlen(sample); //count characters including space
	printf("\n total characters count = %d", n);
	
	strupr(sample);
	printf("\n String in uppercase = %s",sample );
	
	strlwr(sample);
	printf("\n String in lowercase = %s", sample);
}
