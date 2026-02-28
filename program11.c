/* WAP to search array value */

#include<stdio.h>

	search(int x[], int no)
	{
		int count=0,i;
		for(i=0;i<10;i++)
		{
			if(x[i]==no)
			{
				count++;
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
	int x[10] = {87,29,76,55,91, 7, 51, 61, 77, 100};
	
	search(x, 195);
	search(x, 51);
}
