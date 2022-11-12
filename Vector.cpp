#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    //v.insert(v.begin()+1, 3, 100);
    reverse(v.begin(), v.end());
    //v.erase(v.begin()+2, v.begin()+ 4);
    auto it=v.begin();
    for(it; it!=v.end(); it++)
    cout<<*it<<" ";
}