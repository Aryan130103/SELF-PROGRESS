#include<iostream>
using namespace std;

//Reverse of an integer

/*int main()
{
    int s=0,n,r;
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        if((s>INT_MAX)||(s<INT_MIN/10))
        {
            cout<<"0";
            break;
        }
        s=s*10+r;
        n=n/10;

    }
    cout<<s;
}*/


//Power of 2

int main()
{
    int n,s,r;
    cin>>n;
    while(n>0)
    {
        r=n%2;
        s=r;
        n=n/2;
    }
    if (n==1)
        cout<<"true";
    else
        cout<<"false";
}
