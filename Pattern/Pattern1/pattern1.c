
#include<iostream>
#include<cmath>
using namespace std;

void pattern(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
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
