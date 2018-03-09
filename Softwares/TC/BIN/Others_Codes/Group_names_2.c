#include<stdio.h>
#include<conio.h>
#include <windows.h>
int main()
{	
	HANDLE hConsole;
	hConsole = GetStdHandle (STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute
	(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	
    printf("Project Name :-""\t");
    
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	
    printf("Comparative Study Over Sorting Algorithms""\n");
    
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	
	printf("Group number :-""\t");
    
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	
	printf("2""\n");
    
	
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	printf("Members :-""\t");
    
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	
	printf("7""\n");
    
	
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	printf("Names of members :-");
    
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	
	printf("1.MD Rameez Raja""\n\t\t"" 2.Manish Kumar Gupta""\n\t\t"" 3.Arup Shngha""\n\t\t"" 4.Imran Ansari""\n\t\t"" 5.Sujoya Das""\n\t\t"" 6.Swarna Basu""\n\t\t"" 7.Sarita Chaurasia""\n");
 	
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	printf("Lead By :-""\t");
 	
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	 
	printf("MD Rameez Raja""\n");
	
	
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	printf("Under By :-""\t");
	
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	
	printf("Toffic Sir""\n");
	
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	
	printf("Front End :-""\t");
	
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	
	printf("C""\n");
	
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	
	printf("Back End :-""\t");
	
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	
	printf("No such data base ; Random input from the users.""\n");
	
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	
	printf("Project type :-""\t");
	
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	
	printf("Analytical Project.""\n");
	
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	
	printf("Project Objective :-");
	
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	
	printf("Study the Complexity for sorting algorithms.""\n");
	
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	
	printf("Project Goal :-""\t");
	
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	
	printf("If possible ; proposed an algorithm which is best sorting algorithm according to complexity.""\n");
	getch();
	return 0;
}