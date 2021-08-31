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
    ll ans = solve(arr, low+1, high-1, x);
    ll output[high];
    if(arr[low] == x) 
    {
        for(ll i=ans-1;i>=0;i--)
        {
            output[i+1] = output[i] + 1;
        }
        output[0] = 0;
        ans++;
    }
    else
    {
        for(ll i=ans-1;i>=0;i--)
        {
            output[i] = output[i] + 1;
        }
    }
    return ans;
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
    int size = solve(arr, 0, n-1, x);
    return 0;
}