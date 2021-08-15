//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(vector<int> nums)
{
    //Write your code here
    unordered_map<int, int> mymap;

    for(int i = 0; i < nums.size(); i++)
        mymap[nums[i]]++;
    int count_zero = 0;
    int count_one = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        if(mymap.find(0)!=mymap.end())
            count_zero++;
        else if(mymap.find(1)!=mymap.end())
            count_one++;
    }
    cout<<count_zero<<" "<<count_one<<endl;

}

int main() 
{
    int n;
    vector<int> v;
    while ((cin >> n) && n != 9999)
        v.push_back(n);
    solve(v);
    return 0;
}