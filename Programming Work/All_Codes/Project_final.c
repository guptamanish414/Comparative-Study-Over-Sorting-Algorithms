//Comparative Study & Implementation Of Different Conventional Algorithm & Inovation Of Sorting Algorithm.

#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<alloc.h>
#define MAX 10
#define MAXARRAY 100
#define MAXD 32767
#define sz 100
void login();
void frame();
void heading();
void our_sort();
void group();
void thank_you();
void sort_select();
void bubble();
void bucket();
void cocktail();
void comb();
void counting();
void heap();
void insertion();
void merge();
void quick();
void radix();
void selection();
void shell();
void digit();
void Combsort11(int *, int );
int hsort[25],nos,item;
void adjust(int,int);
void heapify();
void mergesort(int *, int , int );
void quick_sort (int*,int,int) ;
void print(int *, int);
void radixsort(int *, int);
void shellsort(int *,int);

void main()
 {
      login(); // call opening page
      frame(); // output frame design
      getch();
 }
      void login()   // login function open
	{
	int i,j,k,c;
	clrscr();
	textbackground(3);
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
	gotoxy(2,3);
	textcolor(27+128);
	textbackground(1);
	cprintf("                                                                              ");
	gotoxy(2,4);
	cprintf("                       --- WELCOME TO OUR PROJECT ---                         ");
	gotoxy(2,5);
	cprintf("                                                                              ");
	textcolor(18);
	gotoxy(2,7);
	cprintf("     COMPARATIVE STUDY & IMPLEMENTATION OF DIFFERENT CONVENTIONAL ALGORITHM   ");
	gotoxy(2,8);
	cprintf("                                                                              ");
	gotoxy(2,9);
	cprintf("                       & INOVATION OF SORTING ALGORITHM                       ");
	textbackground(9);
	gotoxy(3,11);
	cprintf("É");
	for(i=0;i<74;i++)
		{
		cprintf("Í");
		}
	cprintf("»");
	for(i=10;i<45;i++)
		{
		gotoxy(3,2+i);
		cprintf("º");
		}
	gotoxy(3,47);
	cprintf("È");
	for(i=0;i<74;i++)
		{
		cprintf("Í");
		}
	cprintf("¼");
	for(i=10;i<45;i++)
		{
		gotoxy(78,2+i);
		cprintf("º");
		}
	textcolor(32);
	textbackground(30);
	gotoxy(27,14);
	cprintf("                       ");
	gotoxy(27,15);
	cprintf(" PLEASE ENTER PASSWORD:");
	gotoxy(27,16);
	cprintf("                       ");
	textbackground(BLACK);
	cprintf(" ");
	textbackground(7);
	textcolor(7);
	cscanf("%d",&j);
	textbackground(BLACK);
	getch();
	if(j==12345)
		{
		gotoxy(4,19);
		for(k=0;k<74;k++)
			{
			delay(15);
			textcolor(15);
			cprintf("²");
			}
		textcolor(18);
		gotoxy(21,22);
		cprintf("CORRECT ! YOU ARE AUTHENTICATED TO USE");
		textcolor(18+128);
		gotoxy(28,25);
		cprintf("PLEASE PRESS ANY KEY..");
		}
	else
		{
		gotoxy(4,19);
		for(k=0;k<74;k++)
			{
			delay(15);
			textcolor(15);
			cprintf("²");
			}
		textcolor(20);
		gotoxy(27,22);
		cprintf("SORRY ! INVALID PASSWORD");
		gotoxy(31,25);
		cprintf("Please Try Again");
		textcolor(20+128);
		gotoxy(33,28);
		cprintf("THANK YOU..");
		getch();
		group();
		getch();
		thank_you();
		getch();
		exit();     // terminate from program
		}
	}  // control back to main for valid password


    void frame()   // frame function open
	{
	int i,j,k,c;
	// int choice;
	clrscr();
	textbackground(3);
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
	textbackground(9);
	gotoxy(3,11);
 	cprintf("É");
  	for(i=0;i<74;i++)
   		{
   		cprintf("Í");
   		}
  	cprintf("»");
  	for(i=10;i<45;i++)
   		{
   		gotoxy(3,2+i);
   		cprintf("º");
   		}
   	gotoxy(3,47);
   	cprintf("È");
  	for(i=0;i<74;i++)
   		{
   		cprintf("Í");
   		}
  	cprintf("¼");
  	for(i=10;i<45;i++)
   		{
   		gotoxy(78,2+i);
   		cprintf("º");
   		}
   	heading();  //  call heading function
   	sort_select();   // call sort selection function
       }     // frame function close


