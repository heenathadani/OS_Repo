#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "\nEnter Size of Array : ";
    cin >> n;
    int arr[n];
    cout << "\nEnter " << n << " Elements of Array : ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int temp;
    for(int i = 0; i < n-1; i++)
    {
        if(i % 2 == 0 && arr[i] > arr[i+1])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        if(i % 2 != 0 && arr[i] < arr[i+1])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    cout << "Resultant Array : ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
