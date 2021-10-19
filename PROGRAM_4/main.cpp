#include<iostream>
using namespace std;
int minmax__(int a[],int n)
{
 int min_,max_,i;
 min_=max_=a[0];
 for(i = 1; i < n; i++)
 {
     if(min_ > a[i])
     {
         min_ = a[i];
     }
     if(max_ < a[i])
     {
         max_ = a[i];
     }
 }
 printf("Minimum of array is : %d",min_);
 printf("\nMaximum of array is : %d",max_);
}

int main()
{
 int i,n;
 cout << "\nEnter size of the array : ";
 cin >> n;
 int a[n];
 cout << "\nEnter elements of array : ";
 for(i = 0; i < n; i++)
 {
     cin >> a[i];
 }
 minmax__(a,n);
 return 0;
}

