#include <iostream>
using namespace std;
int main()
{
int i, size, x, pos;
int a[]={12, 64, 66, 65, 34};
size=sizeof(a)/sizeof(a[0]);
cout << "The array elements before deletion operation:\n";
for(i=0;i<size;i++)
cout << "a[" << i << "] = " << a[i] << "\n";
cout << "Enter the position from where you wish to delete the element: ";
cin >> pos;
cout << "The array elements after deletion operation: ";
for(i=pos-1;i<size;i++)
a[i]=a[i+1];
size = size - 1;
for(i=0;i<size;i++)
cout << "\na[" << i << "] = " << a[i];
return 0;
}
