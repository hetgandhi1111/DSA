#include<iostream>
using namespace std;
int main()
{
    //1 D Array
    /*int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    arr[3]+=10;
    cout<<arr[3];
    return 0;*/
    //2 D Array
    int ar[3][5];
    ar[1][3]=45;
    cout<<ar[1][3]<<endl;
    cout<<ar[0][2]<<endl;
    cout<<ar[1][4]<<endl;
    string s="striver";
    int len=s.size();
    s[len-1]='h';
    cout<<s[len-1];
    cout<<s[4];

}