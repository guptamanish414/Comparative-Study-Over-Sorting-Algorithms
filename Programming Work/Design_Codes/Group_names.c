//Group members names.
#include<stdio.h>
#include<conio.h>
void main()
{
 int i;
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

gotoxy(2,3);
textcolor(13);
cprintf("Project Name");
cprintf("------>");
textcolor(11);
cprintf("Comparative Study And Development Over Sorting Algorithms");

gotoxy(2,6);
textcolor(13);
cprintf("Group Number");
cprintf("------>");
textcolor(11);
cprintf("One(1)");

gotoxy(2,9);
textcolor(13);
cprintf("Members");
cprintf("----------->");
textcolor(11);
cprintf("Seven(7)");

gotoxy(2,12);
textcolor(13);
cprintf("Names Of Members");
cprintf("-->");
textcolor(11);
gotoxy(21,12);
cprintf("1.MD Rameez Raja");
gotoxy(21,14);
cprintf("2.Manish Kumar Gupta");
gotoxy(21,16);
cprintf("3.Arup Shngha");
gotoxy(21,18);
cprintf("4.MD Imran Ansari");
gotoxy(21,20);
cprintf("5.Sujoya Das");
gotoxy(21,22);
cprintf("6.Swarna Basu");
gotoxy(21,24);
cprintf("7.Sarita Chaurasia");

gotoxy(2,27);
textcolor(13);
cprintf("Lead By");
cprintf("----------->");
textcolor(11);
cprintf("MD Rameez Raja");

gotoxy(2,30);
textcolor(13);
cprintf("Under By");
cprintf("---------->");
textcolor(11);
cprintf("Toufique Sir");

gotoxy(2,33);
textcolor(13);
cprintf("Front End");
cprintf("--------->");
textcolor(11);
cprintf("C Language");

gotoxy(2,36);
textcolor(13);
cprintf("Back End");
cprintf("---------->");
textcolor(11);
cprintf("No such data base ; Random input from the users.");

gotoxy(2,39);
textcolor(13);
cprintf("Project Type");
cprintf("------>");
textcolor(11);
cprintf("Analytical Project.");

gotoxy(2,42);
textcolor(13);
cprintf("Project Objective");
cprintf("->");
textcolor(11);
cprintf("Study the Complexity for sorting algorithms.");

gotoxy(2,45);
textcolor(13);
cprintf("Project Goal");
cprintf("------>");
textcolor(11);
cprintf("If possible ; proposed an algorithm which is best sorting");
gotoxy(21,47);
cprintf("algorithm according to complexity.");

getch();
}