//C program for Bogosort Algorithm :

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>

bool is_sorted(int *a, int n)
{
  while ( --n >= 1 ) {
    if ( a[n] < a[n-1] ) return false;
  }
  return true;
}

void shuffle(int *a, int n)
{
  int i, t, r;
  for(i=0; i < n; i++) {
    t = a[i];
    r = rand() % n;
    a[i] = a[r];
    a[r] = t;
  }
}

void bogosort(int *a, int n)
{
  while ( !is_sorted(a, n) ) shuffle(a, n);
}

int main()
{
  int numbers[20];
  int i,num;
  printf("\nEnter the number of elements in list : ");
  scanf("%d",&num);
  printf("\nEnter the elements of the list : \n");
  for(i=0;i<num;i++)
  {
                   scanf("%d",&numbers[i]);
                    }
  bogosort(numbers, num);
  printf("\nSorted list : \t");
  for (i=0; i < num; i++) printf("%d \t", numbers[i]);
  printf("\n");
  getch();
}