#include <iostream>
using namespace std;

// replace adjacent duplicates

void replace(string x)
{
    int s=0,e=x.size()-1;

    while(s<=e)
    {
        if(x[s]==x[s+1])
        {
            x.erase(s,2);
            s=0;
            e=x.size()-1;
        }
        else
        s++;   
    }
    cout<<x;
}

int main() 
{
    string x;
    cin>>x;

    replace(x);

    return 0;
}

