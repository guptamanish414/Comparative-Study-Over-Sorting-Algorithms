#include<stdio.h>
#include<conio.h>
void main()
{
int A[200],N,Temp,i,j;
clrscr();
gotoxy(2,32);
cprintf("Enter how many elements you want:");
cscanf("%d",&N);
gotoxy(2,34);
cprintf("Enter the array elements to be sorted:");
for(i=0;i<N;i++)
{
	gotoxy(40,34+i);
	cscanf("%d",&A[i]);
	getch();
}
for(i=0;i<N-1;i++)
	for(j=0;j<N-i;j++)

		if(A[j]>A[j+1])
		{
		Temp = A[j];
		A[j] = A[j+1];
		A[j+1] = Temp;
		}
gotoxy(2,35+N);
cprintf("After sorting the array elements are:");
for(i=0; i<N; i++)
cprintf("%d ",A[i]);

getch();
}