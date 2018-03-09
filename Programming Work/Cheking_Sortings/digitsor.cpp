#include<stdio.h>
#include<conio.h>
void main()
{
int d1[100],d2[100],d3[100],d4[100],d5[100],n,i,nos[100];
int countd1=0,countd2=0,countd3=0,countd4=0,countd5=0,j;
clrscr();
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&nos[i]);
for(i=0;i<n;i++)
{
int x;
int count=0;
int no=nos[i];
do{
	/*x=no%10;*/
	no=no/10;
	count++;
	}while(no==0);
 if(count==1)
 {
 countd1=countd1+1;
 for(j=0;j<countd1;j++)
  d1[j]=nos[i];
 }
 else if(count==2)
 {
 countd2=countd2+1;
 for(j=0;j<countd2;j++)
  d2[j]=nos[i];
 }
 else if(count==3)
 {
 countd3=countd3+1;
 for(j=0;j<countd3;j++)
  d3[j]=nos[i];
 }
 else if(count==4)
 {
 countd4=countd4+1;
 for(j=0;j<countd4;j++)
  d4[j]=nos[i];
 }
 else if(count==5)
 {
 countd5=countd5+1;
 for(j=0;j<countd5;j++)
  d5[j]=nos[i];
 }
 }

 for(j=0;j<n;j++)
  printf("%d%d%d%d%d",d1[j],d2[j],d3[j],d4[j],d5[j]);
getch();
}

