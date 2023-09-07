#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int revN=0;
    cin>>n;
    while(n>0)
    {
        int lastdigit=n%10;
        n=n/10;
        revN=(revN*10)+lastdigit;
    }
    cout<<revN;
}