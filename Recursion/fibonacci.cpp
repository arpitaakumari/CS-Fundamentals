//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int solve(int n)
{
    //Write your code here
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    int term1 = solve(n-1);
    int term2 = solve(n-2);
    return term1+term2;
}

int main() 
{
    ll n;
    //cout<<" Enter the number: "<<endl;
    cin>>n;
    cout<<solve(n);
    return 0;
}