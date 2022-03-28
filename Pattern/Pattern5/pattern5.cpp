
// 12345
// 1234
// 123
// 12
// 1

// 1
// 12
// 123
// 1234
// 12345

#include<iostream>
#include<cmath>
using namespace std;

void pattern(int n)
{
    int i,j;
    for(i=-n;i<=n;i++)
    {
        for(j=1;j<=abs(i);j++)
        {
            cout<<j;
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