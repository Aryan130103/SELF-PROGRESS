#include <iostream>
using namespace std;

// reverse words of a string. (taking char array as input)

void rev(char x[],int n)
{
    int s=0,e=n-1,a=0;
    char temp[n];
    int z=e;
    while(e>=s)
    {
        
        if(x[e]==' ')
        {
            for(int i=e+1;i<=z;i++)
            {
                temp[a]=x[i];
                a++;
                
            }
            temp[a++]=' ';
            e=e-1;
            z=e;
        }
        else if(e==s)
        {
           
            for(int i=0;x[i]!=' ';i++)
                {
                    temp[a]=x[i];
                    a++;
                }
            break;
        }
        else
        {
            e--;
        }
    }
    for(int j=0;j<n;j++)
        cout<<temp[j];
}

int len(char x[]){
    int c=0;
    for(int i=0;x[i]!='\0';i++)
         c++;
    return c;
}

int main() {
    char x[20];
    cin.getline(x,20);
    
    int f=0;
    
    int n=len(x);
    for(int i=0;i<n;i++)
    {
        if(x[i]==' ')
            f++;
    }

    if(f==0)
    {
        for(int k=0;k<n;k++)
        {
            cout<<x[k];
        }
    }        
    else   
    rev(x,n);

    return 0;
}

