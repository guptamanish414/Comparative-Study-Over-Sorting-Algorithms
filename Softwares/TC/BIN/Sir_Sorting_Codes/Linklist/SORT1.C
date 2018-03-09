#include<stdio.h>
#include<conio.h>
void main()
{
int x[10]={32,41,2,3,45,22,6,9,12,1};
int y[10];
int *z[10];
int i,j,k;
clrscr();
for(i=0;i<10;i++)
{
z[i]=0;
}
for(i=0;i<10;i++)
{
z[i]=z[i]+z[x[i]];
}
i=0;
for(j=0;j<10;j++)
{
while(z[j]>0)
{
y[i]=j;
z[j]=z[j]-1;
i++;
}
}
for(j=0;j<10;j++)
{
printf("%d",y[j]);
}
getch();
}
