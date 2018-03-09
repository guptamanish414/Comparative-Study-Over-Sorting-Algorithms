//Selection sort

#include<stdio.h>

void main()
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

