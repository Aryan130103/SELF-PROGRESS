#include<iostream>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    if(ch>=65 && ch<=90)
        cout<<"upper case"<<endl;
    else if(ch>=97 && ch<=122)
        cout<<"lower case"<<endl;       
    else if(ch>=48 && ch<=59)
        cout<<"numeric"<<endl;
    else
        cout<<"invalid"<<endl;
    return 0;
}
/*
int main()
{
    int n=1,s=0,i;
    cin>>i;
    while(n<=i){
            if(n%2==0)
              s=s+n;
        n++;
    }
    cout<<s<<endl;
}

int main(){
    double t1,t2;
    cout<<"enter temp in fahrenheit: ";
    cin>>t1;
    t2=(t1-32)*(5.0/9);
    cout<<"temperature in degree celcius: "<<t2<<endl;
    return 0;

}
*/
