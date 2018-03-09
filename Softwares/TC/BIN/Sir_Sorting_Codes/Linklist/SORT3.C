#include<stdio.h>
void main()
{
	int arr[20],i,n,j,k=0,arr1[20];
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

			for(j=count1;j>0;j--)
			{
				if(b1[j-1]<=b1[j])
				{
					break;
				}
				else
				{
					int temp=b1[j-1];
					b1[j-1]=b1[j];
					b1[j]=temp;
				 }

			}
			count1++;
		}
		else if(arr[i]>9 && arr[i]<100)
		{
			b2[count2]=arr[i];

			for(j=count2;j>0;j--)
			{
				if(b2[j-1]<=b2[j])
				{
					break;
				}
				else
				{
					int temp=b2[j-1];
					b2[j-1]=b2[j];
					b2[j]=temp;
				 }

			}
			count2++;
		}
		else if(arr[i]>99 && arr[i]<1000)
		{
			b3[count3]=arr[i];

			for(j=count3;j>0;j--)
			{
				if(b3[j-1]<=b3[j])
				{
					break;
				}
				else
				{
					int temp=b3[j-1];
					b3[j-1]=b3[j];
					b3[j]=temp;
				 }

			}
			count3++;
		}
		else if(arr[i]>999 && arr[i]<10000)
		{
			b4[count4]=arr[i];

			for(j=count4;j>0;j--)
			{
				if(b4[j-1]<=b4[j])
				{
					break;
				}
				else
				{
					int temp=b4[j-1];
					b4[j-1]=b4[j];
					b4[j]=temp;
				 }

			}
			count4++;
		}
		else if(arr[i]>9999 && arr[i]<32767)
		{
			b5[count2]=arr[i];

			for(j=count5;j>0;j--)
			{
				if(b5[j-1]<=b5[j])
				{
					break;
				}
				else
				{
					int temp=b5[j-1];
					b5[j-1]=b5[j];
					b5[j]=temp;
				 }

			}
			count5++;
		}
	}
	for(j=0;j<count1;j++)
	arr1[k++]=b1[j];
	for(j=0;j<count2;j++)
	arr1[k++]=b2[j];
	for(j=0;j<count3;j++)
	arr1[k++]=b3[j];
	for(j=0;j<count4;j++)
	arr1[k++]=b4[j];
	for(j=0;j<count5;j++)
	arr1[k++]=b5[j];
printf("SORTED ORDER...................\n ");
	for(i=0;i<n;i++)
		{
			printf("%6d",arr1[i]);
		}
getch();
}





