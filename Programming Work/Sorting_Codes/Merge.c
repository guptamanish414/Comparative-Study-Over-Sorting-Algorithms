//Mearge sort

#include <stdio.h>
#include <stdlib.h>
 
#define MAXARRAY 100
 
void mergesort(int a[], int low, int high);

void main() {
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
