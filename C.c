
/************************ 
    Minimize The Sum	
*************************/

#include<stdio.h>
#include<math.h>

#define MAX 9999


int main(int argc, char* argv[])
{


	int N;					//	Size of the array
	int K;					//	Maximum number of operation

	int arr[MAX];			//	The array of numbers
	int sum=0;

	int i,j,loc=0,temp=0;

	scanf("%d",&N);
	scanf("%d",&K);

	//	Condition Checking
	if(N<1 || K>100000)
		return 1;
	else
	{
		//	Reading the data
		for(i=0;i<N;i++)
			scanf("%d",&arr[i]);
	}

	for(i=0;i<K;i++)
	{
		temp=arr[0];
		for(j=1;j<N;j++)
		{	
			if(temp<arr[j])
			{
				temp=arr[j];
				loc=j;
			}
		}
		arr[loc]=(int)(arr[loc]/2);
	}

	for(i=0;i<N;i++)
		sum=sum+arr[i];
	
	printf("%d",sum);

	return 0;
}