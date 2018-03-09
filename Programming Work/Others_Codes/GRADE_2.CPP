#include<stdio.h>
#include<conio.h>
void main()
{
  float d;
  clrscr();
  printf("Enter the num: ");
  scanf("%f",&d);
    if(d<=40)
    printf("\nFail!!!");
    else if(d>40 && d<=60)
    printf("A");
    else if(d>60 && d<=80)
    printf("B");
    else if(d>80 && d<=100)
    printf("O");
getch();
}