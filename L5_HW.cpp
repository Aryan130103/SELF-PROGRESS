//Fibonacci Series

#include<iostream>
using namespace std;

/*int main()
{
    int i,s=0,n,a=0,b=1;
    cin>>n;
    cout<<a<<" "<<b<<" ";

    for(i=1;i<=n;i++)
    {
        s=a+b;
        cout<<s<<" ";
        a=b;
        b=s;
    }
}*/

//Prime Number

/*int main()
{
    int i,s=1,n;
    cin>>n;

    for(i=2;i<n;i++)
    {
       if(n%i==0)
       {
            s=0;
            break;
       }
    }
    if(s==0)
        cout<<"Not Prime number"<<endl;
    else
        cout<<"Prime number"<<endl;
}*/

//Leetcode:Q1

/*int main()
{
    int n,s=0,p=1,c=0,a;
    cin>>n;
    a=n;
    while(a>0)
    {
        c++;
        a=a/10;
    }
    for(int i=1;i<=c;i++)
    {
        int r=n%10;
        s=s+r;
        p=p*r;
        n=n/10;
    }
    cout<<"Product: "<<p<<endl;
    cout<<"Sum: "<<s<<endl;
    cout<<"Difference: "<<p-s;
}*/

//Leetcode:Q2

int main()
{
    int n,c=0;
    cin>>n;
    while(n!=0)
    {
       if(n&1)
        c++;
        n=n>>1;
    }
    cout<<c;
}
