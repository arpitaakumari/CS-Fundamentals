//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    //Write your code here
    vector<int> v;
    for(int i = 0; i < v.size(); i++)
        cin>>v[i];
    int count=0;
    vector<int> ans;
    for(int i = 0; i < v.size(); i++)
        if(v[i]==0)
            count++;
        else
            ans.push_back(v[i]); 
    for(int i = 0; i < count; i++)
        ans.push_back(0);
    for(int i = 0; i < ans.size(); i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}

int main() 
{
    int t;
    //cout<<" Enter the number: "<<endl;
    cin>>t;
    for(int i=0; i<t; i++)
        solve();
    return 0;
}