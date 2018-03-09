//Login page.
#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,c;
  Again:
  clrscr();
  textbackground(3);
  textcolor(1);
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
 gotoxy(2,3);
 textcolor(27+128);
 textbackground(1);
 cprintf("                                                                              ");
 gotoxy(2,4);
 cprintf("                       --- WELCOME TO OUR PROJECT ---                         ");
 gotoxy(2,5);
 cprintf("                                                                              ");
 textcolor(18);
 gotoxy(2,7);
 cprintf("                                                                              ");
 gotoxy(2,8);
 cprintf("                 COMPARATIVE STUDY OVER SORTING ALGORITHMS                    ");
 gotoxy(2,9);
 cprintf("                                                                              ");
 textcolor(4);
 textbackground(9);
 gotoxy(3,11);
 cprintf("É");
  for(i=0;i<74;i++)
   {
   cprintf("Í");
   }
  cprintf("»");
  for(i=10;i<45;i++)
   {
   gotoxy(3,2+i);
   cprintf("º");
   }
   gotoxy(3,47);
   cprintf("È");
  for(i=0;i<74;i++)
   {
   cprintf("Í");
   }
  cprintf("¼");
  for(i=10;i<45;i++)
   {
   gotoxy(78,2+i);
   cprintf("º");
   }
 textcolor(32);
 textbackground(30);
 gotoxy(27,14);
 cprintf("                       ");
 gotoxy(27,15);
 cprintf(" PLEASE ENTER PASSWORD:");
 gotoxy(27,16);
 cprintf("                       ");
 textbackground(BLACK);
 textcolor(BLACK);
 cprintf(" ");
 cscanf("%d",&j);
 getch();
 if(j==12345)
 {
 gotoxy(4,19);
 for(k=0;k<74;k++)
 {
 delay(15);
 textcolor(15);
 cprintf("²");
 }
 textcolor(18);
 gotoxy(21,22);
 cprintf("CORRECT ! YOU ARE AUTHENTICATED TO USE");
 textcolor(18+128);
 gotoxy(28,25);
 cprintf("PLEASE PRESS ANY KEY..");
 }
 else
 {
 gotoxy(4,19);
 for(k=0;k<74;k++)
 {
 delay(15);
 textcolor(15);
 cprintf("²");
 }
 textcolor(20);
 gotoxy(27,22);
 cprintf("SORRY ! INVALID PASSWORD");
 gotoxy(31,25);
 cprintf("Please Try Again");
 textcolor(20+128);
 gotoxy(33,28);
 cprintf("PRESS ENTER..");

 getch();
 goto Again;
 }
getch();
}