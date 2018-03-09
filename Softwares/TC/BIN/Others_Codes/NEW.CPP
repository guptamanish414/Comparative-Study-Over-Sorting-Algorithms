#include<stdio.h>
#include<conio.h>
 void main()
 {clrscr();
 int i,j,x=64;
 for(i=0;i<=5;i++)
  {for(j=5;j>=i;j--)
  {printf("%c",x);
  }
  printf("\n");
  x++;
  }
  getch();
  }