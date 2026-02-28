/* WAP to count and print total prime numbers in array */

#include<stdio.h>

	countPrimeNumbers(int x[])
	{
		int count, prime = 0, i, d;
		
		for(i=0;i<10;i++)
		{
			count=0;
			
			for(d=2;d<x[i]/2;d++)
			{
				if(x[i]%d==0)
				{
					count++;
				}
			}
			
			if(count==0)
			{
					prime++;
			}
		}
		
		return prime;
	}

void main()
{
	int x[10] = {87,29,76,55,91, 7, 51, 61, 77, 100}, answer;
	
	answer = countPrimeNumbers(x);
	printf("count of prime numbers = %d", answer);
}
