#include<stdio.h>
#include<conio.h>
void main()
{
int num,mod_var;
clrscr();
printf("Enter your number:\n");
scanf("%d",&num);
mod_var=num%2;
switch (mod_var)
{
case 0:
printf("%d is a even number",num);
break;
case 1:
printf("%d is a odd number",num);
break;
}
getch();
}