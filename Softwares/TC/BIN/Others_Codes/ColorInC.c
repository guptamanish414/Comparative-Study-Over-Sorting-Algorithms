// C++ Code for changing colors of text in the console window
#include <stdio.h>
#include <windows.h>
using namespace std;
int main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle (STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute
	(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("Bright red text\n");

	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			printf("Bright blue text\n");

	SetConsoleTextAttribute
	(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE );
			printf("Back to normal white text\n");
	
	return 0;
}