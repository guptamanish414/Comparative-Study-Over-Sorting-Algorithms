//Our complete project.
//Comparative Study Over Sorting Algorithms.

//Login page.
#include<stdio.h>
#include<conio.h>
void bubble(void)
void bucket(void)
void cocktail(void)
void comb(void)
void heap(void)
void insertion(void)
void merge(void)
void quick(void)
void radix(void)
void selection(void)
void shell(void
void digit(void)
void main()
{
  int i,j,k,c;
  Again:
  clrscr();
  textbackground(3);
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
 cprintf("�");
  for(i=0;i<74;i++)
   {
   cprintf("�");
   }
  cprintf("�");
  for(i=10;i<45;i++)
   {
   gotoxy(3,2+i);
   cprintf("�");
   }
   gotoxy(3,47);
   cprintf("�");
  for(i=0;i<74;i++)
   {
   cprintf("�");
   }
  cprintf("�");
  for(i=10;i<45;i++)
   {
   gotoxy(78,2+i);
   cprintf("�");
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
 cprintf("�");
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
 cprintf("�");
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

//Welcome Page.

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
  delay(200);
  textcolor(11);
 gotoxy(2,3);
 cprintf("W W");
 gotoxy(2,4);
 cprintf("W W");
 gotoxy(2,5);
 cprintf("W W");
 gotoxy(2,6);
 cprintf("WWW");
 gotoxy(2,7);
 cprintf("W W");
  textcolor(11);
 gotoxy(6,3);
 cprintf("EEE");
 gotoxy(6,4);
 cprintf("E");
 gotoxy(6,5);
 cprintf("EEE");
 gotoxy(6,6);
 cprintf("E");
 gotoxy(6,7);
 cprintf("EEE");
  textcolor(11);
 gotoxy(10,3);
 cprintf("L");
 gotoxy(10,4);
 cprintf("L");
 gotoxy(10,5);
 cprintf("L");
 gotoxy(10,6);
 cprintf("L");
 gotoxy(10,7);
 cprintf("LLL");
  textcolor(11);
 gotoxy(14,3);
 cprintf("CCC");
 gotoxy(14,4);
 cprintf("C");
 gotoxy(14,5);
 cprintf("C");
 gotoxy(14,6);
 cprintf("C");
 gotoxy(14,7);
 cprintf("CCC");
  textcolor(11);
 gotoxy(18,3);
 cprintf("OOO");
 gotoxy(18,4);
 cprintf("O O");
 gotoxy(18,5);
 cprintf("O O");
 gotoxy(18,6);
 cprintf("O O");
 gotoxy(18,7);
 cprintf("OOO");
  textcolor(11);
 gotoxy(22,3);
 cprintf("M M");
 gotoxy(22,4);
 cprintf("MMM");
 gotoxy(22,5);
 cprintf("M M");
 gotoxy(22,6);
 cprintf("M M");
 gotoxy(22,7);
 cprintf("M M");
  textcolor(11);
 gotoxy(26,3);
 cprintf("EEE");
 gotoxy(26,4);
 cprintf("E");
 gotoxy(26,5);
 cprintf("EEE");
 gotoxy(26,6);
 cprintf("E");
 gotoxy(26,7);
 cprintf("EEE");

  delay(400);
  textcolor(11);
 gotoxy(30,3);
 cprintf("TTT");
 gotoxy(30,4);
 cprintf(" T ");
 gotoxy(30,5);
 cprintf(" T ");
 gotoxy(30,6);
 cprintf(" T ");
 gotoxy(30,7);
 cprintf(" T ");
  textcolor(11);
 gotoxy(34,3);
 cprintf("OOO");
 gotoxy(34,4);
 cprintf("O O");
 gotoxy(34,5);
 cprintf("O O");
 gotoxy(34,6);
 cprintf("O O");
 gotoxy(34,7);
 cprintf("OOO");

  delay(400);
  textcolor(11);
 gotoxy(39,3);
 cprintf("OOO");
 gotoxy(39,4);
 cprintf("O O");
 gotoxy(39,5);
 cprintf("O O");
 gotoxy(39,6);
 cprintf("O O");
 gotoxy(39,7);
 cprintf("OOO");
  textcolor(11);
 gotoxy(43,3);
 cprintf("U U");
 gotoxy(43,4);
 cprintf("U U");
 gotoxy(43,5);
 cprintf("U U");
 gotoxy(43,6);
 cprintf("U U");
 gotoxy(43,7);
 cprintf("UUU");
  textcolor(11);
 gotoxy(47,3);
 cprintf("RRR");
 gotoxy(47,4);
 cprintf("R R");
 gotoxy(47,5);
 cprintf("RRR");
 gotoxy(47,6);
 cprintf("R R");
 gotoxy(47,7);
 cprintf("R  R");
  delay(600);
  textcolor(11);
 gotoxy(52,3);
 cprintf("PPP");
 gotoxy(52,4);
 cprintf("P P");
 gotoxy(52,5);
 cprintf("PPP");
 gotoxy(52,6);
 cprintf("P");
 gotoxy(52,7);
 cprintf("P");
   textcolor(11);
 gotoxy(56,3);
 cprintf("RRR");
 gotoxy(56,4);
 cprintf("R R");
 gotoxy(56,5);
 cprintf("RRR");
 gotoxy(56,6);
 cprintf("R R");
 gotoxy(56,7);
 cprintf("R  R");
   textcolor(11);
 gotoxy(61,3);
 cprintf("OOO");
 gotoxy(61,4);
 cprintf("O O");
 gotoxy(61,5);
 cprintf("O O");
 gotoxy(61,6);
 cprintf("O O");
 gotoxy(61,7);
 cprintf("OOO");
  textcolor(11);
 gotoxy(65,3);
 cprintf("  J");
 gotoxy(65,4);
 cprintf("  J");
 gotoxy(65,5);
 cprintf("  J");
 gotoxy(65,6);
 cprintf("J J");
 gotoxy(65,7);
 cprintf("JJJ");
  textcolor(11);
 gotoxy(69,3);
 cprintf("EEE");
 gotoxy(69,4);
 cprintf("E");
 gotoxy(69,5);
 cprintf("EEE");
 gotoxy(69,6);
 cprintf("E");
 gotoxy(69,7);
 cprintf("EEE");
  textcolor(11);
 gotoxy(73,3);
 cprintf("CCC");
 gotoxy(73,4);
 cprintf("C");
 gotoxy(73,5);
 cprintf("C");
 gotoxy(73,6);
 cprintf("C");
 gotoxy(73,7);
 cprintf("CCC");
  textcolor(11);
 gotoxy(77,3);
 cprintf("TTT");
 gotoxy(77,4);
 cprintf(" T ");
 gotoxy(77,5);
 cprintf(" T ");
 gotoxy(77,6);
 cprintf(" T ");
 gotoxy(77,7);
 cprintf(" T ");

 textcolor(9+128);
 for(i=2;i<80;i++)
 {
 gotoxy(i,9);
 delay(10);
 cprintf("*");
 }

  delay(1000);
  textcolor(13);
 gotoxy(6,19);
 cprintf("CCC");
 gotoxy(6,20);
 cprintf("C");
 gotoxy(6,21);
 cprintf("C");
 gotoxy(6,22);
 cprintf("C");
 gotoxy(6,23);
 cprintf("CCC");
  textcolor(13);
 gotoxy(10,19);
 cprintf("OOO");
 gotoxy(10,20);
 cprintf("O O");
 gotoxy(10,21);
 cprintf("O O");
 gotoxy(10,22);
 cprintf("O O");
 gotoxy(10,23);
 cprintf("OOO");
  textcolor(13);
 gotoxy(14,19);
 cprintf("M M");
 gotoxy(14,20);
 cprintf("MMM");
 gotoxy(14,21);
 cprintf("M M");
 gotoxy(14,22);
 cprintf("M M");
 gotoxy(14,23);
 cprintf("M M");
  textcolor(13);
 gotoxy(18,19);
 cprintf("PPP");
 gotoxy(18,20);
 cprintf("P P");
 gotoxy(18,21);
 cprintf("PPP");
 gotoxy(18,22);
 cprintf("P");
 gotoxy(18,23);
 cprintf("P");
  textcolor(13);
 gotoxy(22,19);
 cprintf(" A ");
 gotoxy(22,20);
 cprintf("A A");
 gotoxy(22,21);
 cprintf("AAA");
 gotoxy(22,22);
 cprintf("A A");
 gotoxy(22,23);
 cprintf("A A");
  textcolor(13);
 gotoxy(26,19);
 cprintf("RRR");
 gotoxy(26,20);
 cprintf("R R");
 gotoxy(26,21);
 cprintf("RRR");
 gotoxy(26,22);
 cprintf("R R");
 gotoxy(26,23);
 cprintf("R  R");
  textcolor(13);
 gotoxy(31,19);
 cprintf(" A ");
 gotoxy(31,20);
 cprintf("A A");
 gotoxy(31,21);
 cprintf("AAA");
 gotoxy(31,22);
 cprintf("A A");
 gotoxy(31,23);
 cprintf("A A");
  textcolor(13);
 gotoxy(35,19);
 cprintf("TTT");
 gotoxy(35,20);
 cprintf(" T ");
 gotoxy(35,21);
 cprintf(" T ");
 gotoxy(35,22);
 cprintf(" T ");
 gotoxy(35,23);
 cprintf(" T ");
  textcolor(13);
 gotoxy(39,19);
 cprintf("III");
 gotoxy(39,20);
 cprintf(" I ");
 gotoxy(39,21);
 cprintf(" I ");
 gotoxy(39,22);
 cprintf(" I ");
 gotoxy(39,23);
 cprintf("III");
  textcolor(13);
 gotoxy(43,19);
 cprintf("V V");
 gotoxy(43,20);
 cprintf("V V");
 gotoxy(43,21);
 cprintf("V V");
 gotoxy(43,22);
 cprintf("V V");
 gotoxy(43,23);
 cprintf(" V ");
  textcolor(13);
 gotoxy(47,19);
 cprintf("EEE");
 gotoxy(47,20);
 cprintf("E");
 gotoxy(47,21);
 cprintf("EEE");
 gotoxy(47,22);
 cprintf("E");
 gotoxy(47,23);
 cprintf("EEE");

  delay(1200);
  textcolor(13);
 gotoxy(57,19);
 cprintf("SSS");
 gotoxy(57,20);
 cprintf("S");
 gotoxy(57,21);
 cprintf("SSS");
 gotoxy(57,22);
 cprintf("  S");
 gotoxy(57,23);
 cprintf("SSS");
  textcolor(13);
 gotoxy(61,19);
 cprintf("TTT");
 gotoxy(61,20);
 cprintf(" T ");
 gotoxy(61,21);
 cprintf(" T ");
 gotoxy(61,22);
 cprintf(" T ");
 gotoxy(61,23);
 cprintf(" T ");
  textcolor(13);
 gotoxy(65,19);
 cprintf("U U");
 gotoxy(65,20);
 cprintf("U U");
 gotoxy(65,21);
 cprintf("U U");
 gotoxy(65,22);
 cprintf("U U");
 gotoxy(65,23);
 cprintf("UUU");
   textcolor(13);
 gotoxy(69,19);
 cprintf("DD ");
 gotoxy(69,20);
 cprintf("D D");
 gotoxy(69,21);
 cprintf("D D");
 gotoxy(69,22);
 cprintf("D D");
 gotoxy(69,23);
 cprintf("DD ");
  textcolor(13);
 gotoxy(73,19);
 cprintf("Y Y");
 gotoxy(73,20);
 cprintf("Y Y");
 gotoxy(73,21);
 cprintf("Y Y");
 gotoxy(73,22);
 cprintf(" Y ");
 gotoxy(73,23);
 cprintf(" Y ");

  delay(1400);
  textcolor(34);
 gotoxy(16,27);
 cprintf("OOO");
 gotoxy(16,28);
 cprintf("O O");
 gotoxy(16,29);
 cprintf("O O");
 gotoxy(16,30);
 cprintf("O O");
 gotoxy(16,31);
 cprintf("OOO");
  textcolor(34);
 gotoxy(20,27);
 cprintf("V V");
 gotoxy(20,28);
 cprintf("V V");
 gotoxy(20,29);
 cprintf("V V");
 gotoxy(20,30);
 cprintf("V V");
 gotoxy(20,31);
 cprintf(" V ");
  textcolor(34);
 gotoxy(24,27);
 cprintf("EEE");
 gotoxy(24,28);
 cprintf("E");
 gotoxy(24,29);
 cprintf("EEE");
 gotoxy(24,30);
 cprintf("E");
 gotoxy(24,31);
 cprintf("EEE");
  textcolor(34);
 gotoxy(28,27);
 cprintf("RRR");
 gotoxy(28,28);
 cprintf("R R");
 gotoxy(28,29);
 cprintf("RRR");
 gotoxy(28,30);
 cprintf("R R");
 gotoxy(28,31);
 cprintf("R  R");

  delay(1600);
  textcolor(34);
 gotoxy(42,27);
 cprintf("SSS");
 gotoxy(42,28);
 cprintf("S");
 gotoxy(42,29);
 cprintf("SSS");
 gotoxy(42,30);
 cprintf("  S");
 gotoxy(42,31);
 cprintf("SSS");
  textcolor(34);
 gotoxy(46,27);
 cprintf("OOO");
 gotoxy(46,28);
 cprintf("O O");
 gotoxy(46,29);
 cprintf("O O");
 gotoxy(46,30);
 cprintf("O O");
 gotoxy(46,31);
 cprintf("OOO");
  textcolor(34);
 gotoxy(50,27);
 cprintf("RRR");
 gotoxy(50,28);
 cprintf("R R");
 gotoxy(50,29);
 cprintf("RRR");
 gotoxy(50,30);
 cprintf("R R");
 gotoxy(50,31);
 cprintf("R  R");
  textcolor(34);
 gotoxy(54,27);
 cprintf("TTT");
 gotoxy(54,28);
 cprintf(" T ");
 gotoxy(54,29);
 cprintf(" T ");
 gotoxy(54,30);
 cprintf(" T ");
 gotoxy(54,31);
 cprintf(" T ");
  textcolor(34);
 gotoxy(58,27);
 cprintf("III");
 gotoxy(58,28);
 cprintf(" I ");
 gotoxy(58,29);
 cprintf(" I ");
 gotoxy(58,30);
 cprintf(" I ");
 gotoxy(58,31);
 cprintf("III");
  textcolor(34);
 gotoxy(62,27);
 cprintf("N N");
 gotoxy(62,28);
 cprintf("NNN");
 gotoxy(62,29);
 cprintf("NNN");
 gotoxy(62,30);
 cprintf("NNN");
 gotoxy(62,31);
 cprintf("N N");
  textcolor(34);
 gotoxy(66,27);
 cprintf("GGG");
 gotoxy(66,28);
 cprintf("G  ");
 gotoxy(66,29);
 cprintf("G G");
 gotoxy(66,30);
 cprintf("GGG");
 gotoxy(66,31);
 cprintf("  G");

  delay(1800);
  textcolor(22);
 gotoxy(22,35);
 cprintf(" A ");
 gotoxy(22,36);
 cprintf("A A");
 gotoxy(22,37);
 cprintf("AAA");
 gotoxy(22,38);
 cprintf("A A");
 gotoxy(22,39);
 cprintf("A A");
  textcolor(22);
 gotoxy(26,35);
 cprintf("L");
 gotoxy(26,36);
 cprintf("L");
 gotoxy(26,37);
 cprintf("L");
 gotoxy(26,38);
 cprintf("L");
 gotoxy(26,39);
 cprintf("LLL");
  textcolor(22);
 gotoxy(30,35);
 cprintf("GGG");
 gotoxy(30,36);
 cprintf("G  ");
 gotoxy(30,37);
 cprintf("G G");
 gotoxy(30,38);
 cprintf("GGG");
 gotoxy(30,39);
 cprintf("  G");
  textcolor(22);
 gotoxy(34,35);
 cprintf("OOO");
 gotoxy(34,36);
 cprintf("O O");
 gotoxy(34,37);
 cprintf("O O");
 gotoxy(34,38);
 cprintf("O O");
 gotoxy(34,39);
 cprintf("OOO");
  textcolor(22);
 gotoxy(38,35);
 cprintf("RRR");
 gotoxy(38,36);
 cprintf("R R");
 gotoxy(38,37);
 cprintf("RRR");
 gotoxy(38,38);
 cprintf("R R");
 gotoxy(38,39);
 cprintf("R  R");
  textcolor(22);
 gotoxy(43,35);
 cprintf("III");
 gotoxy(43,36);
 cprintf(" I ");
 gotoxy(43,37);
 cprintf(" I ");
 gotoxy(43,38);
 cprintf(" I ");
 gotoxy(43,39);
 cprintf("III");
  textcolor(22);
 gotoxy(47,35);
 cprintf("TTT");
 gotoxy(47,36);
 cprintf(" T ");
 gotoxy(47,37);
 cprintf(" T ");
 gotoxy(47,38);
 cprintf(" T ");
 gotoxy(47,39);
 cprintf(" T ");
  textcolor(22);
 gotoxy(51,35);
 cprintf("H H");
 gotoxy(51,36);
 cprintf("H H");
 gotoxy(51,37);
 cprintf("HHH");
 gotoxy(51,38);
 cprintf("H H");
 gotoxy(51,39);
 cprintf("H H");
  textcolor(22);
 gotoxy(55,35);
 cprintf("M M");
 gotoxy(55,36);
 cprintf("MMM");
 gotoxy(55,37);
 cprintf("M M");
 gotoxy(55,38);
 cprintf("M M");
 gotoxy(55,39);
 cprintf("M M");
  textcolor(22);
 gotoxy(59,35);
 cprintf("SSS");
 gotoxy(59,36);
 cprintf("S");
 gotoxy(59,37);
 cprintf("SSS");
 gotoxy(59,38);
 cprintf("  S");
 gotoxy(59,39);
 cprintf("SSS");

 textcolor(9+128);
 for(i=2;i<80;i++)
 {
 gotoxy(i,45);
 delay(10);
 cprintf("*");
 }
 textcolor(23);
 gotoxy(51,47);
 cprintf("PRESS ENTER FOR NEXT PAGE...");
 getch();

//Group members names.

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
cprintf("Comparative Study Over Sorting Algorithms");

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
cprintf("1.Md Rameez Raja");
gotoxy(21,14);
cprintf("2.Manish Kumar Gupta");
gotoxy(21,16);
cprintf("3.Arup Shngha");
gotoxy(21,18);
cprintf("4.Md Imran Ansari");
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
cprintf("Md Rameez Raja");

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

//To select sotring programs Using switch case.
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

textcolor(13);
gotoxy(25,3);
cprintf("APLICATION OF SORTING ALGORITHMS");
 textcolor(1);
 for(i=2;i<80;i++)
 {
 gotoxy(i,5);
 delay(5);
 cprintf("�");
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

//Bubble sort program
void bubble();
{
int A[200],N,Temp,i,j;
clrscr();
printf("\n\t\t\t\tBUBBLE SORT");
printf("\n\t\t\t\t***********\n\n\n");
printf("\n\nENTER THE NUMBER OF ELEMENTS:");
scanf("%d", &N);
printf("\nENTER THE INPUT ELEMENTS:\n\n");
for(i=0;i<N;i++)
{
	scanf("%d",&A[i]);
}
printf("\nBEFORE SORTING ELEMENTS ARE:");
for(i=0; i<N; i++)
	printf("%d ",A[i]);

for(i=0;i<N-1;i++)
	for(j=0;j<N-i;j++)
	if(A[j]>A[j+1])
		{
		Temp = A[j];
		A[j] = A[j+1];
		A[j+1] = Temp;
		}
printf("\n\nAFTER SORTING ELEMENTS ARE:");
for(i=0; i<N; i++)
	printf("%d ",A[i]);
getch();
}

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

//Bucket Sort
#include <conio.h>
#include <stdio.h>

void bucket();
{
int unsorted[50] , bucket[10][50]={{0}} , sorted[50] ;
int   j , k , m , p , flag = 0, num, N;
clrscr();
printf("\n\t\t\t\tBUCKET SORT");
printf("\n\t\t\t\t***********\n\n\n");
printf("\n\nENTER THE NUMBER OF ELEMENTS:");
scanf("%d", &N);
printf("\nENTER THE INPUT ELEMENTS:\n\n");
for(k=0 ;  k < N ; k++){
scanf("\n%d",&num);
sorted[k] = unsorted[k] = num;
}

for(p=1; flag != N ; p*=10){

flag = 0;

for(k=0;k<N;k++){
bucket[(sorted[k]/p)%10][k] = sorted[k];
if ( (sorted[k]/p)%10  == 0 ){
   flag++;
   }
}

if (flag == N){
   printf("\n\nAFTER SORTING ELEMENTS ARE:");
   for(j=0 ;  j < N ; j++){
   printf("%d\t", sorted[j]);
   }
   printf("\n");
   getch();
   }

for(j=0,m=0;j<10;j++){
for(k=0;k<N;k++){
if( bucket[j][k] > 0 ){
  sorted[m] = bucket[j][k];
  bucket[j][k] = 0 ;
  m++;
  }
}
}
}
}

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

//Cocktail sort
#include<stdio.h>
#include<conio.h>
#define MAX 10 

void cocktail();
{
int a[MAX],b[MAX];
int n,i,j,pass,sw=1,temp;
clrscr();
 printf("\n\t\t\t\tCOCKTAIL SORT");
printf("\n\t\t\t\t**************\n\n\n");
printf("\n\nENTER THE NUMBER OF ELEMENTS:");
scanf("%d", &n);
printf("\nENTER THE INPUT ELEMENTS:\n\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	b[i]=a[i];
}
 printf("\nBEFORE SORTING ELEMENTS ARE:");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 printf("\n\nAFTER SORTING ELEMENTS ARE:");
 sw=1;
for(i=0;i<n-1 && sw==1;i++)
{
 sw=0;
 for(j=0;j<n-1-i;j++)
  { 
   if(b[j]>b[j+1])
    { 
     temp=b[j+1];
     b[j+1]=b[j];
     b[j]=temp;
     sw=1;
     } 
  if(b[n-1-j]<b[n-2-j])
    { 
     temp=b[n-2-j];
     b[n-2-j]=b[n-1-j];
     b[n-1-j]=temp;
     sw=1;
     }
  }
} 
 for(j=0;j<n;j++)
 printf("%d ",b[j]);
 printf("\n\nNUMBER OF PASSES REQUIRED:%d",i);
 getch();
}

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

//Comb sort
#include<stdio.h>
#include<conio.h>
void Combsort11(int a[], int nElements)
{
int i=0,j=0,k=0,gap, swapped = 1;
int temp=0;
gap = nElements;
while (gap > 1 || swapped == 1)
{
gap = gap/1.3;
//printf("gap=%d\n",gap);
if (gap < 1)gap=1;
swapped = 0;
for (i = 0,j=gap;j<nElements;i++,j++)
	{
		//printf("%d%d--",i,j);
		if(a[i]>a[j])
		{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		swapped = 1;
		/*for(k=0;k<nElements;k++)
		{
		printf("%d.",a[k]);
		}
		printf("\n") ;   */
		}
	}
}
}

void comb();
{
int a[100];
int i,n;
clrscr();

printf("\n\t\t\t\tCOMB SORT");
printf("\n\t\t\t\t*********\n\n\n");
printf("\n\nENTER THE NUMBER OF ELEMENTS:");
scanf("%d", &n);
printf("\nENTER THE INPUT ELEMENTS:\n\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nBEFORE SORTING ELEMENTS ARE:");
for(i=0; i<n; i++)
{
printf("%d ",a[i]);
}

Combsort11(a,n);

printf("\n\nAFTER SORTING ELEMENTS ARE:");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
getch();
}

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

//counting sort
#include<stdio.h>
#include<conio.h>
int Counting_sort(int A[], int k, int n)
{
	int i, j;
	int B[15], C[100];
	for(i = 0; i <= k; i++)
			C[i] = 0;
	for(j =1; j <= n; j++)
			C[A[j]] = C[A[j]] + 1;
	for(i = 1; i <= k; i++)
			C[i] = C[i] + C[i-1];
	for(j = n; j >= 1; j--)
	{
			B[C[A[j]]] = A[j];
			C[A[j]] = C[A[j]] - 1;
	}
	printf("\nAFTER SORTING ELEMENTS ARE:");
	for(i = 1; i <= n; i++)
	      printf("%d ",B[i]);
return 0;
}

void counting()
{
	int n,i,k = 0, A[15];
	clrscr();
	printf("\n\t\t\t\tCOUNTING SORT");
	printf("\n\t\t\t\t*************\n\n\n");
	printf("\n\nENTER THE NUMBER OF ELEMENTS:");
	scanf("%d", &n);
	printf("\nAFTER SORTING ELEMENTS ARE:");
	for ( i = 1; i <= n; i++)
	{
		 scanf("%d ",&A[i]);
		 if(A[i] > k)
		 {
			k = A[i];
		 }
	}
	Counting_sort(A, k, n);
getch();
}


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
//Heap sort

#include<stdio.h>
#include<conio.h>

int hsort[25],n,i;

void adjust(int,int);
void heapify();

void heap()
{
int temp;
clrscr();
printf("\n\t\t\t\tHEAP SORT");
printf("\n\t\t\t\t*********\n\n\n");
printf("\n\nENTER THE NUMBER OF ELEMENTS:");
scanf("%d", &n);
printf("\nENTER THE INPUT ELEMENTS:\n\n");
for(i=1;i<=n;i++)
scanf("%d",&hsort[i]);
printf("\nBEFORE SORTING ELEMENTS ARE:");
for(i=1;i<=n;i++)
printf("%d ",hsort[i]);

heapify();

for(i=n;i>=2;i--)
{
temp=hsort[1];
hsort[1]=hsort[i];
hsort[i]=temp;
adjust(1,i-1);
}
printf("\n\nAFTER SORTING ELEMENTS ARE:");
for(i=1;i<=n;i++)
printf("%d ",hsort[i]);
getch();
}

void heapify()
{
int i;
for(i=n/2;i>=1;i--)
adjust(i,n);
}
void adjust(int i,int n)
{
int j,element;
j=2*i;
element=hsort[i];
while(j<=n)
{
if((j<n)&&(hsort[j]<hsort[j+1]))
j=j++;
if(element>=hsort[j])
break;
hsort[j/2]=hsort[j];
j=2*j;
}
hsort[j/2]=element;
}


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

//Insertion sort

#include<stdio.h>
void insertion()
{
	int A[20], N, Temp, i, j;
	clrscr();
	printf("\n\t\t\t\tINSERTION SORT");
	printf("\n\t\t\t\t**************\n\n\n");
	printf("\n\nENTER THE NUMBER OF ELEMENTS:");
	scanf("%d", &N);
	printf("\nENTER THE INPUT ELEMENTS:\n\n");
	for(i=0; i<N; i++)
	{
	scanf("\n%d", &A[i]);
	}
	printf("\nBEFOR SORTING ELEMENTS ARE:");
	for(i=0; i<N; i++)
	{
	 printf("%d ",A[i]);
	}

	for(i=1; i<N; i++)
	{
		Temp = A[i];
		j = i-1;
		while(Temp<A[j] && j>=0)
		{
			A[j+1] = A[j];
			j = j-1;
		}
		A[j+1] = Temp;
	}
	printf("\n\nAFTER SORTING ELEMENTS ARE:");
	for(i=0; i<N; i++)
		printf("%d ", A[i]);
	getch();
}



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

//Mearge sort

#include <stdio.h>
#include <stdlib.h>
 
#define MAXARRAY 100
 
void mergesort(int a[], int low, int high);

void merge() {
 int array[MAXARRAY],n;
 int i = 0;
 clrscr();

 /* reading the elements form the users*/
  printf("\n\t\t\t\tMERGE SORT");
  printf("\n\t\t\t\t**********\n\n\n");
  printf("\n\nENTER THE NUMBER OF ELEMENTS:");
  scanf("%d", &n);
  printf("\nENTER THE INPUT ELEMENTS:\n\n");
   for(i = 0; i < n; i++ ){
       scanf("%d",&array[i]);
   }

 /* array before mergesort */
 printf("\nBEFORE SORTING ELEMENTS ARE:");
 for(i = 0; i < n; i++)
  printf(" %d", array[i]);

 printf("\n");

 mergesort(array, 0, n - 1);

 /* array after mergesort */
 printf("\nAFTER SORTING ELEMENTS ARE:");
 for(i = 0; i < n; i++)
  printf(" %d", array[i]);

 printf("\n");
 getch();
}

void mergesort(int a[], int low, int high) {
 int i = 0;
 int length=high-low+1;
 int pivot=0;
 int merge1=0;
 int merge2=0;
 int working[100];

 if(low == high)
 return;

 pivot  = (low + high) / 2;

 mergesort(a, low, pivot);
 mergesort(a, pivot + 1, high);

 for(i = 0; i < length; i++)
  working[i] = a[low + i];

 merge1 = 0;
 merge2 = pivot - low + 1;

 for(i = 0; i < length; i++) {
  if(merge2 <= high - low)
   if(merge1 <= pivot - low)
    if(working[merge1] > working[merge2])
     a[i + low] = working[merge2++];
    else
     a[i + low] = working[merge1++];
   else
    a[i + low] = working[merge2++];
  else
   a[i + low] = working[merge1++];
 }
}


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

//Quick Sort

#include "stdio.h"
#include<conio.h>
int split ( int*,int,int) ;
void quicksort (int*,int,int) ;

void quick( )
{
int i,n,arr[100];
clrscr();
printf("\n\t\t\t\tQUICK SORT");
printf("\n\t\t\t\t**********\n\n\n");
printf("\n\nENTER THE NUMBER OF ELEMENTS:");
scanf("%d",&n);
printf("\nENTER THE INPUT ELEMENTS:\n\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
printf("\nBEFORE SORTING ELEMENTS ARE:");
for(i=0;i<n;i++)
	printf("%d ",arr[i]);

quicksort(arr,0,n) ;

printf("\n\nAFTER SORTING ELEMENTS ARE:");
for(i=0; i<n; i++)
	printf("%d ",arr[i]);
getch();
}

void quicksort ( int a[ ], int lower, int upper )
{
int i ;
if ( upper > lower )
	{
	i = split ( a, lower, upper ) ;
	quicksort ( a, lower, i - 1 ) ;
	quicksort ( a, i + 1, upper ) ;
	}
}

int split ( int a[ ], int lower, int upper )
{
int i, p, q, t ;
p = lower + 1 ;
q = upper ;
i = a[lower] ;
while ( q >= p )
{
	while ( a[p] < i )
		p++ ;

	while ( a[q] > i )
		q-- ;
	if ( q > p )
	 {
	 t = a[p] ;
	 a[p] = a[q] ;
	 a[q] = t ;
	 }
}
t = a[lower] ;
a[lower] = a[q] ;
a[q] = t ;

return q ;
}

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

//Radix sort using C.

#define MAX 20
#define SHOWPASS
void print(int *a, int n)
{
  int i;
  for (i = 0; i < n; i++)
    printf("%d\t", a[i]);
}

void radixsort(int *a, int n)
{
  int i, b[MAX], m = 0, exp = 1;
  for (i = 0; i < n; i++)
  {
    if (a[i] > m)
      m = a[i];
  }

  while (m / exp > 0)
  {
    int bucket[10] =
    {
      0
    };
    for (i = 0; i < n; i++)
      bucket[a[i] / exp % 10]++;
    for (i = 1; i < 10; i++)
      bucket[i] += bucket[i - 1];
    for (i = n - 1; i >= 0; i--)
      b[--bucket[a[i] / exp % 10]] = a[i];
    for (i = 0; i < n; i++)
      a[i] = b[i];
    exp *= 10;

 /*   #ifdef SHOWPASS
      printf("\n\nNUMBER OF PASS REQUIRED: ");
      print(a, n);
    #endif  */
  }
}


void radix()
{
  int arr[MAX];
  int i, n;
  clrscr();
  printf("\n\t\t\t\tRADIX SORT");
  printf("\n\t\t\t\t**********\n\n\n");
  printf("\n\nENTER THE NUMBER OF ELEMENTS < %d: ",MAX);
  scanf("%d", &n);
  printf("\nENTER THE %d INPUT ELEMENTS:\n\n",n);
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);


  printf("\nBEFORE SORTING ELEMENTS ARE:");
  print(&arr[0], n);

  radixsort(&arr[0], n);

  printf("\n\nAFTER SORTING ELEMENTS ARE:");
  print(&arr[0], n);
  printf("\n");

  getch();
}


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

//Selection sort

#include<stdio.h>

void selection();
{
   int array[100], n, c, d, position,swap;
   clrscr();

   printf("\n\t\t\t\tSELECTION SORT");
   printf("\n\t\t\t\t**************\n\n\n");
   printf("\n\nENTER THE NUMBER OF ELEMENTS:");
   scanf("%d", &n);
   printf("\nENTER THE %d INPUT ELEMENTS:\n\n",n);
      for ( c = 0 ; c < n ; c++ )
      scanf("%d", &array[c]);
   printf("\nBEFORE SORTING ELEMENTS ARE:");
      for ( c = 0 ; c < n ; c++ )
      printf("%d ",array[c]);
   for ( c = 0 ; c < ( n - 1 ) ; c++ )
   {
      position = c;

      for ( d = c + 1 ; d < n ; d++ )
      {
	 if ( array[position] > array[d] )
	    position = d;
      }
      if ( position != c )
      {
	 swap = array[c];
	 array[c] = array[position];
	 array[position] = swap;
      }
   }
   printf("\n\nAFTER SORTING ELEMENTS ARE:");
      for ( c = 0 ; c < n ; c++ )
      printf("%d ", array[c]);

  getch();
}

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

//Sell sort.
#include<stdio.h>
#include<conio.h>
void shellsort(int a[],int n)
{
int j,i,k,m,mid;
for(m = n/2;m>0;m/=2)
{
for(j = m;j<n;j++)
{
for(i=j-m;i>=0;i-=m)
{
if(a[i+m]>=a[i])
break;
else
{
mid = a[i];
a[i] = a[i+m];
a[i+m] = mid;
}
}    }  } }
void shell()
{
int a[10],i,n;
clrscr();
printf("\n\t\t\t\tSELL SORT");
printf("\n\t\t\t\t*********\n\n\n");
printf("\n\nENTER THE NUMBER OF ELEMENTS:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nENTER THE %d INPUT ELEMENT:",i+1);
scanf("%d",&a[i]);
}
printf("\nBEROFE SORTING ELEMENTS ARE:");
for(i=0;i<n;i++)
printf("%2d ",a[i]);
shellsort(a,n);
printf("\n\nAFTER SORTING ELEMENTS ARE:");
for(i=0;i<n;i++)
printf("%2d ",a[i]);
getch();
return 0;
}


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

//Our Sorting Algorithm(Digit sort design)
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
  delay(200);
  textcolor(11);
 gotoxy(2,3);
 cprintf("OOO");
 gotoxy(2,4);
 cprintf("O O");
 gotoxy(2,5);
 cprintf("O O");
 gotoxy(2,6);
 cprintf("O O");
 gotoxy(2,7);
 cprintf("OOO");
  textcolor(11);
 gotoxy(6,3);
 cprintf("U U");
 gotoxy(6,4);
 cprintf("U U");
 gotoxy(6,5);
 cprintf("U U");
 gotoxy(6,6);
 cprintf("U U");
 gotoxy(6,7);
 cprintf("UUU");
  textcolor(11);
 gotoxy(10,3);
 cprintf("RRR");
 gotoxy(10,4);
 cprintf("R R");
 gotoxy(10,5);
 cprintf("RRR");
 gotoxy(10,6);
 cprintf("R R");
 gotoxy(10,7);
 cprintf("R  R");

  delay(400);
  textcolor(11);
 gotoxy(15,3);
 cprintf("SSS");
 gotoxy(15,4);
 cprintf("S");
 gotoxy(15,5);
 cprintf("SSS");
 gotoxy(15,6);
 cprintf("  S");
 gotoxy(15,7);
 cprintf("SSS");
  textcolor(11);
 gotoxy(19,3);
 cprintf("OOO");
 gotoxy(19,4);
 cprintf("O O");
 gotoxy(19,5);
 cprintf("O O");
 gotoxy(19,6);
 cprintf("O O");
 gotoxy(19,7);
 cprintf("OOO");
  textcolor(11);
 gotoxy(23,3);
 cprintf("RRR");
 gotoxy(23,4);
 cprintf("R R");
 gotoxy(23,5);
 cprintf("RRR");
 gotoxy(23,6);
 cprintf("R R");
 gotoxy(23,7);
 cprintf("R  R");
  textcolor(11);
 gotoxy(27,3);
 cprintf("TTT");
 gotoxy(27,4);
 cprintf(" T ");
 gotoxy(27,5);
 cprintf(" T ");
 gotoxy(27,6);
 cprintf(" T ");
 gotoxy(27,7);
 cprintf(" T ");
  textcolor(11);
 gotoxy(31,3);
 cprintf("III");
 gotoxy(31,4);
 cprintf(" I ");
 gotoxy(31,5);
 cprintf(" I ");
 gotoxy(31,6);
 cprintf(" I ");
 gotoxy(31,7);
 cprintf("III");
  textcolor(11);
 gotoxy(35,3);
 cprintf("N N");
 gotoxy(35,4);
 cprintf("NNN");
 gotoxy(35,5);
 cprintf("NNN");
 gotoxy(35,6);
 cprintf("NNN");
 gotoxy(35,7);
 cprintf("N N");
  textcolor(11);
 gotoxy(39,3);
 cprintf("GGG");
 gotoxy(39,4);
 cprintf("G  ");
 gotoxy(39,5);
 cprintf("G  ");
 gotoxy(39,6);
 cprintf("GGG");
 gotoxy(39,7);
 cprintf("  G");

  delay(600);
  textcolor(11);
 gotoxy(44,3);
 cprintf(" A ");
 gotoxy(44,4);
 cprintf("A A");
 gotoxy(44,5);
 cprintf("AAA");
 gotoxy(44,6);
 cprintf("A A");
 gotoxy(44,7);
 cprintf("A A");
  textcolor(11);
 gotoxy(48,3);
 cprintf("L");
 gotoxy(48,4);
 cprintf("L");
 gotoxy(48,5);
 cprintf("L");
 gotoxy(48,6);
 cprintf("L");
 gotoxy(48,7);
 cprintf("LLL");
  textcolor(11);
 gotoxy(52,3);
 cprintf("GGG");
 gotoxy(52,4);
 cprintf("G  ");
 gotoxy(52,5);
 cprintf("G  ");
 gotoxy(52,6);
 cprintf("GGG");
 gotoxy(52,7);
 cprintf("  G");
   textcolor(11);
 gotoxy(56,3);
 cprintf("OOO");
 gotoxy(56,4);
 cprintf("O O");
 gotoxy(56,5);
 cprintf("O O");
 gotoxy(56,6);
 cprintf("O O");
 gotoxy(56,7);
 cprintf("OOO");
  textcolor(11);
 gotoxy(60,3);
 cprintf("RRR");
 gotoxy(60,4);
 cprintf("R R");
 gotoxy(60,5);
 cprintf("RRR");
 gotoxy(60,6);
 cprintf("R R");
 gotoxy(60,7);
 cprintf("R  R");
  textcolor(11);
 gotoxy(65,3);
 cprintf("III");
 gotoxy(65,4);
 cprintf(" I ");
 gotoxy(65,5);
 cprintf(" I ");
 gotoxy(65,6);
 cprintf(" I ");
 gotoxy(65,7);
 cprintf("III");
  textcolor(11);
 gotoxy(69,3);
 cprintf("TTT");
 gotoxy(69,4);
 cprintf(" T ");
 gotoxy(69,5);
 cprintf(" T ");
 gotoxy(69,6);
 cprintf(" T ");
 gotoxy(69,7);
 cprintf(" T ");
  textcolor(11);
 gotoxy(73,3);
 cprintf("H H");
 gotoxy(73,4);
 cprintf("H H");
 gotoxy(73,5);
 cprintf("HHH");
 gotoxy(73,6);
 cprintf("H H");
 gotoxy(73,7);
 cprintf("H H");
   textcolor(11);
 gotoxy(77,3);
 cprintf("M M");
 gotoxy(77,4);
 cprintf("MMM");
 gotoxy(77,5);
 cprintf("M M");
 gotoxy(77,6);
 cprintf("M M");
 gotoxy(77,7);
 cprintf("M M");

 textcolor(9+128);
 for(i=2;i<80;i++)
 {
 gotoxy(i,9);
 delay(10);
 cprintf("*");
 }


  delay(800);
  textcolor(34);
 gotoxy(10,22);
 cprintf("DDDDD");
 gotoxy(10,23);
 cprintf("D   D");
 gotoxy(10,24);
 cprintf("D   D");
 gotoxy(10,25);
 cprintf("D   D");
 gotoxy(10,26);
 cprintf("D   D");
 gotoxy(10,27);
 cprintf("D   D");
 gotoxy(10,28);
 cprintf("D   D");
 gotoxy(10,29);
 cprintf("D   D");
 gotoxy(10,30);
 cprintf("D   D");
 gotoxy(10,31);
 cprintf("D   D");
 gotoxy(10,32);
 cprintf("DDDDD");
  textcolor(34);
 gotoxy(16,22);
 cprintf("IIIII");
 gotoxy(16,23);
 cprintf("  I  ");
 gotoxy(16,24);
 cprintf("  I  ");
 gotoxy(16,25);
 cprintf("  I  ");
 gotoxy(16,26);
 cprintf("  I  ");
 gotoxy(16,27);
 cprintf("  I  ");
 gotoxy(16,28);
 cprintf("  I  ");
 gotoxy(16,29);
 cprintf("  I  ");
 gotoxy(16,30);
 cprintf("  I  ");
 gotoxy(16,31);
 cprintf("  I  ");
 gotoxy(16,32);
 cprintf("IIIII");
  textcolor(34);
 gotoxy(22,22);
 cprintf("GGGGG");
 gotoxy(22,23);
 cprintf("G    ");
 gotoxy(22,24);
 cprintf("G    ");
 gotoxy(22,25);
 cprintf("G    ");
 gotoxy(22,26);
 cprintf("G    ");
 gotoxy(22,27);
 cprintf("G    ");
 gotoxy(22,28);
 cprintf("G    ");
 gotoxy(22,29);
 cprintf("G   G");
 gotoxy(22,30);
 cprintf("GGGGG");
 gotoxy(22,31);
 cprintf("    G");
 gotoxy(22,32);
 cprintf("    G");
  textcolor(34);
 gotoxy(28,22);
 cprintf("IIIII");
 gotoxy(28,23);
 cprintf("  I  ");
 gotoxy(28,24);
 cprintf("  I  ");
 gotoxy(28,25);
 cprintf("  I  ");
 gotoxy(28,26);
 cprintf("  I  ");
 gotoxy(28,27);
 cprintf("  I  ");
 gotoxy(28,28);
 cprintf("  I  ");
 gotoxy(28,29);
 cprintf("  I  ");
 gotoxy(28,30);
 cprintf("  I  ");
 gotoxy(28,31);
 cprintf("  I  ");
 gotoxy(28,32);
 cprintf("IIIII");
  textcolor(34);
 gotoxy(34,22);
 cprintf("TTTTT");
 gotoxy(34,23);
 cprintf("  T  ");
 gotoxy(34,24);
 cprintf("  T  ");
 gotoxy(34,25);
 cprintf("  T  ");
 gotoxy(34,26);
 cprintf("  T  ");
 gotoxy(34,27);
 cprintf("  T  ");
 gotoxy(34,28);
 cprintf("  T  ");
 gotoxy(34,29);
 cprintf("  T  ");
 gotoxy(34,30);
 cprintf("  T  ");
 gotoxy(34,31);
 cprintf("  T  ");
 gotoxy(34,32);
 cprintf("  T  ");

  delay(1000);
  textcolor(34);
 gotoxy(44,22);
 cprintf("SSSSS");
 gotoxy(44,23);
 cprintf("S");
 gotoxy(44,24);
 cprintf("S");
 gotoxy(44,25);
 cprintf("S");
 gotoxy(44,26);
 cprintf("S");
 gotoxy(44,27);
 cprintf("S");
 gotoxy(44,28);
 cprintf("SSSSS");
 gotoxy(44,29);
 cprintf("    S");
 gotoxy(44,30);
 cprintf("    S");
 gotoxy(44,31);
 cprintf("    S");
 gotoxy(44,32);
 cprintf("SSSSS");
   textcolor(34);
 gotoxy(50,22);
 cprintf("OOOOO");
 gotoxy(50,23);
 cprintf("O   O");
 gotoxy(50,24);
 cprintf("O   O");
 gotoxy(50,25);
 cprintf("O   O");
 gotoxy(50,26);
 cprintf("O   O");
 gotoxy(50,27);
 cprintf("O   O");
 gotoxy(50,28);
 cprintf("O   O");
 gotoxy(50,29);
 cprintf("O   O");
 gotoxy(50,30);
 cprintf("O   O");
 gotoxy(50,31);
 cprintf("O   O");
 gotoxy(50,32);
 cprintf("OOOOO");
   textcolor(34);
 gotoxy(56,22);
 cprintf("RRRRR");
 gotoxy(56,23);
 cprintf("R   R");
 gotoxy(56,24);
 cprintf("R   R");
 gotoxy(56,25);
 cprintf("R   R");
 gotoxy(56,26);
 cprintf("R   R");
 gotoxy(56,27);
 cprintf("R   R");
 gotoxy(56,28);
 cprintf("RRRR");
 gotoxy(56,29);
 cprintf("R  R");
 gotoxy(56,30);
 cprintf("R   R");
 gotoxy(56,31);
 cprintf("R    R");
 gotoxy(56,32);
 cprintf("R     R");
  textcolor(34);
 gotoxy(63,22);
 cprintf("TTTTT");
 gotoxy(63,23);
 cprintf("  T  ");
 gotoxy(63,24);
 cprintf("  T  ");
 gotoxy(63,25);
 cprintf("  T  ");
 gotoxy(63,26);
 cprintf("  T  ");
 gotoxy(63,27);
 cprintf("  T  ");
 gotoxy(63,28);
 cprintf("  T  ");
 gotoxy(63,29);
 cprintf("  T  ");
 gotoxy(63,30);
 cprintf("  T  ");
 gotoxy(63,31);
 cprintf("  T  ");
 gotoxy(63,32);
 cprintf("  T  ");


 textcolor(9+128);
 for(i=2;i<80;i++)
 {
 gotoxy(i,45);
 delay(10);
 cprintf("*");
 }
 textcolor(23);
 gotoxy(50,47);
 cprintf("PRESS ENTER TO SEE APPLICATION");
 getch();
 }

//Digit sort_abhi (Using if_else)
#include<stdio.h>
#include<conio.h>
void digit()
{
	int arr[20],i,n,j;
	int b1[20],b2[20],b3[20],b4[20],b5[20];
	int count1=0,count2=0,count3=0,count4=0,count5=0;
	clrscr();
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(arr[i]<10)
		{

			b1[count1]=arr[i];

			for(j=count1;j>0;j--)
			{
				if(b1[j-1]<=b1[j])
				{
					break;
				}
				else
				{
					int temp=b1[j-1];
					b1[j-1]=b1[j];
					b1[j]=temp;
				 }

			}
			count1++;
		}
		else if(arr[i]>9 && arr[i]<100)
		{
			b2[count2]=arr[i];

			for(j=count2;j>0;j--)
			{
				if(b2[j-1]<=b2[j])
				{
					break;
				}
				else
				{
					int temp=b2[j-1];
					b2[j-1]=b2[j];
					b2[j]=temp;
				 }

			}
			count2++;
		}
		else if(arr[i]>99 && arr[i]<1000)
		{
			b3[count3]=arr[i];

			for(j=count3;j>0;j--)
			{
				if(b3[j-1]<=b3[j])
				{
					break;
				}
				else
				{
					int temp=b3[j-1];
					b3[j-1]=b3[j];
					b3[j]=temp;
				 }

			}
			count3++;
		}
		else if(arr[i]>999 && arr[i]<10000)
		{
			b4[count4]=arr[i];

			for(j=count4;j>0;j--)
			{
				if(b4[j-1]<=b4[j])
				{
					break;
				}
				else
				{
					int temp=b4[j-1];
					b4[j-1]=b4[j];
					b4[j]=temp;
				 }

			}
			count4++;
		}
		else if(arr[i]>9999 && arr[i]<100000)
		{
			b5[count2]=arr[i];

			for(j=count5;j>0;j--)
			{
				if(b5[j-1]<=b5[j])
				{
					break;
				}
				else
				{
					int temp=b5[j-1];
					b5[j-1]=b5[j];
					b5[j]=temp;
				 }

			}
			count5++;
		}


	}
	printf("output\t");
	for(i=0;i<count1;i++)
		printf("%d ",b1[i]);
	for(i=0;i<count2;i++)
		printf("%d ",b2[i]);
	for(i=0;i<count3;i++)
		printf("%d ",b3[i]);
	for(i=0;i<count4;i++)
		printf("%d ",b4[i]);
	for(i=0;i<count5;i++)
		printf("%d ",b5[i]);
getch();
}


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

//Thank You

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


  textcolor(13);
 gotoxy(10,22);
 cprintf("TTTTT");
 gotoxy(10,23);
 cprintf("  T  ");
 gotoxy(10,24);
 cprintf("  T  ");
 gotoxy(10,25);
 cprintf("  T  ");
 gotoxy(10,26);
 cprintf("  T  ");
 gotoxy(10,27);
 cprintf("  T  ");
 gotoxy(10,28);
 cprintf("  T  ");
 gotoxy(10,29);
 cprintf("  T  ");
 gotoxy(10,30);
 cprintf("  T  ");
 gotoxy(10,31);
 cprintf("  T  ");
 gotoxy(10,32);
 cprintf("  T  ");

 gotoxy(16,22);
 cprintf("H   H");
 gotoxy(16,23);
 cprintf("H   H");
 gotoxy(16,24);
 cprintf("H   H");
 gotoxy(16,25);
 cprintf("H   H");
 gotoxy(16,26);
 cprintf("H   H");
 gotoxy(16,27);
 cprintf("HHHHH");
 gotoxy(16,28);
 cprintf("H   H");
 gotoxy(16,29);
 cprintf("H   H");
 gotoxy(16,30);
 cprintf("H   H");
 gotoxy(16,31);
 cprintf("H   H");
 gotoxy(16,32);
 cprintf("H   H");

 gotoxy(22,22);
 cprintf("  A  ");
 gotoxy(22,23);
 cprintf(" A A ");
 gotoxy(22,24);
 cprintf("A   A");
 gotoxy(22,25);
 cprintf("AAAAA");
 gotoxy(22,26);
 cprintf("A   A");
 gotoxy(22,27);
 cprintf("A   A");
 gotoxy(22,28);
 cprintf("A   A");
 gotoxy(22,29);
 cprintf("A   A");
 gotoxy(22,30);
 cprintf("A   A");
 gotoxy(22,31);
 cprintf("A   A");
 gotoxy(22,32);
 cprintf("A   A");

 gotoxy(28,22);
 cprintf("N   N");
 gotoxy(28,23);
 cprintf("N   N");
 gotoxy(28,24);
 cprintf("NN  N");
 gotoxy(28,25);
 cprintf("NN  N");
 gotoxy(28,26);
 cprintf("N N N");
 gotoxy(28,27);
 cprintf("N N N");
 gotoxy(28,28);
 cprintf("N N N");
 gotoxy(28,29);
 cprintf("N  NN");
 gotoxy(28,30);
 cprintf("N  NN");
 gotoxy(28,31);
 cprintf("N   N");
 gotoxy(28,32);
 cprintf("N   N");

 gotoxy(34,22);
 cprintf("K     K");
 gotoxy(34,23);
 cprintf("K    K");
 gotoxy(34,24);
 cprintf("K   K");
 gotoxy(34,25);
 cprintf("K  K");
 gotoxy(34,26);
 cprintf("K K");
 gotoxy(34,27);
 cprintf("KK");
 gotoxy(34,28);
 cprintf("K K");
 gotoxy(34,29);
 cprintf("K  K");
 gotoxy(34,30);
 cprintf("K   K");
 gotoxy(34,31);
 cprintf("K    K");
 gotoxy(34,32);
 cprintf("K     K");


 gotoxy(44,22);
 cprintf("Y   Y");
 gotoxy(44,23);
 cprintf("Y   Y");
 gotoxy(44,24);
 cprintf("Y   Y");
 gotoxy(44,25);
 cprintf("Y   Y");
 gotoxy(44,26);
 cprintf("Y   Y");
 gotoxy(44,27);
 cprintf(" YYY ");
 gotoxy(44,28);
 cprintf("  Y  ");
 gotoxy(44,29);
 cprintf("  Y  ");
 gotoxy(44,30);
 cprintf("  Y  ");
 gotoxy(44,31);
 cprintf("  Y  ");
 gotoxy(44,32);
 cprintf("  Y  ");

 gotoxy(50,22);
 cprintf("OOOOO");
 gotoxy(50,23);
 cprintf("O   O");
 gotoxy(50,24);
 cprintf("O   O");
 gotoxy(50,25);
 cprintf("O   O");
 gotoxy(50,26);
 cprintf("O   O");
 gotoxy(50,27);
 cprintf("O   O");
 gotoxy(50,28);
 cprintf("O   O");
 gotoxy(50,29);
 cprintf("O   O");
 gotoxy(50,30);
 cprintf("O   O");
 gotoxy(50,31);
 cprintf("O   O");
 gotoxy(50,32);
 cprintf("OOOOO");

 gotoxy(56,22);
 cprintf("U   U");
 gotoxy(56,23);
 cprintf("U   U");
 gotoxy(56,24);
 cprintf("U   U");
 gotoxy(56,25);
 cprintf("U   U");
 gotoxy(56,26);
 cprintf("U   U");
 gotoxy(56,27);
 cprintf("U   U");
 gotoxy(56,28);
 cprintf("U   U");
 gotoxy(56,29);
 cprintf("U   U");
 gotoxy(56,30);
 cprintf("U   U");
 gotoxy(56,31);
 cprintf("U   U");
 gotoxy(56,32);
 cprintf("UUUUU");

getch();
}
}