void sort_select()          // sort selection function open
{
 int choice;
int c;
 textcolor(27);
 textbackground(BLACK);
gotoxy(6,20);
cprintf("Press 0  for EXIT.");
gotoxy(6,21);
cprintf("Press 1  for Bubble Sort");
gotoxy(6,22);
cprintf("Press 2  for Bucket Sort");
gotoxy(6,23);
cprintf("Press 3  for Cocktail Sort");
gotoxy(6,24);
cprintf("Press 4  for Comb Sort");
gotoxy(6,25);
cprintf("Press 5  for Counting Sort");
gotoxy(6,26);
cprintf("Press 6  for Heap Sort");
gotoxy(6,27);
cprintf("Press 7  for Insertion Sort");
gotoxy(6,28);
cprintf("Press 8  for Merge Sort");
gotoxy(6,29);
cprintf("Press 9  for Quick Sort");
gotoxy(6,30);
cprintf("Press 10 for Radix Sort");
gotoxy(6,31);
cprintf("Press 11 for Selection Sort");
gotoxy(6,32);
cprintf("Press 12 for Shell Sort");
gotoxy(6,33);
cprintf("Press 13 for DIGIT SORT");

gotoxy(6,35);
textcolor(28);
cprintf("Always Enter Numeric Choice:");
cscanf("%d",&c);
getch();
switch(c)
{             // switch case open
case 0:
group();
getch();
thank_you();
getch();
exit();
case 1:
bubble();   // call bubble sort
break;
case 2:
bucket();   // call bucket sort
break;
case 3:
cocktail();   // call cocktail sort
break;
case 4:
comb();     // call comb sort
break;
case 5:
counting();    // call copunting sort
break;
case 6:
heap();   // call heap sort
break;
case 7:
insertion();   // call insertion sort
break;
case 8:
merge();    // call merge sort
break;
case 9:
quick();    // call quick sort
break;
case 10:
radix();   // call radix sort
break;
case 11:
selection();   // call selection sort
break;
case 12:
shell();   // call shell sort
break;
case 13:
our_sort();  //call our_sort (Digit sort)
getch();
digit();   // call digit sort
break;
}   // switch case close
gotoxy(15,40);
cprintf("\n\n PRESS 0 TO EXIT AND ANY KEY TO CONTINUE...");
   cscanf("%d",&choice);
   if(choice==0)
   {
   thank_you();
   exit();
   }
   else
    {
     //clrscr();
     frame();           // again back to frame function for further processing
    }
}   // sort selection function close

void bubble() // bubble sort open
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
	for(j=0;j<N-1;j++)
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
}   // bubble sort close



void bucket()   // bucket sort open
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

}  //   bucket sort close


void cocktail()  // cocktail sort open
{
int a[MAX],b[MAX];
int n,i,j,pass,sw=1,temp;
clrscr();
 printf("\n\t\t\t\tCOCKTAIL SORT");
printf("\n\t\t\t\t**************\n\n\n");
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
 getch();
}            // cocktail sort close


void comb()   //   comb sort open
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

Combsort11(a,n);    // comb sort supporting function call

printf("\n\nAFTER SORTING ELEMENTS ARE:");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
getch();
}        // comb sort close


void Combsort11(int a[], int nElements)   // supporting function for comb sort open
{
int i=0,j=0,gap, swapped = 1;
//int k=0;
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
}           // supporting function for comb sort close


void counting()   // counting sort open
{
int arr1[sz];
int arr2[sz];
int num=0;
int temp[sz];
int i;
clrscr();
printf("\n\t\t\t\tCOUNTING SORT");
printf("\n\t\t\t\t*************\n\n\n");
printf("\n\nENTER THE NUMBER OF ELEMENTS:");
scanf("%d", &num);
printf("\n\n");

	for(i = 1; i <= num; i++)
	{
	printf("\nENTER THE %d INPUT ELEMENT:\n\n",i);
	scanf("%d",&arr1[i]);

	}

for(i = 1; i <= 99; i++)
	{
		temp[i] = 0;
	}

	for(i = 1; i <= num; i++)
	{
		temp[arr1[i]] = temp[arr1[i]] + 1;
	}

	for(i = 1;i <= 99; i++)
	{
		temp[i] = temp[i] + temp[i-1];
	}

	for(i = num;i >= 1; i--)
	{
		arr2[temp[arr1[i]]] = arr1[i];
		temp[arr1[i]] = temp[arr1[i]] - 1;
	}
printf("\n\nBEFORE SORTING ELEMENTS ARE:");
for(i = 1; i <= num; i++)
printf("   %d", arr1[i]);

printf("\n\nAFTER SORTING ELEMENTS ARE:");
for(i = 1; i <= num; i++)
printf("   %d", arr2[i]);
getch();
}          // counting sort close


void heap()   // heap sort open
{
int temp;
clrscr();
printf("\n\t\t\t\tHEAP SORT");
printf("\n\t\t\t\t*********\n\n\n");
printf("\n\nENTER THE NUMBER OF ELEMENTS:");
scanf("%d", &nos);
printf("\nENTER THE INPUT ELEMENTS:\n\n");
for(item=1;item<=nos;item++)
scanf("%d",&hsort[item]);
printf("\nBEFORE SORTING ELEMENTS ARE:");
for(item=1;item<=nos;item++)
printf("%d ",hsort[item]);

heapify();                         // heap function call

for(item=nos;item>=2;item--)
{
temp=hsort[1];
hsort[1]=hsort[item];
hsort[item]=temp;
adjust(1,item-1);                   //adjust function call
}
printf("\n\nAFTER SORTING ELEMENTS ARE:");
for(item=1;item<=nos;item++)
printf("%d ",hsort[item]);
getch();
}                 // heap sort close


