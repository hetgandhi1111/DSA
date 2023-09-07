#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    int n;
    int count=0;
    cout<<"Enter the Number";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if((n%i)==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"It is Prime";
    }
    else{
        cout<<"It is not Prime";
    }
}*/

int main()
{
    int n;
    int count=0;
    cin>>n;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            count++;

        }
    }
    if(count==2)
    {
        cout<<"It is Prime";
    }
    else
    {
        cout<<"It is Not Prime";
    }
}