#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    int n;
    int count=0;
    cout<<"Enter a Number::";
    cin>>n;
    while(n>0)
    {
        int lastDigit=n%10;
        count=count+1;
        n=n/10;
    }
    cout<<count;
    return 0;
}*/
int main()
{
    int n;
    cin>>n;
    int count=(int(log10(n)+1));
    return count;
}