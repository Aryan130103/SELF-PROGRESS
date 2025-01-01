#include <iostream>
using namespace std;

// replace space with'@40'

void replace(string x)
{
    int s=0,e=x.size(),c=0;;
    for(int i=0;i<e;i++)
    {
        if(x[i]==' ')
            c=c+2;
    }

    while(s<=e+c)
    {
        if(x[s]==' ')
        {
            x.insert(s,"@40");
            x.erase(s+3,1);
        }
        else
        s++;
    }
    cout<<x;
}

int main() 
{
    string x;
    getline(cin,x);

    rev(x);

    return 0;
}

