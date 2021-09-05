#include<bits/stdc++.h>

using namespace std;

void solve(vector<int> nums)
{
    int target;
    cin>>target;
    
    unordered_map<int, int> mymap;
    vector<int> ans(2);
// 2 7 11 15
//target = 9
    for(int i=0;i<nums.size();i++)
    {
        if(mymap.find(target - nums[i])!=mymap.end())
        {
            ans[0] = i;
            ans[1] = mymap[target - nums[i]];
        }
        else
            mymap[nums[i]] = i;
    }

    for(int i = 0; i<2; i++)
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
    //cout<<ans<<endl;
    return 0;
}