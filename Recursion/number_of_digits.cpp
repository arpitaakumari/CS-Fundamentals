//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int solve(int n)
{
    //Write your code here
    if(n<10)
        return 1;
    else
        return 1 + solve(n/10);
}

int main() 
{
    ll n;
    //cout<<" Enter the number: "<<endl;
    cin>>n;
    cout<<solve(n)<<endl;
    return 0;
}