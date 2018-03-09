#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<alloc.h>
#define MAX 10
#define MAXARRAY 100
#define sz 100
void login();
void frame();
void heading();
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
 	cprintf("                                                                              ");
 	gotoxy(2,8);
 	cprintf(" COMPARATIVE STUDY & IMPLEMENTATION OF CONVENTIONAL SORTING ALGORITHMS        ");
 	gotoxy(2,9);
 	cprintf("                AND DEVOLOPMENT OF NEW SORTING ALGORITHM                      ");
 	textcolor(4);
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
 	textcolor(WHITE);
 	cprintf(" ");
 	cscanf("%d",&j);
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
 		delay(1000);
 		thank_you();
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
thank_you();
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
digit();   // call digit sort
break;
}   // switch case close
gotoxy(10,40);
cprintf("\n\n Press 0 for exit and any key for continue..........");
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
printf("HOW MANY NUMBER YOU WANT TO INPUT : ");
scanf("%d",&num);
printf("\n\n");

	for(i = 1; i <= num; i++)
	{
	printf("ENTER NUMBER : ");
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
printf("\nUNSORTED DATA :");
for(i = 1; i <= num; i++)
printf("   %d", arr1[i]);

printf("\n\nSORTED DATA :");
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
	printf("\n Enter no of Elements:");
	scanf("%d",&no);
	printf("\n Enter the Elements:\n");
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

	printf("\n Sorted list as follows\n");

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
	int arrin[20],arrout[20];
	int * b1,* b2,* b3,* b4,* b5,*b6,*b7,*b8,*b9,*b10;
	int count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count10=0;
	int n,no,count,i,j,k=0;
	clrscr();
	printf("\n\t\t\t\tDIGIT SORT");
	printf("\n\t\t\t\t**********\n\n\n");
	printf("\n\nENTER THE NUMBER OF ELEMENTS:");
	scanf("%d",&n);
	b1=(int *) malloc(n *sizeof(int));
	b2=(int *) malloc(n *sizeof(int));
	b3=(int *) malloc(n *sizeof(int));
	b4=(int *) malloc(n *sizeof(int));
	b5=(int *) malloc(n *sizeof(int));
	b6=(int *) malloc(n *sizeof(int));
	b7=(int *) malloc(n *sizeof(int));
	b8=(int *) malloc(n *sizeof(int));
	b9=(int *) malloc(n *sizeof(int));
	b10=(int *) malloc(n *sizeof(int));
		printf("\nENTER THE INPUT ELEMENTS:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arrin[i]);
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

		if(count==1 && arrin[i]>0)
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
		else if(count==2 && arrin[i]>0)
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
		else if(count==3 && arrin[i]>0)
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
		else if(count==4 && arrin[i]>0)
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
		else if(count==5 && arrin[i]>0)
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
		else if(count==1 && arrin[i]<0)
		{

			b6[count6]=arrin[i];

			for(j=count1;j>0;j--)
			{
				if(b6[j-1]<=b6[j])
				{
					break;
				}
				else
				{
					int temp=b6[j-1];
					b6[j-1]=b6[j];
					b6[j]=temp;
				 }

			}
			count6++;
		}
		else if(count==2 && arrin[i]<0)
		{
			b7[count7]=arrin[i];

			for(j=count7;j>0;j--)
			{
				if(b7[j-1]<=b7[j])
				{
					break;
				}
				else
				{
					int temp=b7[j-1];
					b7[j-1]=b7[j];
					b2[j]=temp;
				 }

			}
			count7++;
		}
		else if(count==3 && arrin[i]<0)
		{
			b8[count8]=arrin[i];

			for(j=count8;j>0;j--)
			{
				if(b8[j-1]<=b8[j])
				{
					break;
				}
				else
				{
					int temp=b8[j-1];
					b8[j-1]=b8[j];
					b8[j]=temp;
				 }

			}
			count8++;
		}
		else if(count==4 && arrin[i]<0)
		{
			b9[count9]=arrin[i];

			for(j=count9;j>0;j--)
			{
				if(b9[j-1]<=b9[j])
				{
					break;
				}
				else
				{
					int temp=b9[j-1];
					b9[j-1]=b9[j];
					b9[j]=temp;
				 }

			}
			count9++;
		}
		else if(count==5 && arrin[i]<0)
		{
			b10[count10]=arrin[i];

			for(j=count10;j>0;j--)
			{
				if(b10[j-1]<=b10[j])
				{
					break;
				}
				else
				{
					int temp=b10[j-1];
					b10[j-1]=b10[j];
					b10[j]=temp;
				 }

			}
			count10++;
		}
	}
	
	for(j=0;j<count10;j++)
	arrout[k++]=b10[j];
	for(j=0;j<count9;j++)
	arrout[k++]=b9[j];
	for(j=0;j<count8;j++)
	arrout[k++]=b8[j];
	for(j=0;j<count7;j++)
	arrout[k++]=b7[j];
	for(j=0;j<count6;j++)
	arrout[k++]=b6[j];
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
}                     //digit sort close


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

 getch();
 }



