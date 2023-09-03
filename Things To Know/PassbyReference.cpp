#include<iostream>
using namespace std;
void doSomething(int arr[],int n)
{
    arr[0]+=100;
    cout<<"Value Inside Array"<<arr[0]<<endl;
}
int main()
{
    int n=5;
    int arr[n];
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    doSomething(arr ,n);
    cout<<arr[0];
    return 0;
}