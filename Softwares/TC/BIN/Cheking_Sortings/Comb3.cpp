//comb sort
#include < iostream >
using namespace std;
int newGap(int gap) {
  gap = (gap * 10) / 13;
  if (gap == 9 || gap == 10)
    gap = 11;
  if (gap < 1)
    gap = 1;
  return gap;
}
void combsort(int a[], int aSize) {
  int gap = aSize;
  for (;;) {
    gap = newGap(gap);
    bool swapped = false;
    for (int i = 0; i < aSize - gap; i++) {
      int j = i + gap;
      if (a[i] > a[j]) {
        std::swap(a[i], a[j]);
        swapped = true;
      }
    }
    if (gap == 1 && !swapped)
      break;
  }
}
int main ()
{
        int n;
        int *a;
        cout << "Please insert the number of elements to be sorted: ";
        cin >> n;       // The total number of elements
        a = (int *)calloc(n, sizeof(int));
        for(int i=0;i< n;i++)
        {
 
                cout << "Input " << i << " element: ";
                cin >>a[i]; // Adding the elements to the array
        }
        cout << "Unsorted list:" << endl;       // Displaying the unsorted array
        for(int i=0;i< n;i++)
        {
                cout << a[i] << " ";
        }
        combsort(a,n);
        cout << "nSorted list:" << endl;        // Display the sorted array
        for(int i=0;i < n;i++)
        {
                cout << a[i] << " ";
        }
        return 0;
}
 