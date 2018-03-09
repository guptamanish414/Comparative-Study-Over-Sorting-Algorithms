# include <stdio.h>
# include <malloc.h>
#include<conio.h>
struct link
{
	int info;
	struct link *next;
};

int i,j,temp,k;
int count1,count2,count3,count4,count5;
struct link *start = NULL; /* Shows empty list */

void creat_link_list (struct link *,int);
void display (struct link *,int);
//void sort(struct link *,int);
void creat_link_list (struct link *node,int nos)
{
	for(i=0;i<nos;i++)
	{
		printf("\n Your input elements: %d :",i+1);
		scanf("%d",&node->info);
		node->next = (struct link* ) malloc (sizeof (struct link));
		node = node->next;
		node->next = start;
	}
/*
void sort(struct link *node,int nos)
	for(i=0;i<nos;i++)
	{
		if(node->info<10)
		{
		count1++;
		if(node->info>(node-1)->info)
			{
			node->next = (struct link* ) malloc (sizeof (struct link1));
			node = node->next;
			node->next = start;
			break;
			}
		else
			{
			for(j=count1;j>0;j--)
				{
				temp=node-1->info;
				node-1->info=node->info;
				node->info=temp;
				node->next = (struct link* ) malloc (sizeof (struct link1));
				node = node->next;
				node->next = start;
				}
			 }
			}
		if(node->info<100 && node->info>9)
			{
			count2++;
			if(node->info>(node-1)->info)
					{
					node->next = (struct link* ) malloc (sizeof (struct link2));
					node = node->next;
					node->next = start;
					break;
					}
				else
					{
					for(j=count2;j>0;j--)
					{
					temp=node-1->info;
					node-1->info=node->info;
					node->info=temp;
					node->next = (struct link* ) malloc (sizeof (struct link2));
					node = node->next;
					node->next = start;
					}
					}
			}
		if(if(node->info<1000 && node->info>99)
			{
			count3++;
			if(node->info>(node-1)->info)
					{
					node->next = (struct link* ) malloc (sizeof (struct link3));
					node = node->next;
					node->next = start;
					break;
					}
				else
					{
					for(j=count3;j>0;j--)
					{
					temp=node-1->info;
					node-1->info=node->info;
					node->info=temp;
					node->next = (struct link* ) malloc (sizeof (struct link3));
					node = node->next;
					node->next = start;
					}
					}
			}
		if(if(node->info<10000 && node->info>999)
			{
			count4++;
			if(node->info>(node-1)->info)
					{
					node->next = (struct link* ) malloc (sizeof (struct link4));
					node = node->next;
					node->next = start;
					break;
					}
				else
					{
					for(j=count4;j>0;j--)
					{
					temp=node-1->info;
					node-1->info=node->info;
					node->info=temp;
					node->next = (struct link* ) malloc (sizeof (struct link4));
					node = node->next;
					node->next = start;
					}
					}
			}
		if(if(node->info<32767 && node->info>9999)
			{
			count5++;
			if(node->info>(node-1)->info)
					{
					node->next = (struct link* ) malloc (sizeof (struct link5));
					node = node->next;
					node->next = start;
					break;
					}
				else
					{
					for(j=count5;j>0;j--)
					{
					temp=node-1->info;
					node-1->info=node->info;
					node->info=temp;
					node->next = (struct link* ) malloc (sizeof (struct link5));
					node = node->next;
					node->next = start;
					}
					}
			}

	}

	*/
}

/* Display the list */

void  display(struct link *node,int nos)
{
	printf("\n Shorted list is:\n");
	for(i=0;i<nos;i++)
	{
		printf("\nElements no %d is %5d",i+1, node->info);
		node = node->next;
	}
}

/* Function main */

void main()
{
	int ele;
	struct link *node = (struct link *)malloc(sizeof(struct link));
	clrscr();
	printf("Enter no of elements:");
	scanf("%d",&ele);
	creat_link_list(node,ele);
	//sort(node,ele);
	display(node,ele);
	getch();
}


