//Digit sort 
#include<stdio.h>
#include<conio.h>
void main()
{
int d1[10],d2[10],d3[10],d4[10],d5[10],n,i,nos[10];
int countd1=0,countd2=0,countd3=0,countd4=0,countd5=0,j;
int count;
int no;
clrscr();
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&nos[i]);
for(i=0;i<n;i++)
{
count=0;
no=nos[i];
do{
	/*x=no%10;*/
	no=no/10;
	count++;
	}while(no!=0);
 if(count==1)
 {
 countd1=countd1+1;
 for(j=0;j<countd1;j++)
  {
  d1[j]=nos[i];
  printf("%d\n",d1[j]);
  }
 }
 else if(count==2)
 {
 countd2=countd2+1;
 for(j=0;j<countd2;j++)
 {
  d2[j]=nos[i];
  printf("%d\n",d2[j]);
  }
 }
 else if(count==3)
 {
 countd3=countd3+1;
 for(j=0;j<countd3;j++)
 {
  d3[j]=nos[i];
  printf("%d\n",d3[j]);
  }
 }
 else if(count==4)
 {
 countd4=countd4+1;
 for(j=0;j<countd4;j++)
 {
  d4[j]=nos[i];
  printf("%d\n",d4[j]);
  }
 }
 else if(count==5)
 {
 countd5=countd5+1;
 for(j=0;j<countd5;j++)
 {
  d5[j]=nos[i];
  printf("%d\n",d5[j]);
  }
 }
 }

getch();
}
