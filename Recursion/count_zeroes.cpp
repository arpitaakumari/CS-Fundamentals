//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int solve(ll n)
{
    //Write your code here
    if(n == 0)
        return 0;
    int digit = n%10;
    if(digit == 0)  
        return 1 + solve(n/10);
    return solve(n/10);
}

int main() 
{
    ll n;
    //cout<<" Enter the number: "<<endl;
    cin>>n;
    ll ans = solve(n);
    cout<<ans<<endl;
    return 0;
}   