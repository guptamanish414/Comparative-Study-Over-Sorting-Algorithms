//To select sotring algorithms Using switch case.
#include<stdio.h>
#include<conio.h>
#include <windows.h>
using namespace std;
int main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle (STD_OUTPUT_HANDLE);

    int s,c;
    SetConsoleTextAttribute
	(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	printf("\nPress 1 for Bubble sort""\t");
    printf("\nPress 2 for Bucket sort""\t");
	printf("\nPress 3 for Cocktail sort""\t");
	printf("\nPress 4 for Counting sort""\t");
	printf("\nPress 5 for Heap sort""\t");
	printf("\nPress 6 for Insertion sort""\t");
	printf("\nPress 7 for Merge sort""\t");
	printf("\nPress 8 for Quick sort""\t");
	printf("\nPress 9 for Radix sort""\t");
	printf("\nPress 10 for Selection sort""\t");
	printf("\nPress 11 for Shell sort""\t");
	printf("\nPress 12 for Comb sort""\t");
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE );
	printf("\nEnter a choice:");
	scanf("%d",&s);
	switch(s)
	{
	case 1: 
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	
	printf("Bubble sort\t\n");
	break;
	case 2:
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	 
	printf("Bucket sort\t\n");
	break;
	case 3:
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	 
	printf("Cocktail sort\t\n");
	break;
	case 4:
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	
	printf("Counting sort\t\n");
	break;
	case 5:
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	 
	printf("Heap sort\t\n");
	break;
	case 6:
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	 
	printf("Insertion sort\t\n");
	break;
	case 7:
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	 
	printf("Merge sort\t\n");
	break;
	case 8:
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	 
	printf("Quick sort\t\n");
	break;
	case 9:
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	 
	printf("Radix sort\t\n");
	break;
	case 10:
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	 
	printf("Selection sort\t\n");
	break;
	case 11:
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	 
	printf("Shell sort\t\n");
	break;
	case 12:
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	
	printf("Comb sort\t\n");
	break;
	default:
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE );
	
	printf("\nYou have enter the wrong choice\n");
	}
	getch();
	return 0;
}