//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int solve(ll arr[], ll low, ll high, ll x)
{
    //Write your code here
    if(high<low)
    { 
        return -1;
    }
    if(arr[low] == x) 
    {
        return low;
    }
    /*
    if(arr[high] == x) 
    {
        return high;
    }
    */
    return solve(arr, low+1, high-1, x);
}

int main() 
{
    ll n;
    //cout<<" Enter the number: "<<endl;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    ll x;
    cin>>x;
    int ans = solve(arr, 0, n-1, x);
    if(ans!=-1)
        cout<<ans<<endl;
    else
        cout<<"No such element"<<endl;
    return 0;
}