//Digit sort backloop
#include<stdio.h>
#include<conio.h>
void main()
{
int b1[10],nos[10];
int countb1=0;
int count,temp,n,no,i,x;
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
	no=no/10;
	count++;
	}while(no!=0);
if(count==1)
{
countb1=countb1+1;
if(countb1==1)
{
b1[i]=nos[]

getch();
}
}}
