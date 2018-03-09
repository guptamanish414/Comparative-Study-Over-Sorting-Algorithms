#include<stdio.h>
#include<conio.h>
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
main()
{
int a[10],i,n;
clrscr();
printf("Enter The number Of Elements\t: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nElement %d\t: ",i+1);
scanf("%d",&a[i]);
}
printf("\nArrayBefor Sorting : ");
for(i=0;i<n;i++)
printf("%5d",a[i]);
shellsort(a,n);
printf("\nArray After Sorting : ");
for(i=0;i<n;i++)
printf("%5d",a[i]);
getch();
return 0;
}
