//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int solve(int x, int n)
{
    //Write your code here
    if(n==0)
        return 1;
    else
        return x*solve(x, n-1);
}

int main() 
{
    ll n,x;
    //cout<<" Enter the number: "<<endl;
    cin>>x>>n;
    cout<<solve(x, n)<<endl;
    return 0;
}