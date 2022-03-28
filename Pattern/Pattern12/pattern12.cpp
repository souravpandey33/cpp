#include<iostream>
#include<cmath>
using namespace std;

void pattern(int n)
{
    int i,j;
    int k=1;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {   
            k=k+i;
            int l=k-1;
            for(j=1;j<=i;j++)
            {
                cout<<l;
                l--;
            }
        }
        else
        {
            for(j=1;j<=i;j++)
            { 
                cout<<k;
                k++;   
            }
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