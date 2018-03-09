#include<stdio.h>
#include<conio.h>
void main()
{
int i=3,j=3,a=0;
clrscr();
printf("\n%3d%3d%3d%3d%3d%3d%3d%3d",++i,i++,i,i++,i,i++,++i,i++);
a=++j + j++ + j + j++ + j + j++ + ++j + j++;
printf("\n%d",a);
getch();
}