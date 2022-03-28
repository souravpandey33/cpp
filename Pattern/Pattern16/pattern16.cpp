#include<iostream>
#include<cmath>

using namespace std;

void pattern(int n)
{
    int i,j;
    int k;
    for(i=-(n-1);i<=(n-1);i++)
    {
        for(k=1;k<=(n-1-i);k++)
            cout<<" ";
        for(j=-(n-1);j<=(n-1);j++)
        {
            if(abs(i)==(n-1) || abs(j)==(n-1))
            {
                cout<<"#";
            }
            else
                cout<<" ";
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