void heapify()              //heap function open
{
int item;
for(item=nos/2;item>=1;item--)
adjust(item,nos);            // adjust function call
}                    // heap function close



void adjust(int item,int nos)  // adjust function open
{
int j,element;
j=2*item;
element=hsort[item];
while(j<=nos)
{
if((j<nos)&&(hsort[j]<hsort[j+1]))
j=j++;
if(element>=hsort[j])
break;
hsort[j/2]=hsort[j];
j=2*j;
}
hsort[j/2]=element;
}                          // adjust function close




void insertion()           // insertion sort open
{
	int A[20], N, Temp, i, j;
	clrscr();
	printf("\n\t\t\t\tINSERTION SORT");
	printf("\n\t\t\t\t**************\n\n\n");
	printf("\n\nENTER THE NUMBER OF ELEMENTS:");
	scanf("%d", &N);
	printf("\nENTER THE INPUT ELEMENTS:\n\n");
	for(i=0; i<N; i++)
	{
	scanf("\n%d", &A[i]);
	}
	printf("\nBEFOR SORTING ELEMENTS ARE:");
	for(i=0; i<N; i++)
	{
	 printf("%d ",A[i]);
	}

	for(i=1; i<N; i++)
	{
		Temp = A[i];
		j = i-1;
		while(Temp<A[j] && j>=0)
		{
			A[j+1] = A[j];
			j = j-1;
		}
		A[j+1] = Temp;
	}
	printf("\n\nAFTER SORTING ELEMENTS ARE:");
	for(i=0; i<N; i++)
		printf("%d ", A[i]);
	getch();
}                 // insertion sort close


void merge() {                  //merge sort open
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

 mergesort(array, 0, n - 1);        // mergesort function call

 /* array after mergesort */
 printf("\nAFTER SORTING ELEMENTS ARE:");
 for(i = 0; i < n; i++)
  printf(" %d", array[i]);

 printf("\n");
 getch();
}                      //merge sort close



void mergesort(int a[], int low, int high) {             // mergesort function call open
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
}                         // mergesort function call close


void quick( )                 // quick sort open
{
	int values[100], i,no;
	clrscr();
	printf("\n\t\t\t\tQUICK SORT");
	printf("\n\t\t\t\t**********\n\n\n");
	printf("\n\nENTER THE NUMBER OF ELEMENTS:");
	scanf("%d", &no);
	printf("\nENTER THE INPUT ELEMENTS:\n\n");
	for (i = 0; i < no; i++)
	{
		scanf("%d",&values[i]);
	}
	printf("\nELEMENTS BEFORE SORTING:");
	for (i = 0; i < no; i++)
	{
		printf("% d",values[i]);
	}
	quick_sort(values, 0, no-1);
	printf("\nELEMENTS BEFORE SORTING:");

	for (i = 0; i < no; i++)
		printf("%d ", values[i]);
		getch();
}           //quick sort close



void quick_sort(int array[], int first, int last)  // quick sort function call open
{
	int temp, low, high, list_separator;

	low = first;
	high = last;
	list_separator = array[(first + last) / 2];

	do {
		while (array[low] < list_separator)
			low++;

		while (array[high] > list_separator)
			high--;

		if (low <= high)
		{
			temp = array[low];
			array[low++] = array[high];
			array[high--] = temp;
		}
	} while (low <= high);

	if (first < high)
		quick_sort(array, first, high);
	if (low < last)
		quick_sort(array, low, last);
}          // quick sort function call close


void radix()                //  radix sort open
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
}               //radix sort close


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

  }
}



void selection()           // selection sort open
{
   int array[100], n, c, d, position,swap;
   clrscr();

   printf("\n\t\t\t\tSELECTION SORT");
   printf("\n\t\t\t\t**************\n\n\n");
   printf("\n\nENTER THE NUMBER OF ELEMENTS:");
   scanf("%d", &n);
   printf("\nENTER THE %d INPUT ELEMENTS:\n\n",n);
      for ( c = 0 ; c < n ; c++ )
      scanf("%d", &array[c]);
   printf("\nBEFORE SORTING ELEMENTS ARE:");
      for ( c = 0 ; c < n ; c++ )
      printf("%d ",array[c]);
   for ( c = 0 ; c < ( n - 1 ) ; c++ )
   {
      position = c;

      for ( d = c + 1 ; d < n ; d++ )
      {
	 if ( array[position] > array[d] )
	    position = d;
      }
      if ( position != c )
      {
	 swap = array[c];
	 array[c] = array[position];
	 array[position] = swap;
      }
   }
   printf("\n\nAFTER SORTING ELEMENTS ARE:");
      for ( c = 0 ; c < n ; c++ )
      printf("%d ", array[c]);

  getch();
}                           // selection sort close


void shell()   // shell sort open
{
int a[10],i,n;
clrscr();
printf("\n\t\t\t\tSELL SORT");
printf("\n\t\t\t\t*********\n\n\n");
printf("\n\nENTER THE NUMBER OF ELEMENTS:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nENTER THE %d INPUT ELEMENT:",i+1);
scanf("%d",&a[i]);
}
printf("\nBEROFE SORTING ELEMENTS ARE:");
for(i=0;i<n;i++)
printf("%2d ",a[i]);
shellsort(a,n);
printf("\n\nAFTER SORTING ELEMENTS ARE:");
for(i=0;i<n;i++)
printf("%2d ",a[i]);
getch();

}                     // shell sort close

