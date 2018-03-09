#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<malloc.h>
#include<string.h>
void main()            /*PROGRAM TO CREATE A LINEAR LINKLIST USING BALANCE*/
{
struct s{
int a,ac;
struct s *n;
float bs;
char name[30];
}*p,*q;
int i,v,n1,ac1;
float bs1;
char s1[30];
clrscr();
p=NULL;
printf("How many Member");
scanf("%d",&n1);
for(i=0;i<n1;i++)
{
printf("Enter the Value of ACCOUNT,BALANCE,&NAME\n");
scanf("%d%f%s",&ac1,&bs1,s1);
if(p==NULL)
{
p=(struct s *)malloc(sizeof(struct s));
q=p;
}
else
{
q->n=(struct s *)malloc(sizeof(struct s));
q=q->n;
}
q->ac=ac1;
q->bs=bs1;
strcpy(q->name,s1);
q->n=NULL;
}
while(p!=NULL)
{
if(p->bs<1000)
printf("%d\t%s\n",p->ac,p->name);
p=p->n;
}
getch();
}