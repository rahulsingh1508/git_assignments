
#include <bits/stdc++.h>
using namespace std;

void printFibonacciNumbers(int n)
{
    int a =0,b=1;
    if (n<1)
        return 0;
    cout<<a<<" ";
    for (int i=1;i<n;i++) 
    {
        cout<<b<<" ";
        int next=a + b;
        a = b;
        b = next;
    }
}
 
int main()
{
    int n;
    cin>>n;
    printFibonacciNumbers(n);
    return 0;
}