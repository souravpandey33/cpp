

#include<iostream>
#include<cmath>
using namespace std;

void pattern(int n)
{
    int i,j;
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            cout<<i;
        }
        cout<<endl;
    }
}

int main()
{
    int x;
    cout<<"Enter Size : "<<endl;
    cin>>x;
    pattern(x);
    return 0;
}
