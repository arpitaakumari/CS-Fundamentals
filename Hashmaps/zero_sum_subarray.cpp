//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(vector<int> nums, int k)
{
    //Write your code here
    unordered_map<int, int> mymap;
    nums[0]++;
    int sum = 0, count = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        sum = sum + nums[i];
        count = count + mymap[sum-k];
        mymap[sum]++;
    }
    if(count>0)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
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