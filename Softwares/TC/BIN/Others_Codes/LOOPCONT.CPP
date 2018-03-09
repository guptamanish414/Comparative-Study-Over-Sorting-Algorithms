#include<stdio.h>
#include<conio.h>
void main()
{
int i,num;
clrscr();
printf("\nEnter Your limit:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
printf("\t%d",0);
if(i%3==0)
{
printf("\n");
}
}
getch();
}