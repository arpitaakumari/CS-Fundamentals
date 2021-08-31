//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool solve(ll arr[], ll n, ll x)
{
    //Write your code here
    if(n==0) 
        return false;
    else if(arr[0]==x)
        return true;
    return solve(arr+1, n-1, x);
}

int main() 
{
    ll n,x;
    //cout<<" Enter the number: "<<endl;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[n];
    cin>>x;
    int ans = solve(arr, n, x);
    if(ans!=-1) 
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
    return 0;
}