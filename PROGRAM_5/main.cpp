#include <iostream>
#include <string>
#define max_ 100

using namespace std;

int top,S[max_];

void push(char x)
{
    if(top == max_ - 1)
    {
        cout << "Stack Overflow";
    }
    else
    {
        S[++top]=x;
    }
}

void pop()
{
    cout << char(S[top--]) << " ";
}

int main()
{
    string str;
    int len = 0;
    cout << "\nEnter string to be reversed : ";
    getline(cin,str);
    len = str.size();
    int i;
    for(i=0;i<len;i++)
        push(str[i]);
    cout << "\nThe reversed string is : ";
    for(i = 0; i < len; i++)
        pop();
    return 0;
}
