//Digit sort 5 (Using Dynamic allocation Also Sort Negative Elements)
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
void main()
{
	int * arrin,* arrout;
	int * b1,* b2,* b3,* b4,* b5,*b6,*b7,*b8,*b9,*b10;
	int count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count10=0;
	int n,no,count,i,j,k=0;
	clrscr();
	printf("\n\t\t\t\tDIGIT SORT");
	printf("\n\t\t\t\t**********\n\n\n");
	printf("\n\nENTER THE NUMBER OF ELEMENTS:");
	scanf("%d",&n);

	arrin=(int *) malloc(n *sizeof(int));
	b1=(int *) malloc(n *sizeof(int));
	b2=(int *) malloc(n *sizeof(int));
	b3=(int *) malloc(n *sizeof(int));
	b4=(int *) malloc(n *sizeof(int));
	b5=(int *) malloc(n *sizeof(int));
	b6=(int *) malloc(n *sizeof(int));
	b7=(int *) malloc(n *sizeof(int));
	b8=(int *) malloc(n *sizeof(int));
	b9=(int *) malloc(n *sizeof(int));
	b10=(int *) malloc(n *sizeof(int));
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

		if(count==1 && arrin[i]>0)
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
		else if(count==2 && arrin[i]>0)
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
		else if(count==3 && arrin[i]>0)
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
		else if(count==4 && arrin[i]>0)
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
		else if(count==5 && arrin[i]>0)
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
		else if(count==1 && arrin[i]<0)
		{

			b6[count6]=arrin[i];

			for(j=count1;j>0;j--)
			{
				if(b6[j-1]<=b6[j])
				{
					break;
				}
				else
				{
					int temp=b6[j-1];
					b6[j-1]=b6[j];
					b6[j]=temp;
				 }

			}
			count6++;
		}
		else if(count==2 && arrin[i]<0)
		{
			b7[count7]=arrin[i];

			for(j=count7;j>0;j--)
			{
				if(b7[j-1]<=b7[j])
				{
					break;
				}
				else
				{
					int temp=b7[j-1];
					b7[j-1]=b7[j];
					b2[j]=temp;
				 }

			}
			count7++;
		}
		else if(count==3 && arrin[i]<0)
		{
			b8[count8]=arrin[i];

			for(j=count8;j>0;j--)
			{
				if(b8[j-1]<=b8[j])
				{
					break;
				}
				else
				{
					int temp=b8[j-1];
					b8[j-1]=b8[j];
					b8[j]=temp;
				 }

			}
			count8++;
		}
		else if(count==4 && arrin[i]<0)
		{
			b9[count9]=arrin[i];

			for(j=count9;j>0;j--)
			{
				if(b9[j-1]<=b9[j])
				{
					break;
				}
				else
				{
					int temp=b9[j-1];
					b9[j-1]=b9[j];
					b9[j]=temp;
				 }

			}
			count9++;
		}
		else if(count==5 && arrin[i]<0)
		{
			b10[count10]=arrin[i];

			for(j=count10;j>0;j--)
			{
				if(b10[j-1]<=b10[j])
				{
					break;
				}
				else
				{
					int temp=b10[j-1];
					b10[j-1]=b10[j];
					b10[j]=temp;
				 }

			}
			count10++;
		}
	}

	for(j=0;j<count10;j++)
	arrout[k++]=b10[j];
	for(j=0;j<count9;j++)
	arrout[k++]=b9[j];
	for(j=0;j<count8;j++)
	arrout[k++]=b8[j];
	for(j=0;j<count7;j++)
	arrout[k++]=b7[j];
	for(j=0;j<count6;j++)
	arrout[k++]=b6[j];
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
