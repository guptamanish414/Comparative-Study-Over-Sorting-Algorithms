//Welcome page 3
#include<stdio.h>
#include<conio.h>
#include<dos.h>
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

 delay(0);
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

  delay(50);
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

  delay(100);
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
  delay(150);
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
 gotoxy(i,8);
 delay(10);
 cprintf("_");
 }

  delay(200);
  textcolor(21);
 gotoxy(3,10);
 cprintf("CCC");
 gotoxy(3,11);
 cprintf("C  ");
 gotoxy(3,12);
 cprintf("C  ");
 gotoxy(3,13);
 cprintf("C  ");
 gotoxy(3,14);
 cprintf("CCC");
//  textcolor(21);
 gotoxy(7,10);
 cprintf("OOO");
 gotoxy(7,11);
 cprintf("O O");
 gotoxy(7,12);
 cprintf("O O");
 gotoxy(7,13);
 cprintf("O O");
 gotoxy(7,14);
 cprintf("OOO");
//  textcolor(21);
 gotoxy(11,10);
 cprintf("M M");
 gotoxy(11,11);
 cprintf("MMM");
 gotoxy(11,12);
 cprintf("M M");
 gotoxy(11,13);
 cprintf("M M");
 gotoxy(11,14);
 cprintf("M M");
//  textcolor(21);
 gotoxy(15,10);
 cprintf("PPP");
 gotoxy(15,11);
 cprintf("P P");
 gotoxy(15,12);
 cprintf("PP ");
 gotoxy(15,13);
 cprintf("P  ");
 gotoxy(15,14);
 cprintf("P  ");
//  textcolor(21);
 gotoxy(19,10);
 cprintf(" A ");
 gotoxy(19,11);
 cprintf("A A");
 gotoxy(19,12);
 cprintf("AAA");
 gotoxy(19,13);
 cprintf("A A");
 gotoxy(19,14);
 cprintf("A A");
//  textcolor(21);
 gotoxy(23,10);
 cprintf("RRR");
 gotoxy(23,11);
 cprintf("R R");
 gotoxy(23,12);
 cprintf("RRR");
 gotoxy(23,13);
 cprintf("R R");
 gotoxy(23,14);
 cprintf("R  R");
//  textcolor(21);
 gotoxy(28,10);
 cprintf(" A ");
 gotoxy(28,11);
 cprintf("A A");
 gotoxy(28,12);
 cprintf("AAA");
 gotoxy(28,13);
 cprintf("A A");
 gotoxy(28,14);
 cprintf("A A");
//  textcolor(21);
 gotoxy(32,10);
 cprintf("TTT");
 gotoxy(32,11);
 cprintf(" T ");
 gotoxy(32,12);
 cprintf(" T ");
 gotoxy(32,13);
 cprintf(" T ");
 gotoxy(32,14);
 cprintf(" T ");
//  textcolor(21);
 gotoxy(36,10);
 cprintf("III");
 gotoxy(36,11);
 cprintf(" I ");
 gotoxy(36,12);
 cprintf(" I ");
 gotoxy(36,13);
 cprintf(" I ");
 gotoxy(36,14);
 cprintf("III");
//  textcolor(21);
 gotoxy(40,10);
 cprintf("V V");
 gotoxy(40,11);
 cprintf("V V");
 gotoxy(40,12);
 cprintf("V V");
 gotoxy(40,13);
 cprintf("V V");
 gotoxy(40,14);
 cprintf(" V ");
//  textcolor(21);
 gotoxy(44,10);
 cprintf("EEE");
 gotoxy(44,11);
 cprintf("E  ");
 gotoxy(44,12);
 cprintf("EEE");
 gotoxy(44,13);
 cprintf("E  ");
 gotoxy(44,14);
 cprintf("EEE");

   delay(250);
//  textcolor(22);
 gotoxy(49,10);
 cprintf("SSS");
 gotoxy(49,11);
 cprintf("S  ");
 gotoxy(49,12);
 cprintf(" S ");
 gotoxy(49,13);
 cprintf("  S");
 gotoxy(49,14);
 cprintf("SSS");
//   textcolor(22);
 gotoxy(53,10);
 cprintf("TTT");
 gotoxy(53,11);
 cprintf(" T ");
 gotoxy(53,12);
 cprintf(" T ");
 gotoxy(53,13);
 cprintf(" T ");
 gotoxy(53,14);
 cprintf(" T ");
