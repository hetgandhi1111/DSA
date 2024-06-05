#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0)
        {
            cout<<i<<"Not a Prime Number";
        }
        else{
            cout<<i<<"Number is Prime";
        }
        i=i+1;
    }
    return 0;
}