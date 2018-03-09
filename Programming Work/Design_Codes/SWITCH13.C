//To select sotring programs Using switch case.
#include<stdio.h>
#include<conio.h>
void main()
{
int i,c;

Again2:
clrscr();
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

textcolor(13);
gotoxy(25,3);
cprintf("APLICATION OF SORTING ALGORITHMS");
 textcolor(1);
 for(i=2;i<80;i++)
 {
 gotoxy(i,5);
 delay(5);
 cprintf("Í");
 }

textcolor(27);
gotoxy(2,6);
cprintf("Press 0  for EXIT.");
gotoxy(2,7);
cprintf("Press 1  for Bubble Sort");
gotoxy(2,8);
cprintf("Press 2  for Bucket Sort");
gotoxy(2,9);
cprintf("Press 3  for Cocktail Sort");
gotoxy(2,10);
cprintf("Press 4  for Comb Sort");
gotoxy(2,11);
cprintf("Press 5  for Counting Sort");
gotoxy(2,12);
cprintf("Press 6  for Heap Sort");
gotoxy(2,13);
cprintf("Press 7  for Insertion Sort");
gotoxy(2,14);
cprintf("Press 8  for Merge Sort");
gotoxy(2,15);
cprintf("Press 9  for Quick Sort");
gotoxy(2,16);
cprintf("Press 10 for Radix Sort");
gotoxy(2,17);
cprintf("Press 11 for Selection Sort");
gotoxy(2,18);
cprintf("Press 12 for Shell Sort");
gotoxy(2,19);
cprintf("Press 13 for DIGIT SORT");

gotoxy(2,21);
textcolor(28);
cprintf("Always Enter Numeric Choice:");
cscanf("%d",&c);
getch();
switch(c)
{
case 0:
textcolor(18);
gotoxy(37,30);
cprintf("Thank You");
textcolor(18+128);
gotoxy(35,32);
cprintf("VISIT AGAIN..");
//break;
goto Again3;

case 1:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Bubble Sort");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;

case 2:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Bucket Sort");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;

case 3:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Cocktail Sort");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;

case 4:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Comb Sort");

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;


case 5:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Counting Sort");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;

case 6:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected  Heap Sort");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;


case 7:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Inertion Sort");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;


case 8:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Merge Sort");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;


case 9:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Quick Sort");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;


case 10:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Radix sort");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;


case 11:
textcolor(18);
gotoxy(2,23);
cprintf("You have Selection Sort");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;


case 12:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Shell Sort");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;


case 13:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected DIGIT SORT");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;

default:
textcolor(20);
gotoxy(25,30);
cprintf("You have enter the wrong choice");
gotoxy(32,32);
cprintf("Please Try Again");
textcolor(20+128);
gotoxy(34,34);
cprintf("PRESS ENTER..");
getch();
}
goto Again2;
Again3:
getch();
}