//   textcolor(22);
 gotoxy(57,10);
 cprintf("U U");
 gotoxy(57,11);
 cprintf("U U");
 gotoxy(57,12);
 cprintf("U U");
 gotoxy(57,13);
 cprintf("U U");
 gotoxy(57,14);
 cprintf("UUU");
//   textcolor(22);
 gotoxy(61,10);
 cprintf("DD");
 gotoxy(61,11);
 cprintf("D D");
 gotoxy(61,12);
 cprintf("D D");
 gotoxy(61,13);
 cprintf("D D");
 gotoxy(61,14);
 cprintf("DD");
//   textcolor(22);
 gotoxy(65,10);
 cprintf("Y Y");
 gotoxy(65,11);
 cprintf("Y Y");
 gotoxy(65,12);
 cprintf("Y Y");
 gotoxy(65,13);
 cprintf(" Y ");
 gotoxy(65,14);
 cprintf(" Y ");

   delay(300);
//   textcolor(23);
 gotoxy(69,10);
 cprintf(" A ");
 gotoxy(69,11);
 cprintf("AAA");
 gotoxy(69,12);
 cprintf("A A");
 gotoxy(69,13);
 cprintf("A A");
 gotoxy(69,14);
 cprintf("A A");
//    textcolor(23);
 gotoxy(73,10);
 cprintf("N N");
 gotoxy(73,11);
 cprintf("NNN");
 gotoxy(73,12);
 cprintf("NNN");
 gotoxy(73,13);
 cprintf("NNN");
 gotoxy(73,14);
 cprintf("N N");
//   textcolor(23);
 gotoxy(77,10);
 cprintf("DD");
 gotoxy(77,11);
 cprintf("D D");
 gotoxy(77,12);
 cprintf("D D");
 gotoxy(77,13);
 cprintf("D D");
 gotoxy(77,14);
 cprintf("DD");

   delay(350);
   textcolor(13);
 gotoxy(7,16);
 cprintf("III");
 gotoxy(7,17);
 cprintf(" I ");
 gotoxy(7,18);
 cprintf(" I ");
 gotoxy(7,19);
 cprintf(" I ");
 gotoxy(7,20);
 cprintf("III");
//   textcolor(25);
 gotoxy(11,16);
 cprintf("M M");
 gotoxy(11,17);
 cprintf("MMM");
 gotoxy(11,18);
 cprintf("M M");
 gotoxy(11,19);
 cprintf("M M");
 gotoxy(11,20);
 cprintf("M M");
//    textcolor(25);
 gotoxy(15,16);
 cprintf("PPP");
 gotoxy(15,17);
 cprintf("P P");
 gotoxy(15,18);
 cprintf("PP");
 gotoxy(15,19);
 cprintf("P");
 gotoxy(15,20);
 cprintf("P");
//    textcolor(25);
 gotoxy(19,16);
 cprintf("L  ");
 gotoxy(19,17);
 cprintf("L  ");
 gotoxy(19,18);
 cprintf("L  ");
 gotoxy(19,19);
 cprintf("L  ");
 gotoxy(19,20);
 cprintf("LLL");
//    textcolor(25);
 gotoxy(23,16);
 cprintf("EEE");
 gotoxy(23,17);
 cprintf("E  ");
 gotoxy(23,18);
 cprintf("EEE");
 gotoxy(23,19);
 cprintf("E  ");
 gotoxy(23,20);
 cprintf("EEE");
//   textcolor(25);
 gotoxy(27,16);
 cprintf("M M");
 gotoxy(27,17);
 cprintf("MMM");
 gotoxy(27,18);
 cprintf("M M");
 gotoxy(27,19);
 cprintf("M M");
 gotoxy(27,20);
 cprintf("M M");
//   textcolor(25);
 gotoxy(31,16);
 cprintf("EEE");
 gotoxy(31,17);
 cprintf("E  ");
 gotoxy(31,18);
 cprintf("EEE");
 gotoxy(31,19);
 cprintf("E  ");
 gotoxy(31,20);
 cprintf("EEE");
