#include<stdio.h>
#include<dos.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=0;i<5;i++)
{
textcolor(5);
textbackground(10);
 gotoxy(10,14);
 cprintf("    *    ");
 gotoxy(10,14);
 cprintf("   * *   ");
 gotoxy(10,14);
 cprintf("  *****  ");
 gotoxy(10,14);
 cprintf(" *     * ");
 gotoxy(10,14);
 cprintf("*       *");
 }
 getch();
}
