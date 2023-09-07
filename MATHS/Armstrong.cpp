#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int Sum=0;
    cout<<"Enter Number::";
    cin>>n;
    int dup=n;
    while(n>0)
    {
        int lg;
        lg=n%10;
        Sum=Sum+(lg*lg*lg);
        n=n/10; 
    }
    if(dup==Sum)
    {
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
}