//    textcolor(25);
 gotoxy(35,16);
 cprintf("N N");
 gotoxy(35,17);
 cprintf("NNN");
 gotoxy(35,18);
 cprintf("NNN");
 gotoxy(35,19);
 cprintf("NNN");
 gotoxy(35,20);
 cprintf("N N");
//    textcolor(25);
 gotoxy(39,16);
 cprintf("TTT");
 gotoxy(39,17);
 cprintf(" T ");
 gotoxy(39,18);
 cprintf(" T ");
 gotoxy(39,19);
 cprintf(" T ");
 gotoxy(39,20);
 cprintf(" T ");
//    textcolor(25);
 gotoxy(43,16);
 cprintf(" A ");
 gotoxy(43,17);
 cprintf("A A");
 gotoxy(43,18);
 cprintf("AAA");
 gotoxy(43,19);
 cprintf("A A");
 gotoxy(43,20);
 cprintf("A A");
//   textcolor(25);
 gotoxy(47,16);
 cprintf("TTT");
 gotoxy(47,17);
 cprintf(" T ");
 gotoxy(47,18);
 cprintf(" T ");
 gotoxy(47,19);
 cprintf(" T ");
 gotoxy(47,20);
 cprintf(" T ");
  // textcolor(25);
 gotoxy(51,16);
 cprintf("III");
 gotoxy(51,17);
 cprintf(" I ");
 gotoxy(51,18);
 cprintf(" I ");
 gotoxy(51,19);
 cprintf(" I ");
 gotoxy(51,20);
 cprintf("III");
 //  textcolor(25);
 gotoxy(55,16);
 cprintf("OOO");
 gotoxy(55,17);
 cprintf("O O");
 gotoxy(55,18);
 cprintf("O O");
 gotoxy(55,19);
 cprintf("O O");
 gotoxy(55,20);
 cprintf("OOO");
//   textcolor(25);
 gotoxy(59,16);
 cprintf("N N");
 gotoxy(59,17);
 cprintf("NNN");
 gotoxy(59,18);
 cprintf("NNN");
 gotoxy(59,19);
 cprintf("NNN");
 gotoxy(59,20);
 cprintf("N N");

   delay(400);
//   textcolor(25);
 gotoxy(64,16);
 cprintf("OOO");
 gotoxy(64,17);
 cprintf("O O");
 gotoxy(64,18);
 cprintf("O O");
 gotoxy(64,19);
 cprintf("O O");
 gotoxy(64,20);
 cprintf("OOO");
//   textcolor(25);
 gotoxy(68,16);
 cprintf("FFF");
 gotoxy(68,17);
 cprintf("F  ");
 gotoxy(68,18);
 cprintf("FF ");
 gotoxy(68,19);
 cprintf("F  ");
 gotoxy(68,20);
 cprintf("F  ");

    delay(450);
    textcolor(21);
 gotoxy(2,23);
 cprintf("DD");
 gotoxy(2,24);
 cprintf("D D");
 gotoxy(2,25);
 cprintf("D D");
 gotoxy(2,26);
 cprintf("D D");
 gotoxy(2,27);
 cprintf("DD");
//   textcolor(26);
 gotoxy(5,23);
 cprintf("III");
 gotoxy(5,24);
 cprintf(" I ");
 gotoxy(5,25);
 cprintf(" I ");
 gotoxy(5,26);
 cprintf(" I ");
 gotoxy(5,27);
 cprintf("III");
//  textcolor(26);
 gotoxy(8,23);
 cprintf("FFF");
 gotoxy(8,24);
 cprintf("F  ");
 gotoxy(8,25);
 cprintf("FF ");
 gotoxy(8,26);
 cprintf("F  ");
 gotoxy(8,27);
 cprintf("F  ");
//  textcolor(26);
 gotoxy(11,23);
 cprintf("FFF");
 gotoxy(11,24);
 cprintf("F  ");
 gotoxy(11,25);
 cprintf("FF ");
 gotoxy(11,26);
 cprintf("F  ");
 gotoxy(11,27);
 cprintf("F  ");
 //  textcolor(26);
 gotoxy(15,23);
 cprintf("EEE");
 gotoxy(15,24);
 cprintf("E  ");
 gotoxy(15,25);
 cprintf("EEE");
 gotoxy(15,26);
 cprintf("E  ");
 gotoxy(15,27);
 cprintf("EEE");
