#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"\nEnter Array Size : ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter " << n <<" Elements of Array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max = arr[0];
    int sec_max = arr[1];
    for(int i=0;i<n;i++)
    {
        if(arr[i] > max)
        {
            sec_max = max;
            max = arr[i];
        }
    }
    cout<<"\nSecond largest number in array : " << sec_max;
    return 0;
}
