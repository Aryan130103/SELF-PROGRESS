#include<iostream>
#include<math.h>
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

//Decimal to Binary

/*int main()
{
    int s=0,n,r,c=0;
    cin>>n;
    while(n!=0)
    {
        r=n&1;
        s=((r*pow(10,c))+s);
        n=n>>1;
        c++;
    }
    cout<<s;
}*/

//Decimal to Binary(negative number)

int main()
{
    int s=0,n,r,c=0,a;
    cin>>n;
    if(n>0)
        n=-n;
    a=~n;
    while(a!=0)
    {
        r=a&1;
        s=((r*pow(10,c))+s);
        a=a>>1;
        c++;
    }
    s=s+1;
    cout<<s;
}

//Binary to Decimal

/*int main()
{
    int s=0,n,bit,c=0;
    cin>>n;
    while(n!=0)
    {
        bit=n%10;
        if(bit==1){
            s=s+pow(2,c);
        }
        n=n/10;
        c++;
    }
    cout<<s;
}*/
