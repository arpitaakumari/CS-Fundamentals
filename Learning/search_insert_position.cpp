#include<bits/stdc++.h>

using namespace std;

void solve(vector<int> nums)
{
    int target;
    cin>>target;
    nums.push_back(target);
    sort(nums.begin(), nums.end());
    int x;
    for(int i = 0; i<nums.size(); i++)
    {
        if(nums[i] == target) 
        {
            x = i;
            break;
        }
    }
    cout<<x<<endl;
}

int main()
{
    int n;
    vector<int> v;
    while((cin>>n) && n!=-1)
        v.push_back(n);
    solve(v);
    return 0;
}