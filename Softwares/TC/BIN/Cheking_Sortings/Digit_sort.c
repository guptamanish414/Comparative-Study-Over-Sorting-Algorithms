//Digit sort 2
#include<stdio.h>
#include<conio.h>
void main()
{
int b1[10],b2[10],b3[10],b4[10],b5[10],n,i,nos[10];
int countb1=0,countb2=0,countb3=0,countb4=0,countb5=0,j;
int count,k,temp,arr[100];
int no;
clrscr();
printf("\nEnter the number of elements:");
scanf("%d",&n);
printf("\nEnter the elements:");
for(i=0;i<n;i++)
scanf("%d",&nos[i]);
for(i=0;i<n;i++)
{
count=0;
no=nos[i];
printf("\nThe input elements are:");
do{
	/*x=no%10;*/
	no=no/10;
	count++;
	}while(no!=0);
 if(count==1)
 {
 countb1=countb1+1;
 for(j=1;j<=countb1;j++)
  {
  b1[j]=nos[i];

  for(i=0;i<n;i++)
		printf("%d ",nos[i]);

	for(i=1; i<n; i++) //insertion sort
	{
		temp = nos[i];
		j = i-1;
		while(temp<nos[j] && j>=0)
		{
			nos[j+1] = nos[j];
			j = j-1;
		}
		nos[j+1] = temp;
	}
	printf("\n\nThe sorted elements are:");
	for(i=0; i<n; i++)
		printf("%d ",nos[i]);
  }
 }
 else if(count==2)
 {
 countb2=countb2+1;
 for(j=1;j<=countb2;j++)
 {
  b2[j]=nos[i];
	for(i=0;i<n;i++)
		printf("%d ",nos[i]);

	for(i=1; i<n; i++) //insertion sort
	{
		temp = nos[i];
		j = i-1;
		while(temp<nos[j] && j>=0)
		{
			nos[j+1] = nos[j];
			j = j-1;
		}
		nos[j+1] = temp;
	}
	printf("\n\nThe sorted elements are:");
	for(i=0; i<n; i++)
		printf("%d ",nos[i]);
  }
 }
 else if(count==3)
 {
 countb3=countb3+1;
 for(j=1;j<=countb3;j++)
 {
  b3[j]=nos[i];
	for(i=0;i<n;i++)
		printf("%d\t",nos[i]);

	for(i=1; i<n; i++) //insertion sort
	{
		temp = nos[i];
		j = i-1;
		while(temp<nos[j] && j>=0)
		{
			nos[j+1] = nos[j];
			j = j-1;
		}
		nos[j+1] = temp;
	}
	printf("\n\nThe sorted elements are:");
	for(i=0; i<n; i++)
		printf("%d ",nos[i]);
  }
 }
 else if(count==4)
 {
 countb4=countb4+1;
 for(j=1;j<=countb4;j++)
 {
  b4[j]=nos[i];
	for(i=0;i<n;i++)
		printf("%d\t",nos[i]);

	for(i=1; i<n; i++) //insertion sort
	{
		temp = nos[i];
		j = i-1;
		while(temp<nos[j] && j>=0)
		{
			nos[j+1] = nos[j];
			j = j-1;
		}
		nos[j+1] = temp;
	}
	printf("\n\nThe sorted elements are:");
	for(i=0; i<n; i++)
		printf("%d ",nos[i]);
  }
 }
 else if(count==5)
 {
 countb5=countb5+1;
 for(j=1;j<=countb5;j++)
 {
  b5[j]=nos[i];
	for(i=0;i<n;i++)
		printf("%d\t",nos[i]);

	for(i=1; i<n; i++) //insertion sort
	{
		temp = nos[i];
		j = i-1;
		while(temp<nos[j] && j>=0)
		{
			nos[j+1] = nos[j];
			j = j-1;
		}
		nos[j+1] = temp;
	}
	printf("\n\nThe sorted elements are:");
	for(i=0; i<n; i++)
		printf("%d ",nos[i]);
  }
 }
 }
getch();
}
