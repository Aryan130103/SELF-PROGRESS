#include <iostream>
#include<math.h>
using namespace std;
/*
// Searching in an rotated array
#include <iostream>
using namespace std;

int pivot(int a[],int n)
{
    int s=0,e=n-1;
    int m=s+(e-s)/2;
    while(s<e)
    {
        if(a[m]>=a[0])
        {
            s=m+1;
        }
        else
            e=m;
        m=s+(e-s)/2;
    }
    return s;
}
int search(int a[],int n,int k)
{
    int s=0,e=n-1;
    int m=s+(e-s)/2;
    int x=pivot(a,n);

        if(a[x]<=k && k<=a[e])
        {
            s=x;
            m=s+(e-s)/2;
            while(s<=e)
            {
                if(k==a[m])
                    return m;
                else if(k<a[m])
                    e=m-1;
                else
                    s=m+1;
             m=s+(e-s)/2;
            }
        }
        else
        {
            e=x-1;
            m=s+(e-s)/2;
            while(s<=e)
            {
                if(k==a[m])
                    return m;
                else if(k<a[m])
                    e=m-1;
                else
                    s=m+1;
             m=s+(e-s)/2;
            }

        }
    return -1;
}
int main()
{
    int a[7]={5,6,7,0,1,3,4};
    cout<<"Element found at index : "<<search(a,7,7);
    return 0;
}
*/

//square root using binary search

int root(int a[],int n,int k)
{
    int s=0,e=n-1;
    int m=s+(e-s)/2;

    while(s<=e)
         {
            int square=a[m]*a[m];
            if(square==k)
                    return a[m];
            else if(square>k)
                    e=m-1;
            else
                    s=m+1;
             m=s+(e-s)/2;
          }
    return -1;
}
int main()
{
    int k;
    cout<<"enter the number: ";
    cin>>k;
    int a[k];
    int s=0;
    for(int i=1;i<=k;i++)
    {
        a[s]=i;
        s++;
    }

    cout<<"Sqaure root of "<<k<<" is: "<<root(a,k,k);
    return 0;
}
