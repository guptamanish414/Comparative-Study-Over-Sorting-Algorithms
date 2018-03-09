#include<stdio.h>
int sort(int arr2[],int ind,int arr3[]);
void main()
{
	int arr[20],i,n,j;
	int b1[20],b2[20],b3[20],b4[20],b5[20];
	int count1=0,count2=0,count3=0,count4=0,count5=0;
	clrscr();
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(arr[i]<10)
		{

			b1[count1]=arr[i];
			int sort(arr[i],count1,b1[count1]);
			
		}
		else if(arr[i]>9 && arr[i]<100)
		{
			b2[count2]=arr[i];
			int sort(arr[i],count2,b2[count2]);
			
		}
		else if(arr[i]>99 && arr[i]<1000)
		{
			b3[count3]=arr[i];
			int sort(arr[i],count2,b2[count2]);
			
		}
		else if(arr[i]>999 && arr[i]<10000)
		{
			b4[count4]=arr[i];

			int sort(arr[i],count2,b2[count2]);
		}
		else if(arr[i]>9999 && arr[i]<32767)
		{
			b5[count2]=arr[i];

			int sort(arr[i],count2,b2[count2]);
		}


	}
	printf("output\t");
	for(i=0;i<count1;i++)
		printf("%d ",b1[i]);
	for(i=0;i<count2;i++)
		printf("%d ",b2[i]);
	for(i=0;i<count3;i++)
		printf("%d ",b3[i]);
	for(i=0;i<count4;i++)
		printf("%d ",b4[i]);
	for(i=0;i<count5;i++)
		printf("%d ",b5[i]);
getch();
}
int sort(int arr2[],int ind,int arr3[])
{
  for(j=ind;j>0;j--)
			{
				if(arr3[j-1]<=arr3[j])
				{
					break;
				}
				else
				{
					int temp=arr3[j-1];
					arr3[j-1]=arr3[j];
					arr3[j]=temp;
				 }

			}
			ind++;
return(arr3[],ind);
}