void shellsort(int a[],int n)
{
int j,i,k,m,mid;
for(m = n/2;m>0;m/=2)
{
for(j = m;j<n;j++)
{
for(i=j-m;i>=0;i-=m)
{
if(a[i+m]>=a[i])
break;
else
{
mid = a[i];
a[i] = a[i+m];
a[i+m] = mid;
}
}    }  } }




void digit()               //digit sort open
{
unsigned int * arrin,* arrout;
unsigned int * b1,* b2,* b3,* b4,* b5;
unsigned int count1=0,count2=0,count3=0,count4=0,count5=0;
unsigned int n,no,count,i,j,k=0;
	clrscr();
	printf("\n\t\t\t\tDIGIT SORT");
	printf("\n\t\t\t\t**********\n\n\n");
	printf("\n\nENTER THE NUMBER OF ELEMENTS:");
	scanf("%d",&n);

	arrin=(unsigned int *) malloc(n *sizeof(unsigned int));
	b1=(unsigned int *) malloc(n *sizeof(unsigned int));
	b2=(unsigned int *) malloc(n *sizeof(unsigned int));
	b3=(unsigned int *) malloc(n *sizeof(unsigned int));
	b4=(unsigned int *) malloc(n *sizeof(unsigned int));
	b5=(unsigned int *) malloc(n *sizeof(unsigned int));
	arrout=(unsigned int *) malloc(n *sizeof(unsigned int));

	printf("\nENTER THE INPUT ELEMENTS BETWEEN 0 TO 32767:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arrin[i]);
		if((arrin[i])>MAXD)
		{
		printf("\n!INPUT ELEMENT OUT OF RANGE");
		getch();
		group();
		getch();
		thank_you();
		getch();
		exit();
		}
	}
	printf("\nBEFORE SORTING ELEMENTS ARE:");
	for(i=0;i<n;i++)
		printf("%d ",arrin[i]);
	for(i=0;i<n;i++)
	{
	count=0;
	no=arrin[i];
	do{
	/*x=no%10;*/
	no=no/10;
	count++;
	}while(no!=0);

		if(count==1)
		{

			b1[count1]=arrin[i];

			for(j=count1;j>0;j--)
			{
				if(b1[j-1]<=b1[j])
				{
					break;
				}
				else
				{
					int temp=b1[j-1];
					b1[j-1]=b1[j];
					b1[j]=temp;
				 }

			}
			count1++;
		}
		else if(count==2)
		{
			b2[count2]=arrin[i];

			for(j=count2;j>0;j--)
			{
				if(b2[j-1]<=b2[j])
				{
					break;
				}
				else
				{
					int temp=b2[j-1];
					b2[j-1]=b2[j];
					b2[j]=temp;
				 }

			}
			count2++;
		}
		else if(count==3)
		{
			b3[count3]=arrin[i];

			for(j=count3;j>0;j--)
			{
				if(b3[j-1]<=b3[j])
				{
					break;
				}
				else
				{
					int temp=b3[j-1];
					b3[j-1]=b3[j];
					b3[j]=temp;
				 }

			}
			count3++;
		}
		else if(count==4)
		{
			b4[count4]=arrin[i];

			for(j=count4;j>0;j--)
			{
				if(b4[j-1]<=b4[j])
				{
					break;
				}
				else
				{
					int temp=b4[j-1];
					b4[j-1]=b4[j];
					b4[j]=temp;
				 }

			}
			count4++;
		}
		else if(count==5)
		{
			b5[count5]=arrin[i];

			for(j=count5;j>0;j--)
			{
				if(b5[j-1]<=b5[j])
				{
					break;
				}
				else
				{
					int temp=b5[j-1];
					b5[j-1]=b5[j];
					b5[j]=temp;
				 }

			}
			count5++;
		}
	}
	for(j=0;j<count1;j++)
	arrout[k++]=b1[j];
	for(j=0;j<count2;j++)
	arrout[k++]=b2[j];
	for(j=0;j<count3;j++)
	arrout[k++]=b3[j];
	for(j=0;j<count4;j++)
	arrout[k++]=b4[j];
	for(j=0;j<count5;j++)
	arrout[k++]=b5[j];
printf("\n\nAFTER SORTING ELEMENTS ARE: ");
	for(i=0;i<n;i++)
		{
		 printf("%d ",arrout[i]);
		}

getch();
}	     //digit sort close


void heading()           // heading function open
{
textbackground(BLACK);
gotoxy(16,5);
textcolor(RED);
delay(1000);
cprintf("SSSSS  OOOOO  RRRRR  TTTTT   III   N    N  GGGGG");
gotoxy(16,6);
textcolor(CYAN);
delay(500);
cprintf("S      O   O  R   R    T      I    NN   N  G   G");
gotoxy(16,7);
textcolor(BLUE);
delay(500);
cprintf("  S    O   O  RRRRR    T      I    N  N N  G    ");
gotoxy(16,8);
textcolor(CYAN);
delay(500);
cprintf("    S  O   O  RR       T      I    N   NN  G  GG");
gotoxy(16,9);
textcolor(RED);
delay(500);
cprintf("SSSSS  OOOOO  R R      T     III   N    N  GGGGG");
}                         // heading function close


