#include<bits/stdc++.h>
using namespace std;
bool f(int i,string &name)
{
    if(i>=name.size()/2) return true;
    if(name[i]!=name[name.size()-i-1]) return false;
    return f(i+1,name);
}
int main()
{
    string name="madam";
    cout<<f(0,name);
}