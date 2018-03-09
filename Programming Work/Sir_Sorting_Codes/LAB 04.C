# include <iostream.h>
# include <stdio.h>
# include <conio.h>

# define sz 100

class Csort
{
	int arr1[sz];
	int arr2[sz];
	int num;
public:
	Csort();
	void getdata();
	void uppercase();
	void lowercase();
	void countsort();
	void display1();
	void display2();
};

Csort::Csort()
{
num = 0;
arr1[sz] = 0;
arr2[sz] = 0;
}

void Csort::getdata()
{
int ch;

cout<<"TO CHECK COUNTSORT YOU HAVE TWO OPTION :";
cout<<"\n\n\t1. USE UPPERCASE CHARACTER\n\t2. USE LOWERCASE CHARACTER";
cout<<"\n\nENTER YOUR CHOICE : ";
cin>>ch;

	switch(ch)
		{
		case 1:
			uppercase();
			break;
		case 2:
			lowercase();
			break;
		default:
			_setcursortype(_NOCURSOR);
			cout<<"\n\n\n\n\n\n\t\t\t\tINVALID INPUT !!!";
			cout<<"\n\t\t\tUNESPECTED ERROR CODE : "<<stderr;
		}
}

void Csort::uppercase()
{
clrscr();
int i;
char ch;

cout<<"HOW MANY CHARACTERS YOU WANT TO INPUT : ";
cin>>num;
cout<<"\n\n";

	for(i = 1; i <= num; i++)
	{
	cout<<"ENTER CHARACTER : ";
	cin>>ch;
	arr1[i] = ch - 64;
	}
countsort();
display1();
}

void Csort::lowercase()
{
clrscr();
int i;
char ch;

cout<<"HOW MANY CHARACTERS YOU WANT TO INPUT : ";
cin>>num;
cout<<"\n\n";

	for(i = 1; i <= num; i++)
	{
	cout<<"ENTER CHARACTER : ";
	cin>>ch;
	arr1[i] = ch - 96;
	}
countsort();
display2();
}

void Csort::countsort()
{
int i;
int temp[sz];

	for(i = 1; i <= 27; i++)
	{
		temp[i] = 0;
	}

	for(i = 1; i <= num; i++)
	{
		temp[arr1[i]] = temp[arr1[i]] + 1;
	}

	for(i = 2;i <= 27; i++)
	{
		temp[i] = temp[i] + temp[i-1];
	}

	for(i = num;i >= 1; i--)
	{
		arr2[temp[arr1[i]]] = arr1[i];
		temp[arr1[i]] = temp[arr1[i]] - 1;
	}
}

void Csort::display1()
{
clrscr();
int i;
_setcursortype(_NOCURSOR);

cout<<"UNSORTED DATA :";
for(i = 1; i <= num; i++)
printf("   %c", arr1[i]+64);

cout<<"\n\nSORTED DATA :";
for(i = 1; i <= num; i++)
printf("   %c", arr2[i]+64);
}

void Csort::display2()
{
clrscr();
int i;
_setcursortype(_NOCURSOR);

cout<<"UNSORTED DATA :";
for(i = 1; i <= num; i++)
printf("  %c", arr1[i]+96);

cout<<"\n\nSORTED DATA :";
for(i = 1; i <= num; i++)
printf("  %c", arr2[i]+96);
}

void main()
{
clrscr();
textmode(C80);
Csort C;
C.getdata();
getch();
}