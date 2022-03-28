#include<bits/stdc++.h>
using namespace std;

bool power(int n,int k)
{
    if(n==1)
        return true;
    if(n<=0 || n%k!=0)
        return false;
    return power(n/k,k);
}

int main()
{
    int num;
    int k;
    cout<<"Enter the number to check : ";
    cin>>num;
    cout<<"Enter the number whose power you want to check : ";
    cin>>k;
    if(power(num,k))
        cout<<num<<" is a power of "<<k;
    else
        cout<<num<<" is not a power of "<<k;
    return 0;
}