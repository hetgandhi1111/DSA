#include<iostream>
using namespace std;
void putname(string a)
{
    a[0]='t';
    cout<<a<<endl;
}
int main()
{
    string s;
    s="raj";
    putname(s);
    cout<<s<<endl;

}