//    textcolor(26);
 gotoxy(19,23);
 cprintf("RRR");
 gotoxy(19,24);
 cprintf("R R");
 gotoxy(19,25);
 cprintf("RRR");
 gotoxy(19,26);
 cprintf("R R");
 gotoxy(19,27);
 cprintf("R  R");
//   textcolor(26);
 gotoxy(23,23);
 cprintf("EEE");
 gotoxy(23,24);
 cprintf("E  ");
 gotoxy(23,25);
 cprintf("EEE");
 gotoxy(23,26);
 cprintf("E  ");
 gotoxy(23,27);
 cprintf("EEE");
 //  textcolor(26);
 gotoxy(27,23);
 cprintf("N N");
 gotoxy(27,24);
 cprintf("NNN");
 gotoxy(27,25);
 cprintf("NNN");
 gotoxy(27,26);
 cprintf("NNN");
 gotoxy(27,27);
 cprintf("N N");
 //  textcolor(26);
 gotoxy(31,23);
 cprintf("TTT");
 gotoxy(31,24);
 cprintf(" T ");
 gotoxy(31,25);
 cprintf(" T ");
 gotoxy(31,26);
 cprintf(" T ");
 gotoxy(31,27);
 cprintf(" T ");

    delay(500);
 // textcolor(26);
 gotoxy(35,23);
 cprintf("CCC");
 gotoxy(35,24);
 cprintf("C");
 gotoxy(35,25);
 cprintf("C");
 gotoxy(35,26);
 cprintf("C");
 gotoxy(35,27);
 cprintf("CCC");
 //  textcolor(26);
 gotoxy(39,23);
 cprintf("OOO");
 gotoxy(39,24);
 cprintf("O O");
 gotoxy(39,25);
 cprintf("O O");
 gotoxy(39,26);
 cprintf("O O");
 gotoxy(39,27);
 cprintf("OOO");
 //  textcolor(26);
 gotoxy(43,23);
 cprintf("N N");
 gotoxy(43,24);
 cprintf("NNN");
 gotoxy(43,25);
 cprintf("NNN");
 gotoxy(43,26);
 cprintf("NNN");
 gotoxy(43,27);
 cprintf("N N");
 //  textcolor(26);
 gotoxy(47,23);
 cprintf("V V");
 gotoxy(47,24);
 cprintf("V V");
 gotoxy(47,25);
 cprintf("V V");
 gotoxy(47,26);
 cprintf("V V");
 gotoxy(47,27);
 cprintf(" V ");
//   textcolor(26);
 gotoxy(51,23);
 cprintf("EEE");
 gotoxy(51,24);
 cprintf("E  ");
 gotoxy(51,25);
 cprintf("EEE");
 gotoxy(51,26);
 cprintf("E  ");
 gotoxy(51,27);
 cprintf("EEE");
//   textcolor(26);
 gotoxy(55,23);
 cprintf("N N");
 gotoxy(55,24);
 cprintf("NNN");
 gotoxy(55,25);
 cprintf("NNN");
 gotoxy(55,26);
 cprintf("NNN");
 gotoxy(55,27);
 cprintf("N N");
//    textcolor(26);
 gotoxy(59,23);
 cprintf("TTT");
 gotoxy(59,24);
 cprintf(" T ");
 gotoxy(59,25);
 cprintf(" T ");
 gotoxy(59,26);
 cprintf(" T ");
 gotoxy(59,27);
 cprintf(" T ");
 //   textcolor(26);
 gotoxy(62,23);
 cprintf("III");
 gotoxy(62,24);
 cprintf(" I ");
 gotoxy(62,25);
 cprintf(" I ");
 gotoxy(62,26);
 cprintf(" I ");
 gotoxy(62,27);
 cprintf("III");
 //  textcolor(26);
 gotoxy(65,23);
 cprintf("OOO");
 gotoxy(65,24);
 cprintf("O O");
 gotoxy(65,25);
 cprintf("O O");
 gotoxy(65,26);
 cprintf("O O");
 gotoxy(65,27);
 cprintf("OOO");
  //  textcolor(26);
 gotoxy(69,23);
 cprintf("N N");
 gotoxy(69,24);
 cprintf("NNN");
 gotoxy(69,25);
 cprintf("NNN");
 gotoxy(69,26);
 cprintf("NNN");
 gotoxy(69,27);
 cprintf("N N");
  //   textcolor(26);
 gotoxy(73,23);
 cprintf(" A ");
 gotoxy(73,24);
 cprintf("A A");
 gotoxy(73,25);
 cprintf("AAA");
 gotoxy(73,26);
 cprintf("A A");
 gotoxy(73,27);
 cprintf("A A");
 //   textcolor(26);
 gotoxy(77,23);
 cprintf("L  ");
 gotoxy(77,24);
 cprintf("L ");
 gotoxy(77,25);
 cprintf("L ");
 gotoxy(77,26);
 cprintf("L  ");
 gotoxy(77,27);
 cprintf("LLL");

   delay(550);
   textcolor(13);
 gotoxy(11,30);
 cprintf(" A ");
 gotoxy(11,31);
 cprintf("A A");
 gotoxy(11,32);
 cprintf("AAA");
 gotoxy(11,33);
 cprintf("A A");
 gotoxy(11,34);
 cprintf("A A");
