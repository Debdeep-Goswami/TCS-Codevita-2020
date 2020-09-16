
/************************ 
    Prime Time Again	
*************************/

#include<stdio.h>
#include<math.h>

int is_prime(int);

int main(int argc, char* argv[])
{
	int D;					//	Day Hours
	int P;					//	Number of parts of a day
	int N;					//	Hours in one parts
	int count;				//	counter for prime_array[] elements
	int output_count=0;		//	Counter for output;

	int prime_array[500];	//	To store the prime numbers


	int i=0,j=0,temp=0,flag=0;


	scanf("%d",&D);
	scanf("%d",&P);

	//	Condition Checking
	if(D<10 || D >499 || P<2 || P>49)	return 1;

	//Get the primes
	N=D/P;

	for(i=0;i<=N;i++)	if(is_prime(i)==1)	prime_array[count++]=i;

	for(i=0;i<count;i++)
	{
		flag=0;
		temp=prime_array[i];
		for(j=1;j<P;j++)
		{
			temp=temp+N;

			if(is_prime(temp)==1)	flag=1;

			else
			{
				flag=0;
				break;
			}

		}

		if(flag==1)		output_count++;
	}

	//	Output Display
	printf("%d",output_count);

	return 0;
}

int is_prime(int number)
{
	int i;

	if(number<2)	return 0;

	if(number==2 || number==3)	return 1;

	else for(i=2;i<=number/2;i++)	if(number%i==0)		return 0;
	
	return 1;
}