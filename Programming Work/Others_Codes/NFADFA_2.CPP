#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,no_st,no_sy;
char nfa[10][10];
clrscr();
printf("This program accepts NFA as input and provide DFA as output\n");
printf("\nEnter no of states for NFA:");
scanf("%d",&no_st);
printf("\nEnter no of input symbol:");
scanf("%d",&no_sy);
printf("\nIf any transition does not contain a valid move then enter `@'");
printf("\nPls enter the transition table by pressing space key\n");
for(i=0;i<no_st;i++)
{
for(j=0;j<no_sy;j++)
{
scanf("%c",&nfa[i][j]);
}
}
printf("\nYour input is...............\n");
for(k=1;k<=no_sy;k++)
{
printf("\t%d",k);
}
printf("\n\n");
for(i=0;i<no_st;i++)
{
for(j=0;j<no_sy;j++)
{
printf("\t%c",nfa[i][j]);
}
printf("\n");
}
getch();
}