//  textcolor(28);
 gotoxy(15,30);
 cprintf("L");
 gotoxy(15,31);
 cprintf("L");
 gotoxy(15,32);
 cprintf("L");
 gotoxy(15,33);
 cprintf("L");
 gotoxy(15,34);
 cprintf("LLL");
//  textcolor(28);
 gotoxy(19,30);
 cprintf("GGG");
 gotoxy(19,31);
 cprintf("G  ");
 gotoxy(19,32);
 cprintf("G G");
 gotoxy(19,33);
 cprintf("GGG");
 gotoxy(19,34);
 cprintf("  G");
//  textcolor(28);
 gotoxy(23,30);
 cprintf("OOO");
 gotoxy(23,31);
 cprintf("O O");
 gotoxy(23,32);
 cprintf("O O");
 gotoxy(23,33);
 cprintf("O O");
 gotoxy(23,34);
 cprintf("OOO");
 // textcolor(28);
 gotoxy(27,30);
 cprintf("RRR");
 gotoxy(27,31);
 cprintf("R R");
 gotoxy(27,32);
 cprintf("RRR");
 gotoxy(27,33);
 cprintf("R R");
 gotoxy(27,34);
 cprintf("R  R");
 // textcolor(28);
 gotoxy(31,30);
 cprintf("III");
 gotoxy(31,31);
 cprintf(" I ");
 gotoxy(31,32);
 cprintf(" I ");
 gotoxy(31,33);
 cprintf(" I ");
 gotoxy(31,34);
 cprintf("III");
 // textcolor(28);
 gotoxy(35,30);
 cprintf("TTT");
 gotoxy(35,31);
 cprintf(" T ");
 gotoxy(35,32);
 cprintf(" T ");
 gotoxy(35,33);
 cprintf(" T ");
 gotoxy(35,34);
 cprintf(" T ");
 // textcolor(28);
 gotoxy(39,30);
 cprintf("H H");
 gotoxy(39,31);
 cprintf("H H");
 gotoxy(39,32);
 cprintf("HHH");
 gotoxy(39,33);
 cprintf("H H");
 gotoxy(39,34);
 cprintf("H H");
//  textcolor(28);
 gotoxy(43,30);
 cprintf("M M");
 gotoxy(43,31);
 cprintf("MMM");
 gotoxy(43,32);
 cprintf("M M");
 gotoxy(43,33);
 cprintf("M M");
 gotoxy(43,34);
 cprintf("M M");

   delay(600);
//   textcolor(13);
 gotoxy(48,30);
 cprintf(" A ");
 gotoxy(48,31);
 cprintf("AAA");
 gotoxy(48,32);
 cprintf("A A");
 gotoxy(48,33);
 cprintf("A A");
 gotoxy(48,34);
 cprintf("A A");
 //   textcolor(23);
 gotoxy(52,30);
 cprintf("N N");
 gotoxy(52,31);
 cprintf("NNN");
 gotoxy(52,32);
 cprintf("NNN");
 gotoxy(52,33);
 cprintf("NNN");
 gotoxy(52,34);
 cprintf("N N");
