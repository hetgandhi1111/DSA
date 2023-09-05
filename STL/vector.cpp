#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout<<v[0]<<endl;
    vector<int>v2(v);
    cout<<v2[1]<<endl;
    vector<int>::iterator it=v.begin();
    it++;
    cout<<*(it)<<" ";
}