//Bubble sort program
#include<stdio.h>
void main()
{
int A[200],N,Temp,i,j;
clrscr();
printf("\n\t\t\t\tBUBBLE SORT");
printf("\n\t\t\t\t***********\n\n\n");
printf("\n\nENTER THE NUMBER OF ELEMENTS:");
scanf("%d", &N);
printf("\nENTER THE INPUT ELEMENTS:\n\n");
for(i=0;i<N;i++)
{
	scanf("%d",&A[i]);
}
printf("\nBEFORE SORTING ELEMENTS ARE:");
for(i=0; i<N; i++)
	printf("%d ",A[i]);

for(i=0;i<N-1;i++)
	for(j=0;j<N-i;j++)
	if(A[j]>A[j+1])
		{
		Temp = A[j];
		A[j] = A[j+1];
		A[j+1] = Temp;
		}
printf("\n\nAFTER SORTING ELEMENTS ARE:");
for(i=0; i<N; i++)
	printf("%d ",A[i]);
getch();
}