#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
 {
  int i,j;
  clrscr();
  textmode(BW40);
  textbackground(3);
  textcolor(5);
  cprintf("É");
  for(i=0;i<38;i++)
   {
   cprintf("Í");
   }
  cprintf("»");
  for(i=0;i<23;i++)
   {
   gotoxy(1,2+i);
   cprintf("º");
   }
  gotoxy(1,24);
  cprintf("È");
  for(i=0;i<38;i++)
   {
   cprintf("Í");
   }
  cprintf("¼");
  for(i=0;i<22;i++)
   {
   gotoxy(40,2+i);
   cprintf("º");
   }
 gotoxy(5,4);
 textcolor(4+128);
 textbackground(10);
 cprintf(" --- WELCOME TO OUR PROJECT --- ");
 textcolor(4);
 gotoxy(2,7);
 cprintf("Analysis the complexcity for different");
 gotoxy(10,9);
 cprintf(" sorting algorithm ");
 textcolor(4);
 textbackground(9);
 gotoxy(3,11);
 cprintf("É");
  for(i=0;i<34;i++)
   {
   cprintf("Í");
   }
  cprintf("»");
  for(i=10;i<21;i++)
   {
   gotoxy(3,2+i);
   cprintf("º");
   }
   gotoxy(3,23);
   cprintf("È");
  for(i=0;i<34;i++)
   {
   cprintf("Í");
   }
  cprintf("¼");
  for(i=10;i<21;i++)
   {
   gotoxy(38,2+i);
   cprintf("º");
   }
 textcolor(7);
 textbackground(14);
 gotoxy(5,13);
 cprintf("PLEASE ENTER PASSWORD:");
 textbackground(BLACK);
 cprintf(" ");
 scanf("%d",&j);
 if(j==1234)
 {
 gotoxy(4,15);
 for(int k=0;k<34;k++)
 {
 delay(50);
 textcolor(15);
 cprintf("²");
 }
 textcolor(4);
 textbackground(1);
 gotoxy(7,17);
 cprintf("CORRECT ! PRESS ANY KEY..");
 }
 else
 {
 gotoxy(4,15);
 for(int k=0;k<34;k++)
 {
 delay(50);
 textcolor(15);
 cprintf("²");
 }
 textcolor(4);
 textbackground(1);
 gotoxy(7,17);
 cprintf("SORRY ! INVALID PASSWORD");
 }
 getch();
 }