/* Multi Array */

#include<stdio.h>

void main()
{
	int x[3][3] = {{90,45,13}, {78,55,15}, {90,41,53}};
	int r, c;
	
	printf("\n Multi Array = ");
	for(r=0;r<3;r++)
	{
		printf("\n");
		for(c=0;c<3;c++)
		{
			printf(" %d" , x[r][c]);
		}
	}
	
}
