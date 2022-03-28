#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n==1)
        return 1;
    return n+sum(n-1);
}

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Sum upto "<<num<<" is "<<sum(num);
    return 0;
}