#include<stdio.h>
#include<conio.h>
void Combsort11(double a[], int nElements)
{
int i, j, gap, swapped = 1;
double temp;
gap = nElements;
while (gap > 1 || swapped == 1)
{
gap = gap * 10 / 13;
if (gap == 9 || gap == 10) gap = 11;
if (gap < 1) gap = 1;
swapped = 0;
for (i = 0, j = gap; j <nElements; i++, j++)
{
if (a[i] > a[j])
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
swapped = 1;
printf("%d\n",a[j]);
}
}
}
}

void main()
{
double a[5]={10,5,4,2,100};
int i;
clrscr();
Combsort11(a,5);
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
getch();
}
