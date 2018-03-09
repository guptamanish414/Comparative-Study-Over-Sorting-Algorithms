#include<stdio.h>
#include <conio.h>
int main(void)
{
   int i, j;

   for (i=0; i<9; i++)
   {
       for (j=0; j<80; j++)
	  cprintf("C");
       cprintf("\r\n");
       textcolor(i+1);
       textbackground(i);
   }
	   return 0;

getch();
}