//   textcolor(23);
 gotoxy(56,30);
 cprintf("DD");
 gotoxy(56,31);
 cprintf("D D");
 gotoxy(56,32);
 cprintf("D D");
 gotoxy(56,33);
 cprintf("D D");
 gotoxy(56,34);
 cprintf("DD");

   delay(700);
   textcolor(21);
 gotoxy(11,36);
 cprintf("III");
 gotoxy(11,37);
 cprintf(" I ");
 gotoxy(11,38);
 cprintf(" I ");
 gotoxy(11,39);
 cprintf(" I ");
 gotoxy(11,40);
 cprintf("III");
 // textcolor(29);
 gotoxy(15,36);
 cprintf("N N");
 gotoxy(15,37);
 cprintf("NNN");
 gotoxy(15,38);
 cprintf("NNN");
 gotoxy(15,39);
 cprintf("NNN");
 gotoxy(15,40);
 cprintf("N N");
 //    textcolor(29);
 gotoxy(19,36);
 cprintf("OOO");
 gotoxy(19,37);
 cprintf("O O");
 gotoxy(19,38);
 cprintf("O O");
 gotoxy(19,39);
 cprintf("O O");
 gotoxy(19,40);
 cprintf("OOO");
 //    textcolor(29);
 gotoxy(23,36);
 cprintf("V V");
 gotoxy(23,37);
 cprintf("V V");
 gotoxy(23,38);
 cprintf("V V");
 gotoxy(23,39);
 cprintf("V V");
 gotoxy(23,40);
 cprintf(" V ");
 //    textcolor(29);
 gotoxy(27,36);
 cprintf(" A ");
 gotoxy(27,37);
 cprintf("A A");
 gotoxy(27,38);
 cprintf("AAA");
 gotoxy(27,39);
 cprintf("A A");
 gotoxy(27,40);
 cprintf("A A");
 //      textcolor(29);
 gotoxy(31,36);
 cprintf("TTT");
 gotoxy(31,37);
 cprintf(" T ");
 gotoxy(31,38);
 cprintf(" T ");
 gotoxy(31,39);
 cprintf(" T ");
 gotoxy(31,40);
 cprintf(" T ");
 //     textcolor(29);
 gotoxy(35,36);
 cprintf("III");
 gotoxy(35,37);
 cprintf(" I ");
 gotoxy(35,38);
 cprintf(" I ");
 gotoxy(35,39);
 cprintf(" I ");
 gotoxy(35,40);
 cprintf("III");
 //      textcolor(29);
 gotoxy(39,36);
 cprintf("OOO");
 gotoxy(39,37);
 cprintf("O O");
 gotoxy(39,38);
 cprintf("O O");
 gotoxy(39,39);
 cprintf("O O");
 gotoxy(39,40);
 cprintf("OOO");
 //  textcolor(29);
 gotoxy(43,36);
 cprintf("N N");
 gotoxy(43,37);
 cprintf("NNN");
 gotoxy(43,38);
 cprintf("NNN");
 gotoxy(43,39);
 cprintf("NNN");
 gotoxy(43,40);
 cprintf("N N");

    delay(750);
 //   textcolor(30);
 gotoxy(52,36);
 cprintf("OOO");
 gotoxy(52,37);
 cprintf("O O");
 gotoxy(52,38);
 cprintf("O O");
 gotoxy(52,39);
 cprintf("O O");
 gotoxy(52,40);
 cprintf("OOO");
 //   textcolor(30);
 gotoxy(56,36);
 cprintf("FFF");
 gotoxy(56,37);
 cprintf("F  ");
 gotoxy(56,38);
 cprintf("FF ");
 gotoxy(56,39);
 cprintf("F  ");
 gotoxy(56,40);
 cprintf("F  ");

  delay(800);
  textcolor(13);
 gotoxy(6,42);
 cprintf("SSS");
 gotoxy(6,43);
 cprintf("S");
 gotoxy(6,44);
 cprintf("SSS");
 gotoxy(6,45);
 cprintf("  S");
 gotoxy(6,46);
 cprintf("SSS");
//   textcolor(34);
 gotoxy(10,42);
 cprintf("OOO");
 gotoxy(10,43);
 cprintf("O O");
 gotoxy(10,44);
 cprintf("O O");
 gotoxy(10,45);
 cprintf("O O");
 gotoxy(10,46);
 cprintf("OOO");
