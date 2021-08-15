//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(vector<int> nums, int m)
{
    //Write your code here
    unordered_map<int, int> mymap;

    for(int i = 0; i < nums.size();i++)
        mymap[nums[i]]++;

    vector<pair<int, int> > v;

    for(auto i=mymap.begin(); i!=mymap.end(); i++)
        v.push_back(make_pair(i->second,i->first));

    sort(v.begin(), v.end());

    int size = v.size(), count=0;
    cout<<size<<endl;

    for(int i=0; i<size; i++)
    {
        if(v[i].first<=m)
        {
            m = m - v[i].first;
            count++;
        }
        else
        {
            cout<<size<<endl;
            cout<<count<<endl;
            cout<<size-count<<endl;
            return;
        }
    }
    cout<<size-count<<endl;
}

int main() 
{
    int n;
    vector<int> v;
    while ((cin >> n) && n != 9999)
        v.push_back(n);
    int m;
    cin>>m;
    solve(v, m);
    return 0;
}