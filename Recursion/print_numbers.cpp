//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(int n)
{
    //Write your code here
    if(n==1)
    {
        cout<<1<<" ";
        return;
    }
    //cout<<n<<" ";
    solve(n-1);
    cout<<n<<" ";
}

int main() 
{
    ll n;
    cout<<" Enter the number: "<<endl;
    cin>>n;
    solve(n);
    return 0;
}