#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    vector<int> v;
    int temp;
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    //vector<vector<int>> vv;
    set<vector<int>> s;
    for(int i=0; i<pow(2,n); i++)
    {
        vector<int> sub;
        sub.clear();
        for(int j=0; j<n; j++)
        {
            if(i&(1<<j))
            sub.push_back(v[j]);
            sort(sub.begin(), sub.end());
        }
        s.insert(sub);
    }
    for(auto x: s)
    {
        for(auto y: x)
        cout<<y<<" ";
        cout<<endl;
    }
    return 0;
}