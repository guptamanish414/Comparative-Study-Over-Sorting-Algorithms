// February 2006 using excellent code::blocks IDE with mingw
// C++ Code for changing colors of text in the console window
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{

	HANDLE hConsole;
	hConsole = GetStdHandle (STD_OUTPUT_HANDLE);

// Use the three primary colors for mixing any other color.
// Use FOREGROUND_INTENSITY for brighter colors.
	SetConsoleTextAttribute
	(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout << "Bright red text\n";

	SetConsoleTextAttribute
	(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << "Bright blue text\n";

	SetConsoleTextAttribute
	(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE );
			cout << "Back to normal white text\n";

// Wait for user pressing key before exiting
// Gives them a chance to see the output
			cout << "\n\nPress any key to exit program.....";
			cin.get();

		return 0;
}

