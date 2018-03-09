#include <stdio.h>
#include<conio.h>
#include<alloc.h>
typedef struct node_t *node, node_t;
struct node_t { int v; node next; };

void sort(int *ar, int len)
{
node_t *all, head, shead, merged, *cur, *next, *stail;
int i;
all = (node_t*)malloc(sizeof(node_t)*len);
/* linkify */
for (i = 0; i <len; i++) {
all[i].v = ar[i];
all[i].next = all + i + 1;
}
all[len - 1].next = 0;
head.next = all;
shead.next = merged.next = 0;

while (head.next) {
/* take strand */
cur = &head;
stail = shead.next = head.next;

while (next = cur->next) {
if (next->v >= stail->v) {
cur->next = next->next;
stail = stail->next = next;
} else
cur = next;
}
stail->next = 0;

/* merge */
cur = merged.next;
next = shead.next;
stail = &merged;

/* while both lists contain elements, append the smaller one */
while (next && cur) {
if (next->v <= cur->v) {
stail = stail->next = next;
next = next->next;
} else {
stail = stail->next = cur;
cur = cur->next;
}
}
/* append the rest of the survivor to the end of merged */
stail->next = next ? next : cur;
}
cur = &merged;
len = 0;
while (cur = cur->next) ar[len++] = cur->v;
}

int main()
{
int x[] = {-2,0,-2,5,5,3,-1,-3,5,5,0,2,-4,4,2};
int i;
#define SIZE sizeof(x)/sizeof(int)
clrscr();
printf("before sort:");
for (i = 0; i < SIZE; i++) printf(" %3d", x[i]);

sort(x, sizeof(x)/sizeof(int));

printf("\nafter sort: ");
for (i = 0; i < SIZE; i++) printf(" %3d", x[i]);
printf("\n");
getch();
}