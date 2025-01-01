#include <iostream>
using namespace std;

//reverse of an array
/*
void reverse(int a[],int n,int p)
{
    int s=p+1,e=n-1;
    int temp=0;
        while(s<=e)
        {
            temp=a[s];
            a[s]=a[e];
            a[e]=temp;
            s++;
            e--;
        }

   //second method
   while(s<=e)
   {
        swap(a[s],a[e]);
        s++;
        e--;
   }

   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
}

int main()
{
   int a[6]={2,3,1,4,7,5};
   reverse(a,6,2);

    return 0;
}
*/

//move zero

void zero(int a[],int n)
{
    /*Method 2
    for(int k=1;k<n;k++)
    {
        bool x=false;
         for(int i=0;i<n;i++)
         {
             if(a[i]==0)
             {
             swap(a[i],a[i+1]);
             x=true;
             }
         }
         if(x==false)
         break;
    }
    */
    int k=0;
         for(int i=0;i<n;i++)
         {
             if(a[i]!=0)
             swap(a[i],a[k++]);
         }


    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
}

int main()
{
   int a[6]={1,0,3,0,4,0};
   zero(a,6);

    return 0;
}

