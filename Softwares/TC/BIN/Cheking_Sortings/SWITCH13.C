//To select sotring programs Using switch case.
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define MAX 10

void bubble();
void bucket(void);
void cocktail(void);
void comb(void);
//void Combsort11(* int,int);

void main()
{
int i,c;

Again2:
clrscr();
textcolor(1);
cprintf("É");
for(i=0;i<78;i++)
{
cprintf("Í");
}
cprintf("»");
for(i=0;i<47;i++)
{
gotoxy(1,2+i);
cprintf("º");
}
gotoxy(1,49);
cprintf("È");
for(i=0;i<78;i++)
{
cprintf("Í");
}
cprintf("¼");
for(i=0;i<47;i++)
{
gotoxy(80,2+i);
cprintf("º");
}

textcolor(13);
gotoxy(25,3);
cprintf("APLICATION OF SORTING ALGORITHMS");
 textcolor(1);
 for(i=2;i<80;i++)
 {
 gotoxy(i,5);
 delay(5);
 cprintf("Í");
 }

textcolor(27);
gotoxy(2,6);
cprintf("Press 0  for EXIT.");
gotoxy(2,7);
cprintf("Press 1  for Bubble Sort");
gotoxy(2,8);
cprintf("Press 2  for Bucket Sort");
gotoxy(2,9);
cprintf("Press 3  for Cocktail Sort");
gotoxy(2,10);
cprintf("Press 4  for Comb Sort");
gotoxy(2,11);
cprintf("Press 5  for Counting Sort");
gotoxy(2,12);
cprintf("Press 6  for Heap Sort");
gotoxy(2,13);
cprintf("Press 7  for Insertion Sort");
gotoxy(2,14);
cprintf("Press 8  for Merge Sort");
gotoxy(2,15);
cprintf("Press 9  for Quick Sort");
gotoxy(2,16);
cprintf("Press 10 for Radix Sort");
gotoxy(2,17);
cprintf("Press 11 for Selection Sort");
gotoxy(2,18);
cprintf("Press 12 for Shell Sort");
gotoxy(2,19);
cprintf("Press 13 for DIGIT SORT");

gotoxy(2,21);
textcolor(28);
cprintf("Always Enter Numeric Choice:");
cscanf("%d",&c);
getch();
switch(c)
{
case 0:
textcolor(18);
gotoxy(37,30);
cprintf("Thank You");
textcolor(18+128);
gotoxy(35,32);
cprintf("VISIT AGAIN..");
//break;
goto Again3;

case 1:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Bubble Sort");
getch();

bubble();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;

case 2:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Bucket Sort");
getch();

bucket();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;

case 3:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Cocktail Sort");
getch();

cocktail();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;

case 4:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Comb Sort");

comb();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;


case 5:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Counting Sort");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;

case 6:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected  Heap Sort");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;


case 7:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Inertion Sort");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;


case 8:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Merge Sort");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;


case 9:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Quick Sort");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;


case 10:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Radix sort");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;


case 11:
textcolor(18);
gotoxy(2,23);
cprintf("You have Selection Sort");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;


case 12:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected Shell Sort");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;


case 13:
textcolor(18);
gotoxy(2,23);
cprintf("You have selected DIGIT SORT");
getch();

textcolor(14);
gotoxy(56,48);
cprintf("Press Enter To Try Again");
getch();
break;
//goto Again2;

default:
textcolor(20);
gotoxy(25,30);
cprintf("You have enter the wrong choice");
gotoxy(32,32);
cprintf("Please Try Again");
textcolor(20+128);
gotoxy(34,34);
cprintf("PRESS ENTER..");
getch();
}
goto Again2;
Again3:
getch();
}
//Bubble sort program
void bubble()
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
}

//Bucket Sort
void bucket(void)
{
int unsorted[50] , bucket[10][50]={{0}} , sorted[50] ;
int   j , k , m , p , flag = 0, num, N;
clrscr();
printf("\n\t\t\t\tBUCKET SORT");
printf("\n\t\t\t\t***********\n\n\n");
printf("\n\nENTER THE NUMBER OF ELEMENTS:");
scanf("%d", &N);
printf("\nENTER THE INPUT ELEMENTS:\n\n");
for(k=0 ;  k < N ; k++){
scanf("\n%d",&num);
sorted[k] = unsorted[k] = num;
}

for(p=1; flag != N ; p*=10){

flag = 0;

for(k=0;k<N;k++){
bucket[(sorted[k]/p)%10][k] = sorted[k];
if ( (sorted[k]/p)%10  == 0 ){
   flag++;
   }
}

if (flag == N){
   printf("\n\nAFTER SORTING ELEMENTS ARE:");
   for(j=0 ;  j < N ; j++){
   printf("%d\t", sorted[j]);
   }
   printf("\n");
   getch();
   }

for(j=0,m=0;j<10;j++){
for(k=0;k<N;k++){
if( bucket[j][k] > 0 ){
  sorted[m] = bucket[j][k];
  bucket[j][k] = 0 ;
  m++;
  }
  }
  }
  }
}

//Cocktail sort
void cocktail()
{
int a[MAX],b[MAX];
int n,i,j,pass,sw=1,temp;
clrscr();
 printf("\n\t\t\t\tCOCKTAIL SORT");
printf("\n\t\t\t\t*************\n\n\n");
printf("\n\nENTER THE NUMBER OF ELEMENTS:");
scanf("%d", &n);
printf("\nENTER THE INPUT ELEMENTS:\n\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	b[i]=a[i];
}
 printf("\nBEFORE SORTING ELEMENTS ARE:");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 printf("\n\nAFTER SORTING ELEMENTS ARE:");
 sw=1;
for(i=0;i<n-1 && sw==1;i++)
{
 sw=0;
 for(j=0;j<n-1-i;j++)
  {
   if(b[j]>b[j+1])
    {
     temp=b[j+1];
     b[j+1]=b[j];
     b[j]=temp;
     sw=1;
     }
  if(b[n-1-j]<b[n-2-j])
    {
     temp=b[n-2-j];
     b[n-2-j]=b[n-1-j];
     b[n-1-j]=temp;
     sw=1;
     }
  }
}
 for(j=0;j<n;j++)
 printf("%d ",b[j]);
 printf("\n\nNUMBER OF PASSES REQUIRED:%d",i);
}

//Comb sort
void Combsort11(int a[], int nElements)
{
int i=0,j=0,gap, swapped = 1;
int temp=0;
gap = nElements;
while (gap > 1 || swapped == 1)
{
gap = gap/1.3;
//printf("gap=%d\n",gap);
if (gap < 1)gap=1;
swapped = 0;
for (i = 0,j=gap;j<nElements;i++,j++)
	{
		//printf("%d%d--",i,j);
		if(a[i]>a[j])
		{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		swapped = 1;
		/*for(k=0;k<nElements;k++)
		{
		printf("%d.",a[k]);
		}
		printf("\n") ;   */
		}
	}
}
}

void comb()
{
int a[100];
int i,n;
clrscr();

printf("\n\t\t\t\tCOMB SORT");
printf("\n\t\t\t\t*********\n\n\n");
printf("\n\nENTER THE NUMBER OF ELEMENTS:");
scanf("%d", &n);
printf("\nENTER THE INPUT ELEMENTS:\n\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nBEFORE SORTING ELEMENTS ARE:");
for(i=0; i<n; i++)
{
printf("%d ",a[i]);
}

Combsort11(a,n);

printf("\n\nAFTER SORTING ELEMENTS ARE:");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
