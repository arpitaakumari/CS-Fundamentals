//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(vector<int> v)
{
    //Write your code here
    vector<int> ans;
    unordered_map<int, bool> seen;
    int maxFrequency = -1;
    for(int i = 0; i < v.size(); i++)
    {
        seen[v[i]] = seen[v[i]] + 1;
        maxFrequency = max(maxFrequency,seen[v[i]]); 
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main() 
{
    int n;
    //cout<<" Enter the number: "<<endl;
    //cin>>n;
    //solve(n);
    vector<int> v;
    while ((cin >> n) && n != 9999)
        v.push_back(n);
    solve(v);
    return 0;
}