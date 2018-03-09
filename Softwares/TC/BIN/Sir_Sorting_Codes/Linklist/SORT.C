#include <stdio.h> // The usual stdio.h, etc.
#include<time.h>
void PauseMsg(void); // Pause the screen display
void main(void) {
unsigned RandNbrs[1000]; // The list of random numbers
// will be generated here. Note:
// RandNbrs[0] is used as a sentinel
int MLLlinks[267]; // Used by MLLsort. Will use up to
// 10,000,000 + 2^24 + 1 of this
int Nbr2Sort; // Number of items to sort.
char Databuff[100]; // Buffer for user input (Assumes
// user does not abuse size)
int HeadBase, i, count;
unsigned NbrHeads, ShiftAmt, value;
unsigned ptr1, ptr2;
double Time1, Time2;
puts("\nStarting Multiple Link List Sort");
Time1 = (double)clock(); // Save time to 0.001 sec.
Time1 = Time1/(double)CLOCKS_PER_SEC;
RandNbrs[0] = 4294; // Sentinel for sort.
// Must be >= the largest
// number to be sorted.
HeadBase = Nbr2Sort + 1;
NbrHeads = 4; // Calculate how many list
ShiftAmt = 30; // heads and how many bit
while (NbrHeads < Nbr2Sort) { // positions to shift for
ShiftAmt--; // indexing.
NbrHeads <<= 1;
}
// Optional debug info
// printf("With %'d numbers to sort the calculated value for NbrHeads is %'d\n",
// Nbr2Sort, NbrHeads);
for (i = Nbr2Sort + NbrHeads; i >= HeadBase; i--)
MLLlinks[i] = 0; // Zero out the link heads. Note:
// If you are only going to run
// this routine once, you can take
// advantage of the built in
// initialization routines in C
// and ignore this step.
for (i = Nbr2Sort; i; i--) { // For all input numbers.
value = RandNbrs[i]; // Will calculate where it should
ptr1 = value; // go. Construct index.
ptr1 >>= ShiftAmt;
ptr1 += HeadBase;
// Search link list to see where
// to insert this element. Most of
// the time the new value will be
// the 1st in the list.
for (ptr2 = MLLlinks[ptr1]; RandNbrs[ptr2] < value;
ptr1 = ptr2, ptr2 = MLLlinks[ptr2]);
// Note: The average length of these link lists does not increase as
// "Nbr2Sort" increases. The processing time per sort element is
// a constant that is independent of "Nbr2Sort". Thus the algorithm
// runs in pure linear time and not something slower such as
// N*log(log(N)) time.
MLLlinks[ptr1] = i; // Insert location of new
MLLlinks[i] = ptr2; // value in link list.
}
Time2 = (double)clock();
Time2 = Time2/(double)CLOCKS_PER_SEC;
printf("\nThe time to sort %'d items via MLL Sort was %g seconds.\n",
Nbr2Sort, Time2 - Time1);
PauseMsg();
puts("\nDo you want to see the random numbers after they were sorted (Y or N)?");
gets(Databuff);
if (tolower(Databuff[0]) == 'y') {
count = 0;
ptr2 = Nbr2Sort + NbrHeads;
for (i = HeadBase; i <= ptr2; i++) {
for (ptr1 = MLLlinks[i]; ptr1; ptr1 = MLLlinks[ptr1]) {
count++;
printf("%4d) %'16u\n", count, RandNbrs[ptr1]);
if (!(count%20))
PauseMsg();
}
}
PauseMsg();
}
}
void PauseMsg(void) {
puts("\nPress RETURN to continue.");
gets(Databuff);
}
