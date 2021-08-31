//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int solve(int n)
{
    //Write your code here
    if(n == 0)
        return 0;
    else if(n==1)
        return 1;
    else
        return n*solve(n-1);
}

int main() 
{
    ll n;
    cout<<" Enter the number: "<<endl;
    cin>>n;
    int fact = solve(n);
    cout<<fact<<endl;
    return 0;
}