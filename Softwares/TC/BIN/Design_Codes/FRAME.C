//Frame
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int i,c;

Again2:
clrscr();
textcolor(1);
cprintf("�");
for(i=0;i<78;i++)
{
cprintf("�");
}
cprintf("�");
for(i=0;i<47;i++)
{
gotoxy(1,2+i);
cprintf("�");
}
gotoxy(1,49);
cprintf("�");
for(i=0;i<78;i++)
{
cprintf("�");
}
cprintf("�");
for(i=0;i<47;i++)
{
gotoxy(80,2+i);
cprintf("�");
}
 getch();
}