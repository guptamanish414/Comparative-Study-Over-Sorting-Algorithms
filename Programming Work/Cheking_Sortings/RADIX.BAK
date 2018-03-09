//Radix sort using C.

#include <stdio.h>
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


void main()
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
