//Shell Sort C Program
#include <stdio.h>

void shellsort(int A[],int max)
{
int stop,swap,limit,temp,k;
int x=(int)(max/2)-1;
while(x>0)
{
stop=0;
limit=max-x;
while(stop==0)
{
swap=0;
14.
for(k=0; kA[k+x])
16.{
temp=A[k];
A[k]=A[k+x];
A[k+x]=temp;
swap=k;
}
}
limit=swap-x;
if(swap==0)
stop=1;
}
x=(int)(x/2);
}
}
int main()
{

int i,ELEMENTS,X[100];
printf("Enter the number of elements to be sorted:");
scanf("%d",&ELEMENTS);
printf("Enter the elements to be sorted:\n");
for(i = 0; i < ELEMENTS; i++ ){
scanf("%d",&X[i]);
}
printf("Unsorted Array:\n");
for(i=0;i < ELEMENTS;i++)
printf("%d ",X[i]);

shellsort(X,ELEMENTS);
printf("\nSORTED ARRAY\n");
for(i=0;i < ELEMENTS;i++)
printf("%d ",X[i]);

printf("\n");
}
Output:

Enter the number of elements to be sorted: 5
Enter the elements to be sorted: 2 6 4 1 2
Unsorted Array: 2 6 4 1 2
SORTED ARRAY 2 1 4 2 6
