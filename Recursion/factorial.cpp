#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==1 || n==0)
        return 1;
    return n*fact(n-1);
}

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is "<<fact(num);
    return 0;
}