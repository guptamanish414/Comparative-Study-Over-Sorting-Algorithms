#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/* end is the last index + 1 */
void csort(int *array,int end,int max, int min)
{
int i;
int range = max-min+1;
int *count=(int*)malloc(sizeof(int)*(range+1));
int *scratch=(int*)malloc(sizeof(int)*end);
int c;
int s;

for(i=0; i<range+1; i++)
count[i] = 0;

/* Set the value of count[i] to the number of
* elements in array with value i+min-1. */
for(i=0; i<end; i++) {
c = array[i]+1-min;
count[c]++;
}

/* Update count[i] to be the number of
* elements with value less than i+min. */
for(i=1; i<range; i++)
count[i] += count[i-1];

/* Copy the elements of array into scratch in
* stable sorted order. */
for(i=(end-1); i>=0; i--) {
c = array[i]-min;
s = count[c];
scratch[s] = array[i];
/* Increment count so that the next element
* with the same value as the current element
* is placed into its own position in scratch. */
count[c]++;
}

for(i=0; i<end; i++)
array[i] = scratch[i];
}
void main()
{
int a[5]={5,6,1,2,3};
int i;
clrscr();
csort(a,5,6,1);

for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
getch();
}
