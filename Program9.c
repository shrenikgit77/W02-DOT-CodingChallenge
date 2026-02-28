/* Sort Array values */

#include<stdio.h>

	void sort(int x[])
	{
		int i, c, t;
		for(i=0;i<5;i++)
		{
			for(c=i+1;c<5;c++)
			{
				if(x[i]>x[c])
				{
					t = x[i];
					x[i] = x[c];
					x[c] = t;
				}
			}
		}
	}

void main()
{
	int x[5] = {89, 41, 63, 75, 24};
	int i;
	
	sort(x);
	
	printf("\n Ascending Order using Selection Sort = ");
	for(i=0;i<5;i++)
	{
		printf("\t %d", x[i]);
	}
}
