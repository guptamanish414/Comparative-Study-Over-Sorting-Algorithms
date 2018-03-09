//Bubble sort program
#include<stdio.h>
void main()
{
int A[200],N,Temp,i,j;
clrscr();
printf("\n\tEnter how many elements you want:\n\t");
scanf("%d",&N);
printf("\n\tEnter the array elements to be sorted:\n");
for(i=0;i<N;i++)
{
	printf("\t");
	scanf("%d",&A[i]);
}
for(i=0;i<N-1;i++)
	for(j=0;j<N-i;j++)
		if(A[j]>A[j+1])
		{
		Temp = A[j];
		A[j] = A[j+1];
		A[j+1] = Temp;
		}
printf("\n\tThe array of elements after sorting:\n");
for(i=0; i<N; i++)
	printf("\n\t%d",A[i]);
getch();
}