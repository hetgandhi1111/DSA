#include<iostream>
using namespace std;
void printname(string name)
{
    cout<<"Hey "<<name<<endl;
}
int Sum(int a,int b)
{
    //cin>>a>>b;
    int sum=a+b;
    return sum;
}
int main()
{
    /*string name;
    cin>>name;

    string name2;
    cin>>name2;
    printname(name);
    printname(name2);*/
    int a,b;
    cin>>a>>b;
    int sum=Sum(a,b);
    cout<<sum;
    return 0;
}