#include<bits/stdc++.h>

using namespace std;

void solve(vector<int> v)
{
    vector<int> ans;
    int target;
    cin>>target;
    for(int i = 0; i<v.size();i++)
    {
        if(v[i] == target) 
            continue;
        else
        {
            ans.push_back(v[i]);
        }
    }


    for(int i = 0; i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}

int main()
{
    int n;
    vector<int> v;
    while((cin>>n) && n!=9999)
    {
        v.push_back(n);
    }
    solve(v);
    return 0;
}