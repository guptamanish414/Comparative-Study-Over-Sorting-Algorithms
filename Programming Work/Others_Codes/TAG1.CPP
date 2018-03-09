#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int radius = 100;
   int x,y,color;
   char msg[80];
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "..\\bgi");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
  // setcolor(getmaxcolor());
   /* maximum color index supported */
int maxcolor = getmaxcolor();

/* for centering text messages */
settextjustify(CENTER_TEXT, CENTER_TEXT);
x = getmaxx() / 2;
y = getmaxy() / 2;
  /* draw the circle */
  setcolor(10);
   circle(midx, midy, radius);

    //clean up;
  // getch();
  /* loop through the available colors */
for (color=1; color<=maxcolor; color++)
{
   /* clear the screen */
   //cleardevice();
   delay(500);
   /* select a new background color */
   setcolor(color);
   /* output a messsage */
   sprintf(msg, "Color");
   outtextxy(x, y, msg);
   }
   getch();
   closegraph();
   return 0;
}

