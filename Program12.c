/* WAP to search array value */

#include<stdio.h>

	search(int x[], int no, int arraySize)
	{
		int count=0,i, size, middle;
		size = arraySize;  //10
		middle = size/2;
		
		if(no>=x[middle])
		{
			//second half array
			for(i=middle;i<size;i++)
			{
				if(x[i]==no)
				{
					count++;
				}
			}
		}
		else
		{
			//first half array
			for(i=0;i<middle;i++)
			{
				if(x[i]==no)
				{
					count++;
				}
			}
		}
		
		
		if(count==0)
		{
			printf("\n Not Found!");
		}
		else
		{
			printf("\n Found!");
		}
	}

void main()
{
	int x[10] = {17,45,56,67,78,98,103,109,115,180};
	
	search(x, 109, 10);
	search(x, 700, 10);
}