//Our Sorting Algorithm(Digit sort)(Open)
void our_sort()
 {
  int i;
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
  delay(200);
  textcolor(11);
 gotoxy(2,3);
 cprintf("OOO");
 gotoxy(2,4);
 cprintf("O O");
 gotoxy(2,5);
 cprintf("O O");
 gotoxy(2,6);
 cprintf("O O");
 gotoxy(2,7);
 cprintf("OOO");
  textcolor(11);
 gotoxy(6,3);
 cprintf("U U");
 gotoxy(6,4);
 cprintf("U U");
 gotoxy(6,5);
 cprintf("U U");
 gotoxy(6,6);
 cprintf("U U");
 gotoxy(6,7);
 cprintf("UUU");
  textcolor(11);
 gotoxy(10,3);
 cprintf("RRR");
 gotoxy(10,4);
 cprintf("R R");
 gotoxy(10,5);
 cprintf("RRR");
 gotoxy(10,6);
 cprintf("R R");
 gotoxy(10,7);
 cprintf("R  R");

  delay(400);
  textcolor(11);
 gotoxy(15,3);
 cprintf("SSS");
 gotoxy(15,4);
 cprintf("S");
 gotoxy(15,5);
 cprintf("SSS");
 gotoxy(15,6);
 cprintf("  S");
 gotoxy(15,7);
 cprintf("SSS");
  textcolor(11);
 gotoxy(19,3);
 cprintf("OOO");
 gotoxy(19,4);
 cprintf("O O");
 gotoxy(19,5);
 cprintf("O O");
 gotoxy(19,6);
 cprintf("O O");
 gotoxy(19,7);
 cprintf("OOO");
  textcolor(11);
 gotoxy(23,3);
 cprintf("RRR");
 gotoxy(23,4);
 cprintf("R R");
 gotoxy(23,5);
 cprintf("RRR");
 gotoxy(23,6);
 cprintf("R R");
 gotoxy(23,7);
 cprintf("R  R");
  textcolor(11);
 gotoxy(27,3);
 cprintf("TTT");
 gotoxy(27,4);
 cprintf(" T ");
 gotoxy(27,5);
 cprintf(" T ");
 gotoxy(27,6);
 cprintf(" T ");
 gotoxy(27,7);
 cprintf(" T ");
  textcolor(11);
 gotoxy(31,3);
 cprintf("III");
 gotoxy(31,4);
 cprintf(" I ");
 gotoxy(31,5);
 cprintf(" I ");
 gotoxy(31,6);
 cprintf(" I ");
 gotoxy(31,7);
 cprintf("III");
  textcolor(11);
 gotoxy(35,3);
 cprintf("N N");
 gotoxy(35,4);
 cprintf("NNN");
 gotoxy(35,5);
 cprintf("NNN");
 gotoxy(35,6);
 cprintf("NNN");
 gotoxy(35,7);
 cprintf("N N");
  textcolor(11);
 gotoxy(39,3);
 cprintf("GGG");
 gotoxy(39,4);
 cprintf("G  ");
 gotoxy(39,5);
 cprintf("G  ");
 gotoxy(39,6);
 cprintf("GGG");
 gotoxy(39,7);
 cprintf("  G");

  delay(600);
  textcolor(11);
 gotoxy(44,3);
 cprintf(" A ");
 gotoxy(44,4);
 cprintf("A A");
 gotoxy(44,5);
 cprintf("AAA");
 gotoxy(44,6);
 cprintf("A A");
 gotoxy(44,7);
 cprintf("A A");
  textcolor(11);
 gotoxy(48,3);
 cprintf("L");
 gotoxy(48,4);
 cprintf("L");
 gotoxy(48,5);
 cprintf("L");
 gotoxy(48,6);
 cprintf("L");
 gotoxy(48,7);
 cprintf("LLL");
  textcolor(11);
 gotoxy(52,3);
 cprintf("GGG");
 gotoxy(52,4);
 cprintf("G  ");
 gotoxy(52,5);
 cprintf("G  ");
 gotoxy(52,6);
 cprintf("GGG");
 gotoxy(52,7);
 cprintf("  G");
   textcolor(11);
 gotoxy(56,3);
 cprintf("OOO");
 gotoxy(56,4);
 cprintf("O O");
 gotoxy(56,5);
 cprintf("O O");
 gotoxy(56,6);
 cprintf("O O");
 gotoxy(56,7);
 cprintf("OOO");
  textcolor(11);
 gotoxy(60,3);
 cprintf("RRR");
 gotoxy(60,4);
 cprintf("R R");
 gotoxy(60,5);
 cprintf("RRR");
 gotoxy(60,6);
 cprintf("R R");
 gotoxy(60,7);
 cprintf("R  R");
  textcolor(11);
 gotoxy(65,3);
 cprintf("III");
 gotoxy(65,4);
 cprintf(" I ");
 gotoxy(65,5);
 cprintf(" I ");
 gotoxy(65,6);
 cprintf(" I ");
 gotoxy(65,7);
 cprintf("III");
  textcolor(11);
 gotoxy(69,3);
 cprintf("TTT");
 gotoxy(69,4);
 cprintf(" T ");
 gotoxy(69,5);
 cprintf(" T ");
 gotoxy(69,6);
 cprintf(" T ");
 gotoxy(69,7);
 cprintf(" T ");
  textcolor(11);
 gotoxy(73,3);
 cprintf("H H");
 gotoxy(73,4);
 cprintf("H H");
 gotoxy(73,5);
 cprintf("HHH");
 gotoxy(73,6);
 cprintf("H H");
 gotoxy(73,7);
 cprintf("H H");
   textcolor(11);
 gotoxy(77,3);
 cprintf("M M");
 gotoxy(77,4);
 cprintf("MMM");
 gotoxy(77,5);
 cprintf("M M");
 gotoxy(77,6);
 cprintf("M M");
 gotoxy(77,7);
 cprintf("M M");

 textcolor(9+128);
 for(i=2;i<80;i++)
 {
 gotoxy(i,9);
 delay(10);
 cprintf("*");
 }


  delay(800);
  textcolor(34);
 gotoxy(10,22);
 cprintf("DDDDD");
 gotoxy(10,23);
 cprintf("D   D");
 gotoxy(10,24);
 cprintf("D   D");
 gotoxy(10,25);
 cprintf("D   D");
 gotoxy(10,26);
 cprintf("D   D");
 gotoxy(10,27);
 cprintf("D   D");
 gotoxy(10,28);
 cprintf("D   D");
 gotoxy(10,29);
 cprintf("D   D");
 gotoxy(10,30);
 cprintf("D   D");
 gotoxy(10,31);
 cprintf("D   D");
 gotoxy(10,32);
 cprintf("DDDDD");
  textcolor(34);
 gotoxy(16,22);
 cprintf("IIIII");
 gotoxy(16,23);
 cprintf("  I  ");
 gotoxy(16,24);
 cprintf("  I  ");
 gotoxy(16,25);
 cprintf("  I  ");
 gotoxy(16,26);
 cprintf("  I  ");
 gotoxy(16,27);
 cprintf("  I  ");
 gotoxy(16,28);
 cprintf("  I  ");
 gotoxy(16,29);
 cprintf("  I  ");
 gotoxy(16,30);
 cprintf("  I  ");
 gotoxy(16,31);
 cprintf("  I  ");
 gotoxy(16,32);
 cprintf("IIIII");
  textcolor(34);
 gotoxy(22,22);
 cprintf("GGGGG");
 gotoxy(22,23);
 cprintf("G    ");
 gotoxy(22,24);
 cprintf("G    ");
 gotoxy(22,25);
 cprintf("G    ");
 gotoxy(22,26);
 cprintf("G    ");
 gotoxy(22,27);
 cprintf("G    ");
 gotoxy(22,28);
 cprintf("G    ");
 gotoxy(22,29);
 cprintf("G   G");
 gotoxy(22,30);
 cprintf("GGGGG");
 gotoxy(22,31);
 cprintf("    G");
 gotoxy(22,32);
 cprintf("    G");
  textcolor(34);
 gotoxy(28,22);
 cprintf("IIIII");
 gotoxy(28,23);
 cprintf("  I  ");
 gotoxy(28,24);
 cprintf("  I  ");
 gotoxy(28,25);
 cprintf("  I  ");
 gotoxy(28,26);
 cprintf("  I  ");
 gotoxy(28,27);
 cprintf("  I  ");
 gotoxy(28,28);
 cprintf("  I  ");
 gotoxy(28,29);
 cprintf("  I  ");
 gotoxy(28,30);
 cprintf("  I  ");
 gotoxy(28,31);
 cprintf("  I  ");
 gotoxy(28,32);
 cprintf("IIIII");
  textcolor(34);
 gotoxy(34,22);
 cprintf("TTTTT");
 gotoxy(34,23);
 cprintf("  T  ");
 gotoxy(34,24);
 cprintf("  T  ");
 gotoxy(34,25);
 cprintf("  T  ");
 gotoxy(34,26);
 cprintf("  T  ");
 gotoxy(34,27);
 cprintf("  T  ");
 gotoxy(34,28);
 cprintf("  T  ");
 gotoxy(34,29);
 cprintf("  T  ");
 gotoxy(34,30);
 cprintf("  T  ");
 gotoxy(34,31);
 cprintf("  T  ");
 gotoxy(34,32);
 cprintf("  T  ");

  delay(1000);
  textcolor(34);
 gotoxy(44,22);
 cprintf("SSSSS");
 gotoxy(44,23);
 cprintf("S");
 gotoxy(44,24);
 cprintf("S");
 gotoxy(44,25);
 cprintf("S");
 gotoxy(44,26);
 cprintf("S");
 gotoxy(44,27);
 cprintf("S");
 gotoxy(44,28);
 cprintf("SSSSS");
 gotoxy(44,29);
 cprintf("    S");
 gotoxy(44,30);
 cprintf("    S");
 gotoxy(44,31);
 cprintf("    S");
 gotoxy(44,32);
 cprintf("SSSSS");
   textcolor(34);
 gotoxy(50,22);
 cprintf("OOOOO");
 gotoxy(50,23);
 cprintf("O   O");
 gotoxy(50,24);
 cprintf("O   O");
 gotoxy(50,25);
 cprintf("O   O");
 gotoxy(50,26);
 cprintf("O   O");
 gotoxy(50,27);
 cprintf("O   O");
 gotoxy(50,28);
 cprintf("O   O");
 gotoxy(50,29);
 cprintf("O   O");
 gotoxy(50,30);
 cprintf("O   O");
 gotoxy(50,31);
 cprintf("O   O");
 gotoxy(50,32);
 cprintf("OOOOO");
   textcolor(34);
 gotoxy(56,22);
 cprintf("RRRRR");
 gotoxy(56,23);
 cprintf("R   R");
 gotoxy(56,24);
 cprintf("R   R");
 gotoxy(56,25);
 cprintf("R   R");
 gotoxy(56,26);
 cprintf("R   R");
 gotoxy(56,27);
 cprintf("R   R");
 gotoxy(56,28);
 cprintf("RRRR");
 gotoxy(56,29);
 cprintf("R  R");
 gotoxy(56,30);
 cprintf("R   R");
 gotoxy(56,31);
 cprintf("R    R");
 gotoxy(56,32);
 cprintf("R     R");
  textcolor(34);
 gotoxy(63,22);
 cprintf("TTTTT");
 gotoxy(63,23);
 cprintf("  T  ");
 gotoxy(63,24);
 cprintf("  T  ");
 gotoxy(63,25);
 cprintf("  T  ");
 gotoxy(63,26);
 cprintf("  T  ");
 gotoxy(63,27);
 cprintf("  T  ");
 gotoxy(63,28);
 cprintf("  T  ");
 gotoxy(63,29);
 cprintf("  T  ");
 gotoxy(63,30);
 cprintf("  T  ");
 gotoxy(63,31);
 cprintf("  T  ");
 gotoxy(63,32);
 cprintf("  T  ");


 textcolor(9+128);
 for(i=2;i<80;i++)
 {
 gotoxy(i,45);
 delay(10);
 cprintf("*");
 }
 textcolor(23);
 gotoxy(50,47);
 cprintf("PRESS ENTER TO SEE APPLICATION");
 }  //Our Sorting Algorithm(Digit sort)(Close)

