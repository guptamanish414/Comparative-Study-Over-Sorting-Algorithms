//Bucket sort program

#include <stdio.h>
void bucketSort(int array[],int n)
{
int i,j,count[n];
	for(i=0;i<n;i++)
	{
		count[i]=0;
	}

	for(i=0;i<n;i++)
	{
		(count[array[i]])++;
	}

	for(i=0,j=0;i<n;i++)
	{
		for(;count[i]>0;(count[i])--)
		{
		array[j++]=i;
		}
	}
}

void main()
{
int array[100];
int n,i;
printf("Enter How many Numbers:\n");
scanf("%d",&n);
printf("\nEnter the array elements to be sorted:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&array[i]);
	}
printf("\nThe array of elements after sorting:\n");
bucketSort(array,n);
	for (i=0;i<n;i++)
	{
	printf("%d\n",array[i]);
	}
}