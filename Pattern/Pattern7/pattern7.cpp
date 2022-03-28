
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include<iostream>
#include<cmath>
using namespace std;

void pattern(int n)
{
    int i,j;
    for(i=-n;i<=n;i++)
    {
        for(j=1;j<=n-abs(i)+1;j++)
        {
            cout<<j<<" ";
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