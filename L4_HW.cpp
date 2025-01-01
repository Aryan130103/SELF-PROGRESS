#include<iostream>
using namespace std;

//Pattern-1

/*int main()
{
    int i=1,n,j;
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//Pattern-2

/*int main()
{
    int i=1,n,j,a;
    cin>>n;
    while(i<=n)
    {
        j=1,a=n;
        while(a>=j)
        {
            cout<<a;
            a--;
        }
        cout<<endl;
        i++;
    }
}*/

//Pattern-3

/*int main()
{
    int i=1,n,j,a=1;
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<a;
            a++;
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//Pattern-4

/*int main()
{
    int i=1,n,j;
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout<<"*"<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//Pattern-5

/*int main()
{
    int i=1,n,j,a;
    cin>>n;
    while(i<=n)
    {
        j=1,a=i;
        while(j<=i)
        {
            cout<<a<<" ";
            a++;
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//Pattern-6[homework:patter 5 second method]

/*int main()
{
    int i=1,n,j;
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout<<j+i-1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//Pattern-7

/*int main()
{
    int i=1,n,j,a;
    cin>>n;
    while(i<=n)
    {
        j=1,a=i;
        while(j<=i)
        {
            cout<<a<<" ";   //use i-j+1 instead of a;
            a--;
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//Pattern-8[ALPHA]

/*int main()
{
    char i='A',n,j;
    cin>>n;
    while(i<=n)
    {
        j='A';
        while(j<=n)
        {
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//Pattern-9[same as 8]

/*int main()
{
    int i=1,n,j;
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            char ch='A'+i-1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//Pattern-10[alpha]

/*int main()
{
    int i=1,n,j;
    char ch='A';
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<ch<<" ";
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }
}*/

//Pattern-11[alpha]

/*int main()
{
    int i=1,n,j;

    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//Pattern-12[alpha]

/*int main()
{
    int i=1,n,j;

    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            char ch='A'+n-i+j-1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//Pattern-13[space]

/*int main()
{
    int i=1,n,j,k;

    cin>>n;
    while(i<=n)
    {
       k=n-i;
       while(k)
       {
            cout<<" ";
            k--;
       }
       j=1;
       while(j<=i)
       {
           cout<<"*";
           j++;
       }
       cout<<endl;
        i++;
    }
}*/

//Pattern-14[space]

/*int main()
{
    int i=1,n,j,k;

    cin>>n;
    while(i<=n)
    {
       k=i-1;
       while(k)
       {
            cout<<" ";
            k--;
       }
       j=n;
       while(j>=i)
       {
           cout<<"*";
           j--;
       }
       cout<<endl;
        i++;
    }
}*/

//Pattern-15[Homework]

/*int main()
{
    int i=1,n,j;
    cin>>n;
    while(i<=n)
    {
        j=n;
        while(j>=i)
        {
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
}*/

//Pattern-16[space]

/*int main()
{
    int i=1,n,j,k;

    cin>>n;
    while(i<=n)
    {
       k=n-i;
       while(k)
       {
            cout<<" ";
            k--;
       }
       j=1;
       while(j<=i)
       {
           cout<<i;
           j++;
       }
       cout<<endl;
        i++;
    }
}*/

//Pattern-18[space:hard]

/*int main()
{
    int i=1,n,j,k;

    cin>>n;
    while(i<=n)
    {
       k=i-1;
       while(k)
       {
            cout<<" ";
            k--;
       }
       j=i;
       while(j<=n)
       {
           cout<<j;
           j++;
       }
       cout<<endl;
        i++;
    }
}*/


//Pattern-19[practice]

/*int main()
{
    int i=1,j,n;
    cin>>n;
    while(i<=n)
    {
        j=n;
        while(j>=i)
        {
            cout<<n-j+1;
            j--;
        }
        cout<<endl;
        i++;
    }
}*/

//Pattern-20[space]

/*int main()
{
    int i=1,n,j,k,a;
    a=1;
    cin>>n;
    while(i<=n)
    {
       k=n-i;
       while(k)
       {
            cout<<" ";
            k--;
       }
       j=1;
       while(j<=i)
       {

           cout<<a;
           a++;
           j++;
       }
       cout<<endl;
        i++;
    }
}*/

//Pattern-21[3 while pyramid]

/*int main()
{
    int i=1,n,j,k,a;
    cin>>n;
    while(i<=n)
    {
       k=n-i;
       while(k)
       {
            cout<<" ";
            k--;
       }
       j=1;
       while(j<=i)
       {

           cout<<j;
           j++;
       }
       a=i-1;
       while(a)
       {
           cout<<a;
           a--;
       }
       cout<<endl;
        i++;
    }
}*/

//Pattern-22[star pyramid (2 while)]

/*int main()
{
    int i=1,n,j,k;
    cin>>n;
    while(i<=n)
    {
       k=n-i;
       while(k)
       {
            cout<<" ";
            k--;
       }
       j=1;
       while(j<=(2*i-1))
       {

           cout<<"*";
           j++;
       }
       cout<<endl;
        i++;
    }
}*/


//Pattern-23[dabangg pattern]

int main()
{
    int i=1,n,j,k,a;
    cin>>n;
    while(i<=n)
    {
       k=1;
       while(k<=(n-i+1))
       {
            cout<<k;
            k++;
       }
       j=1;
       while(j<=(2*i-2))
       {

           cout<<"*";
           j++;
       }
       a=n;
       while(a>=i)
       {
            cout<<a-i+1;
            a--;
       }
       cout<<endl;
        i++;
    }
}
