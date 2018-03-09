//Digit sort(Using Dynamic allocation)
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
# define NULL 0
void main()
{
	int * arrin,* arrout;
	int * b1,* b2,* b3,* b4,* b5;
	int count1=0,count2=0,count3=0,count4=0,count5=0;
	int n,no,count,i,j,k=0;
	clrscr();
	printf("\n\t\t\t\tDIGIT SORT");
	printf("\n\t\t\t\t**********\n\n\n");
	printf("\n\nENTER THE NUMBER OF ELEMENTS:");
	scanf("%d ",&n);
	if((arrin=(int *) malloc(n *sizeof(int)))==NULL)
	{
	printf("\n!NO SPACE AVAILABLE");
	exit(1);
	}
	b1=(int *) malloc(n *sizeof(int));
	b2=(int *) malloc(n *sizeof(int));
	b3=(int *) malloc(n *sizeof(int));
	b4=(int *) malloc(n *sizeof(int));
	b5=(int *) malloc(n *sizeof(int));
	arrout=(int *) malloc(n *sizeof(int));
		printf("\nENTER THE INPUT ELEMENTS:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arrin[i]);
	printf("\nBEFORE SORTING ELEMENTS ARE:");
	for(i=0;i<n;i++)
		printf("%d ",arrin[i]);
	for(i=0;i<n;i++)
	{
	count=0;
	no=arrin[i];
	do{
	/*x=no%10;*/
	no=no/10;
	count++;
	}while(no!=0);

		if(count==1)
		{

			b1[count1]=arrin[i];

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
		else if(count==2)
		{
			b2[count2]=arrin[i];

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
		else if(count==3)
		{
			b3[count3]=arrin[i];

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
		else if(count==4)
		{
			b4[count4]=arrin[i];

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
		else if(count==5)
		{
			b5[count5]=arrin[i];

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
	arrout[k++]=b1[j];
	for(j=0;j<count2;j++)
	arrout[k++]=b2[j];
	for(j=0;j<count3;j++)
	arrout[k++]=b3[j];
	for(j=0;j<count4;j++)
	arrout[k++]=b4[j];
	for(j=0;j<count5;j++)
	arrout[k++]=b5[j];
printf("\n\nAFTER SORTING ELEMENTS ARE: ");
	for(i=0;i<n;i++)
		{
		 printf("%d ",arrout[i]);
		}

getch();
}