#include <iostream>
using namespace std;

// check for a string to be palindrome excluding special character
string valid(string x)
{
    string t;
    for(int i=0;i<x.length();i++)
    {
        if((x[i]>='a' && x[i]<='z')||(x[i]>='A'&& x[i]<='Z')||(x[i]>='0'&& x[i]<='9'))
        t+=x[i];
    }
    return t;
}

int palin(string x,int n)
{
    int s=0,e=n-1;
    while(s<=e)
    {
        if(x[s]!=x[e])
            return 0;
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int main() {
    string x;
    cin>>x;
    string temp=valid(x);
    cout<<palin(temp,temp.length())<<endl;

    return 0;
}

