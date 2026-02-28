/* WAP to create array of 5 integers and find second minum number */

#include<stdio.h>

	int findMin(int x[])
	{
		int i, min, pos=0;
		
		min = x[0]; //89 -> 41 -> 24
		for(i=1;i<5;i++)
		{
			if(x[i]<min)  // (41<89)  (63<41) (75<41) (24<41)
			{
				min = x[i];
				pos = i;
			}
		}
		
		return pos;
	}
	
	int findSecondMin(int x[], int fmin)
	{
		int i, min, pos=0;
		
		min = x[0]; //89 -> 41 -> 24
		for(i=1;i<5;i++)
		{
			if(x[i]<min && i!=fmin)  // (41<89)  (63<41) (75<41) (24<41)
			{
				min = x[i];
				pos = i;
			}
		}
		
		return pos;
	}


void main()
{
	int x[5] = {89, 41, 63, 75, 24};
	int fmin, smin;
	
	fmin = findMin(x);
	printf("\n first minimum = %d", x[fmin]);
	
	smin = findSecondMin(x, fmin);
	printf("\n second minimum = %d", x[smin]);
	
}
