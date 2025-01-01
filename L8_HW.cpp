#include <iostream>
using namespace std;

// Note count
/*
int main()
{
    int n,hundred,fifty,one,twenty;
    char x;
    cout<<"Enter an amount: "<<endl;
    cin>>n;
    cout<<"Enter h for hundred notes"<<endl;
    cout<<"Enter f for fifty notes"<<endl;
    cout<<"Enter t for twenty notes"<<endl;
    cout<<"Enter o for ones notes"<<endl;
    cin>>x;
    switch(x){
        case 'h': hundred=n/100;
                  cout<<"Hundred Notes: "<<hundred<<endl;
                  break;
        case 'f': fifty=n/50;
                  cout<<"Fifty Notes: "<<fifty<<endl;
                  break;
        case 't': twenty=n/20;
                  cout<<"Twenty Notes: "<<twenty<<endl;
                  break;
        case 'o': one=n/1;
                  cout<<"Ones Notes: "<<one<<endl;
                  break;
    }
    return 0;
}
*/

//Arithmetic Progression
/*
int AP(int n)
{
    return (3*n+7);
}

int main()
{
    int n;
    cout<<"enter a number: "<<endl;
    cin>>n;
    cout<<(AP(n))<<endl;
    return 0;
}
*/

//Number of bits in 2 numebrs
/*
int bits(int n)
{
    int r,c=0;
    while(n!=0)
    {
        r=n&1;
        if(r==1)
            c++;
        n=n>>1;
    }
    return c;
}

int main()
{
    int n,a,b,x;
    cout<<"Enter First number: "<<endl;
    cin>>a;
    cout<<"Enter Second number: "<<endl;
    cin>>b;
    x=bits(a)+bits(b);
    cout<<"Number of bits: "<<x<<endl;
    return 0;
}
*/

//nth fibonacci term
/*
void fibo(int n)
{
    int a=0,b=1,i=1,s=0;
    if(n==1)
        cout<<a;
    if(n==2)
        cout<<b;
    while(i<=n)
    {
       s=a+b;
       if(i==(n-2))
            cout<<s<<" ";
       a=b;
       b=s;
       i++;
    }
}

int main()
{
    int n;
    cout<<"Enter First number: "<<endl;
    cin>>n;
    fibo(n);
    return 0;
}
*/
