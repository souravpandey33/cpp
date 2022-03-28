#include<iostream>
#include<cmath>
using namespace std;

void pattern(int n)
{
    int i,j;
    for(i=-(n-1);i<=(n-1);i++)
    {
        for(j=-(n-1);j<=(n-1);j++)
        {
            if(abs(i)>=abs(j))
                cout<<abs(i)+1;
            else
                cout<<abs(j)+1;           
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