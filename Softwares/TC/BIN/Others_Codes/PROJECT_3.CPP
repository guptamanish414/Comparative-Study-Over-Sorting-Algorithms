#include<stdio.h>
#include<conio.h>
void main()
 {
  int i,j;
  clrscr();
  textcolor(5);
  cprintf("É");
  for(i=0;i<78;i++)
   {
   cprintf("Í");
   }
  cprintf("»");
  for(i=0;i<47;i++)
   {
   gotoxy(1,2+i);
   cprintf("º");
   }
  gotoxy(1,49);
  cprintf("È");
  for(i=0;i<78;i++)
   {
   cprintf("Í");
   }
  cprintf("¼");
  for(i=0;i<47;i++)
   {
   gotoxy(80,2+i);
   cprintf("º");
   }
 gotoxy(27,3);
 textcolor(10);
 cprintf("--- WELCOME TO OUR PROJECT ---  ");
 textcolor(3);
 gotoxy(12,4);
 cprintf("Analysis of complexcity of different sorting algorithm ");
 getch();
 }