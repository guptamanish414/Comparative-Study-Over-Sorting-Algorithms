#include<conio.h>
#include<iostream.h>
class A
{
int a;
public:
void display1(int p)
{
a=p;
cout<<"Squre is(from base class)       :"<<a<<endl;
}
};
class B:public A
{
int a;
public:
void display(int p)
{
a=p;
cout<<"You entered(from derived class) :"<<a<<endl;
}
void display2(int q)
{
a=q;
cout<<"Qube is(from derived class)     :"<<a<<endl;
}
};
void main()
{
clrscr();
int x;
cout<<"\nEnter the no : ";
cin>>x;
B b1;
b1.display(x);
b1.display1(x*x);
b1.display2(x*x*x);
getch();
}