//Group members names (Open).
void group()
{
 int i;
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

gotoxy(2,3);
textcolor(13);
cprintf("Project Name");
cprintf("------>");
textcolor(11);
cprintf("Comparative Study & Implementation Of Different Conventional");
gotoxy(21,4);
cprintf("Algorithm & Inovation Of Sorting Algorithm");
gotoxy(2,6);
textcolor(13);
cprintf("Group Number");
cprintf("------>");
textcolor(11);
cprintf("One(1)");

gotoxy(2,9);
textcolor(13);
cprintf("Members");
cprintf("----------->");
textcolor(11);
cprintf("Seven(7)");

gotoxy(2,12);
textcolor(13);
cprintf("Names Of Members");
cprintf("-->");
textcolor(11);
gotoxy(21,12);
cprintf("1.Md Rameez Raja");
gotoxy(21,14);
cprintf("2.Manish Kumar Gupta");
gotoxy(21,16);
cprintf("3.Arup Shngha");
gotoxy(21,18);
cprintf("4.Md Imran Ansari");
gotoxy(21,20);
cprintf("5.Sujoya Das");
gotoxy(21,22);
cprintf("6.Swarna Basu");
gotoxy(21,24);
cprintf("7.Sarita Chaurasia");

gotoxy(2,27);
textcolor(13);
cprintf("Lead By");
cprintf("----------->");
textcolor(11);
cprintf("Md Rameez Raja");

gotoxy(2,30);
textcolor(13);
cprintf("Under By");
cprintf("---------->");
textcolor(11);
cprintf("Toufique Sir");

gotoxy(2,33);
textcolor(13);
cprintf("Front End");
cprintf("--------->");
textcolor(11);
cprintf("C Language");

gotoxy(2,36);
textcolor(13);
cprintf("Back End");
cprintf("---------->");
textcolor(11);
cprintf("No such data base ; Random input from the users.");

gotoxy(2,39);
textcolor(13);
cprintf("Project Type");
cprintf("------>");
textcolor(11);
cprintf("Analytical Project.");

gotoxy(2,42);
textcolor(13);
cprintf("Project Objective");
cprintf("->");
textcolor(11);
cprintf("Study the Complexity for sorting algorithms.");

gotoxy(2,45);
textcolor(13);
cprintf("Project Goal");
cprintf("------>");
textcolor(11);
cprintf("If possible ; proposed an algorithm which is best sorting");
gotoxy(21,47);
cprintf("algorithm according to complexity.");

}      //Group members names(Close).

