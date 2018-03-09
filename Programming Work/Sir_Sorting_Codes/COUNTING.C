# include <stdio.h>
# include <conio.h>

# define sz 100

void main()
{
int arr1[sz];
int arr2[sz];
int num=0;
int temp[sz];
int i;
int ch;
clrscr();
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
printf("UNSORTED DATA :");
for(i = 1; i <= num; i++)
printf("   %d", arr1[i]);

printf("\n\nSORTED DATA :");
for(i = 1; i <= num; i++)
printf("   %d", arr2[i]);
getch();
}