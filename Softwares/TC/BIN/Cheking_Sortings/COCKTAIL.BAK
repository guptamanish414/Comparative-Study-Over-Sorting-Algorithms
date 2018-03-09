//Cocktail sort
#include<stdio.h>
#include<conio.h>
#define MAX 10 

void main()
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
}