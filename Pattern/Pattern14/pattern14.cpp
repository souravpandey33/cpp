#include<iostream>
#include<cmath>
using namespace std;

void pattern(int n)
{
    int i,j;
    for(i=-n;i<=n;i++)
    {
        for(j=-n;j<=n;j++)
        {
            if((abs(i)+abs(j))<=n-1)
                cout<<" ";
            else
                cout<<"#";
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