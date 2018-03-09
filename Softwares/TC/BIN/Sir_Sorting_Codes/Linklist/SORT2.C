#include<stdio.h>
#include<conio.h>
//#include<string.h >
#include<stdlib.h>
void main()
{
int i,j,n;
char *x = NULL;
clrscr();
x=(char *) calloc(10, sizeof(char));
printf("Enter the elements");
gets(x);
n=strlen(x);
for(i=0;i<n;i++)
printf("%3d",x[i]);
getch();
}
