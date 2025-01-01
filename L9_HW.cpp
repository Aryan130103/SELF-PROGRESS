//Array
#include <iostream>
using namespace std;

//initialize the array with any value by using fill_n
/*
int main()
{
   int ar[10];
   fill_n(ar,10,-21);
   for (int i = 0; i <= 10; i++)
   {
      cout << ar[i] << endl;
   }
    return 0;
}
*/

//Sum of elements of an array
/*
int sum(int ar[],int n)
{
    int i,s=0;
    for(i=0;i<n;i++){
        s=s+ar[i];
    }
    return s;
}
int main()
{
   int ar[4];
   for(int i=0;i<4;i++){
       cin>>ar[i];
   }
   cout <<sum(ar,4)  << endl;

    return 0;
}
*/

//reversing an array
/*
void reverse(int a[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
    }
}
int main()
{
    int ar[4]={1,4,3,5};
    reverse(ar,4);
    for(int i=0;i<4;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}
*/