void thank_you()
 {
  int i;
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
 gotoxy(10,22);
 cprintf("TTTTT");
 gotoxy(10,23);
 cprintf("  T  ");
 gotoxy(10,24);
 cprintf("  T  ");
 gotoxy(10,25);
 cprintf("  T  ");
 gotoxy(10,26);
 cprintf("  T  ");
 gotoxy(10,27);
 cprintf("  T  ");
 gotoxy(10,28);
 cprintf("  T  ");
 gotoxy(10,29);
 cprintf("  T  ");
 gotoxy(10,30);
 cprintf("  T  ");
 gotoxy(10,31);
 cprintf("  T  ");
 gotoxy(10,32);
 cprintf("  T  ");

 gotoxy(16,22);
 cprintf("H   H");
 gotoxy(16,23);
 cprintf("H   H");
 gotoxy(16,24);
 cprintf("H   H");
 gotoxy(16,25);
 cprintf("H   H");
 gotoxy(16,26);
 cprintf("H   H");
 gotoxy(16,27);
 cprintf("HHHHH");
 gotoxy(16,28);
 cprintf("H   H");
 gotoxy(16,29);
 cprintf("H   H");
 gotoxy(16,30);
 cprintf("H   H");
 gotoxy(16,31);
 cprintf("H   H");
 gotoxy(16,32);
 cprintf("H   H");

 gotoxy(22,22);
 cprintf("  A  ");
 gotoxy(22,23);
 cprintf(" A A ");
 gotoxy(22,24);
 cprintf("A   A");
 gotoxy(22,25);
 cprintf("AAAAA");
 gotoxy(22,26);
 cprintf("A   A");
 gotoxy(22,27);
 cprintf("A   A");
 gotoxy(22,28);
 cprintf("A   A");
 gotoxy(22,29);
 cprintf("A   A");
 gotoxy(22,30);
 cprintf("A   A");
 gotoxy(22,31);
 cprintf("A   A");
 gotoxy(22,32);
 cprintf("A   A");

 gotoxy(28,22);
 cprintf("N   N");
 gotoxy(28,23);
 cprintf("N   N");
 gotoxy(28,24);
 cprintf("NN  N");
 gotoxy(28,25);
 cprintf("NN  N");
 gotoxy(28,26);
 cprintf("N N N");
 gotoxy(28,27);
 cprintf("N N N");
 gotoxy(28,28);
 cprintf("N N N");
 gotoxy(28,29);
 cprintf("N  NN");
 gotoxy(28,30);
 cprintf("N  NN");
 gotoxy(28,31);
 cprintf("N   N");
 gotoxy(28,32);
 cprintf("N   N");

 gotoxy(34,22);
 cprintf("K     K");
 gotoxy(34,23);
 cprintf("K    K");
 gotoxy(34,24);
 cprintf("K   K");
 gotoxy(34,25);
 cprintf("K  K");
 gotoxy(34,26);
 cprintf("K K");
 gotoxy(34,27);
 cprintf("KK");
 gotoxy(34,28);
 cprintf("K K");
 gotoxy(34,29);
 cprintf("K  K");
 gotoxy(34,30);
 cprintf("K   K");
 gotoxy(34,31);
 cprintf("K    K");
 gotoxy(34,32);
 cprintf("K     K");


 gotoxy(44,22);
 cprintf("Y   Y");
 gotoxy(44,23);
 cprintf("Y   Y");
 gotoxy(44,24);
 cprintf("Y   Y");
 gotoxy(44,25);
 cprintf("Y   Y");
 gotoxy(44,26);
 cprintf("Y   Y");
 gotoxy(44,27);
 cprintf(" YYY ");
 gotoxy(44,28);
 cprintf("  Y  ");
 gotoxy(44,29);
 cprintf("  Y  ");
 gotoxy(44,30);
 cprintf("  Y  ");
 gotoxy(44,31);
 cprintf("  Y  ");
 gotoxy(44,32);
 cprintf("  Y  ");

 gotoxy(50,22);
 cprintf("OOOOO");
 gotoxy(50,23);
 cprintf("O   O");
 gotoxy(50,24);
 cprintf("O   O");
 gotoxy(50,25);
 cprintf("O   O");
 gotoxy(50,26);
 cprintf("O   O");
 gotoxy(50,27);
 cprintf("O   O");
 gotoxy(50,28);
 cprintf("O   O");
 gotoxy(50,29);
 cprintf("O   O");
 gotoxy(50,30);
 cprintf("O   O");
 gotoxy(50,31);
 cprintf("O   O");
 gotoxy(50,32);
 cprintf("OOOOO");

 gotoxy(56,22);
 cprintf("U   U");
 gotoxy(56,23);
 cprintf("U   U");
 gotoxy(56,24);
 cprintf("U   U");
 gotoxy(56,25);
 cprintf("U   U");
 gotoxy(56,26);
 cprintf("U   U");
 gotoxy(56,27);
 cprintf("U   U");
 gotoxy(56,28);
 cprintf("U   U");
 gotoxy(56,29);
 cprintf("U   U");
 gotoxy(56,30);
 cprintf("U   U");
 gotoxy(56,31);
 cprintf("U   U");
 gotoxy(56,32);
 cprintf("UUUUU");
 }



