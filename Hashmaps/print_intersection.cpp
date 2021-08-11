//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(vector<int> v1, vector<int> v2)
{
    vector<int> ans;
    unordered_map<int, bool> seen;
    for(int i = 0; i < v1.size(); i++)
    {
        if(seen.count(v1[i]) > 0)
            continue;
        else
            seen[v1[i]] = true;
    }

    for(int i = 0; i < v2.size(); i++)
    {
        if(seen.count(v2[i]) > 0)
        {
            seen.erase(v2[i]);
            ans.push_back(v2[i]); 
        }
    }

    for(int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main() 
{
    int n1, n2, i, t;
    vector<int> v1, v2;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        while ((cin >> n1) && n1 != 9999)
            v1.push_back(n1);
        while ((cin >> n2) && n2 != 9999)
            v2.push_back(n2);
    }
    solve(v1, v2);
    return 0;
}