//  textcolor(34);
 gotoxy(14,42);
 cprintf("RRR");
 gotoxy(14,43);
 cprintf("R R");
 gotoxy(14,44);
 cprintf("RRR");
 gotoxy(14,45);
 cprintf("R R");
 gotoxy(14,46);
 cprintf("R  R");
//  textcolor(34);
 gotoxy(20,42);
 cprintf("TTT");
 gotoxy(20,43);
 cprintf(" T ");
 gotoxy(20,44);
 cprintf(" T ");
 gotoxy(20,45);
 cprintf(" T ");
 gotoxy(20,46);
 cprintf(" T ");
//  textcolor(34);
 gotoxy(24,42);
 cprintf("III");
 gotoxy(24,43);
 cprintf(" I ");
 gotoxy(24,44);
 cprintf(" I ");
 gotoxy(24,45);
 cprintf(" I ");
 gotoxy(24,46);
 cprintf("III");
 // textcolor(34);
 gotoxy(28,42);
 cprintf("N N");
 gotoxy(28,43);
 cprintf("NNN");
 gotoxy(28,44);
 cprintf("NNN");
 gotoxy(28,45);
 cprintf("NNN");
 gotoxy(28,46);
 cprintf("N N");
 // textcolor(34);
 gotoxy(32,42);
 cprintf("GGG");
 gotoxy(32,43);
 cprintf("G  ");
 gotoxy(32,44);
 cprintf("G G");
 gotoxy(32,45);
 cprintf("GGG");
 gotoxy(32,46);
 cprintf("  G");

  delay(850);
//  textcolor(22);
 gotoxy(39,42);
 cprintf(" A ");
 gotoxy(39,43);
 cprintf("A A");
 gotoxy(39,44);
 cprintf("AAA");
 gotoxy(39,45);
 cprintf("A A");
 gotoxy(39,46);
 cprintf("A A");
//   textcolor(22);
 gotoxy(43,42);
 cprintf("L");
 gotoxy(43,43);
 cprintf("L");
 gotoxy(43,44);
 cprintf("L");
 gotoxy(43,45);
 cprintf("L");
 gotoxy(43,46);
 cprintf("LLL");
 //  textcolor(22);
 gotoxy(47,42);
 cprintf("GGG");
 gotoxy(47,43);
 cprintf("G  ");
 gotoxy(47,44);
 cprintf("G G");
 gotoxy(47,45);
 cprintf("GGG");
 gotoxy(47,46);
 cprintf("  G");
//  textcolor(22);
 gotoxy(51,42);
 cprintf("OOO");
 gotoxy(51,43);
 cprintf("O O");
 gotoxy(51,44);
 cprintf("O O");
 gotoxy(51,45);
 cprintf("O O");
 gotoxy(51,46);
 cprintf("OOO");
//  textcolor(22);
 gotoxy(55,42);
 cprintf("RRR");
 gotoxy(55,43);
 cprintf("R R");
 gotoxy(55,44);
 cprintf("RRR");
 gotoxy(55,45);
 cprintf("R R");
 gotoxy(55,46);
 cprintf("R  R");
  // textcolor(22);
 gotoxy(59,42);
 cprintf("III");
 gotoxy(59,43);
 cprintf(" I ");
 gotoxy(59,44);
 cprintf(" I ");
 gotoxy(59,45);
 cprintf(" I ");
 gotoxy(59,46);
 cprintf("III");
  // textcolor(22);
 gotoxy(63,42);
 cprintf("TTT");
 gotoxy(63,43);
 cprintf(" T ");
 gotoxy(63,44);
 cprintf(" T ");
 gotoxy(63,45);
 cprintf(" T ");
 gotoxy(63,46);
 cprintf(" T ");
  // textcolor(22);
 gotoxy(67,42);
 cprintf("H H");
 gotoxy(67,43);
 cprintf("H H");
 gotoxy(67,44);
 cprintf("HHH");
 gotoxy(67,45);
 cprintf("H H");
 gotoxy(67,46);
 cprintf("H H");
//   textcolor(22);
 gotoxy(71,42);
 cprintf("M M");
 gotoxy(71,43);
 cprintf("MMM");
 gotoxy(71,44);
 cprintf("M M");
 gotoxy(71,45);
 cprintf("M M");
 gotoxy(71,46);
 cprintf("M M");

 getch();
}