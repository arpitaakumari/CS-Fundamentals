//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(vector<int> nums, int k)
{
    //Write your code here
    unordered_map<int, int> mymap;
    
    for(int i=0; i<nums.size(); i++)
        mymap[nums[i]]++;
    
    int count = 0;
    if(k==0)
    {
        for(auto i:mymap)
            if(i.second>1)
                count++;
    }
    else
    {
        for(auto i:mymap)
        {
            if(mymap.find(i.first+k)!=mymap.end())
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}

int main() 
{
    int n,k;
    vector<int> v;
    while ((cin >> n) && n != 9999)
        v.push_back(n);
    cin>>k;
    solve(v, k);
    return 0;
}