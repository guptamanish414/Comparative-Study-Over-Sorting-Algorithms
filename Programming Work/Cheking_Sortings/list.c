#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 typedef struct node
	{
	 int info;
	 node *next;
	};
	node *temp;
	node *start=NULL;
	node *start1=NULL;
	node *start2=NULL;
	node *start3=NULL;
	node *start4=NULL;
	node *start5=NULL;
	node *final=NULL;
	node *temp1=NULL;

 void main()
 {
 int n,i,count,no;
 int index,count1=0,count2=0,count3=0,count4=0,count5=0;
 node *ptr1, *ptr2, *ptr3, *ptr4, *ptr5,*ptr;
 clrscr();

 printf("\nEnter the number of Elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int item;
		node *ptr=(node *)malloc(sizeof(node));
		printf("Enter %d number",i+1);
		scanf("%d",&item);
		ptr->info=item;
		ptr->next=NULL;

	}

printf("\n The elements before sorting are:");
ptr=start;
 while(ptr!=NULL)
{

	printf("%6d ",ptr->info);
	ptr=ptr->next;
}
temp=start;
 while(ptr->next!=NULL)
 {
 count=0;
 no=temp->info;

 do{
	  no=no/10;
	  count++;
	  }while(no!=0);
	  if(count==1)
	  {
		 count1=count1+1;
		 node *ptr1=(node*)malloc(sizeof(node));
		 ptr1 -> info=temp->info;
		 ptr1 -> next=NULL;
		  if (start1==NULL){
			 start1=ptr1;
			 }
			 else
				  {
					while(ptr1 -> next!=NULL){
					index=0;
					if(ptr1 -> info< temp->info){
					node *newptr1=(node*)malloc(sizeof(node));
					newptr1 -> info=temp->info;
					newptr1 -> next=ptr1 -> next;
					ptr1 ->next=newptr1;
					}
					else
					{

					 if(index==0){
					 node *newptr1=(node*)malloc(sizeof(node));
					 temp1=start1;
					 start1=newptr1;
					 newptr1->info=temp->info;
					 newptr1->next=temp1;


					 }
					 else
						{
						 node *newptr1=(node*)malloc(sizeof(node));
						 newptr1->info=no;
						 ptr1->next=newptr1;
						 newptr1->next=NULL;

						}
					 }
					}
				 }
			 }


	 /* else if(count==2)
	  {
		 count2=count2+1;
		 node *ptr2=(node*)malloc(sizeof(node));
		 ptr2 -> info=no;
		 ptr2 -> next=NULL;
		  if (start2==NULL){
			 start2=ptr2;
			 }
			 else
				  {
					while(ptr2 -> next!=NULL){
					if(ptr2 -> info< no){
						  count2++;
					node *newptr2=(node*)malloc(sizeof(node));
					newptr2 -> info=no;
					newptr2 -> next=ptr2 -> next;
					ptr2 ->next=newptr2;
					}
					else
					{
					 count2++;
					 node *newptr2=(node*)malloc(sizeof(node));
					 newptr2 ->info=no;
					 newptr2 ->next=ptr2;
					 }
					}
				 }
			 }
	 if(count==3)
	  {
		 count3=count3+1;
		 node *ptr3=(node*)malloc(sizeof(node));
		 ptr3 -> info=no;
		 ptr3 -> next=NULL;
		  if (start3==NULL){
			 start3=ptr3;
			 }
			 else
				  {
					while(ptr3 -> next!=NULL){
					if(ptr3 -> info< no){
						  count3++;
					node *newptr3=(node*)malloc(sizeof(node));
					newptr3 -> info=no;
					newptr3 -> next=ptr3 -> next;
					ptr3 ->next=newptr3;
					}
					else
					{
					 count3++;
					 node *newptr3=(node*)malloc(sizeof(node));
					 newptr3 ->info=no;
					 newptr3 ->next=ptr3;
					 }
					}
				 }
			 }

	 if(count==4)
	  {
		 count4=count4+1;
		 node *ptr4=(node*)malloc(sizeof(node));
		 ptr4 -> info=no;
		 ptr4 -> next=NULL;
		  if (start4==NULL){
			 start4=ptr4;
			 }
			 else
				  {
					while(ptr4 -> next!=NULL){
					if(ptr4 -> info< no){
						  count4++;
					node *newptr4=(node*)malloc(sizeof(node));
					newptr4 -> info=no;
					newptr4 -> next=ptr4 -> next;
					ptr4 ->next=newptr4;
					}
					else
					{
					 count4++;
					 node *newptr4=(node*)malloc(sizeof(node));
					 newptr4 ->info=no;
					 newptr4 ->next=ptr4;
					 }
					}
				 }
			 }

	 if(count==5)
	  {
		 count5=count5+1;
		 node *ptr5=(node*)malloc(sizeof(node));
		 ptr5 -> info=no;
		 ptr5 -> next=NULL;
		  if (start5==NULL){
			 start5=ptr5;
			 }
			 else
			 {
				while(ptr5 -> next!=NULL){
				if(ptr5 -> info< no){
					count5++;
					node *newptr5=(node*)malloc(sizeof(node));
					newptr5 -> info=no;
					newptr5 -> next=ptr5 -> next;
					ptr5 ->next=newptr5;
					}
					else
					{
					 count5++;
					 node *newptr5=(node*)malloc(sizeof(node));
					 newptr5 ->info=no;
					 newptr5 ->next=ptr5;
					 }
				 }
			  }
		  }
		*/ temp=temp->next;
	 }

node *final=(node *)malloc(sizeof(node));
ptr1=start;
 while(ptr1!=NULL)
{
	final->info=ptr1->info;
	ptr1=ptr1->next;
}
ptr2=start;
 while(ptr2!=NULL)
{
	final->info=ptr2->info;
	ptr2=ptr2->next;
}
ptr3=start;
 while(ptr3!=NULL)
{
	final->info=ptr3->info;
	ptr3=ptr3->next;
}
ptr4=start;
 while(ptr4!=NULL)
{
	final->info=ptr4->info;
	ptr4=ptr4->next;
}
ptr5=start;
 while(ptr5!=NULL)
{
	final->info=ptr5->info;
	ptr5=ptr5->next;
}
printf("\n Elements after sorting:\n ");
final=start;
 while(final!=NULL)
{

	printf("%6d ",final->info);
	final=final->next;
}

}

