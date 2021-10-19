#include <iostream>

using namespace std;

int main()
{
    int s;
    cout << "\nEnter Size of Square Matrices : ";
    cin >> s;
    int sub[s][s];
    int mat1[s][s];
    int mat2[s][s];
    cout << "\nEnter " << s*s << " Elements of the Matrix 1 : ";
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "\nEnter " << s*s << " Elements of the Matrix 2 : ";
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            cin >> mat2[i][j];
        }
    }
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            sub[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    cout << "\n Difference of 2 Matrices : ";
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            cout << sub[i][j];
        }
        cout<<endl;
    }
    return 0;
}
