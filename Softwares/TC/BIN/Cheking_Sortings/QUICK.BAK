//Quick Sort

#include "stdio.h"
#include<conio.h>
int split ( int*,int,int) ;
void quicksort (int*,int,int) ;

void main( )
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