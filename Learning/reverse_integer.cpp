#include<bits/stdc++.h>

using namespace std;

int solve(int n)
{
    static int ans = 0;
    if(n>0)
    {
        ans = ans*10 + n%10;
        solve(n/10);
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int ans = solve(n);
    cout<<ans<<endl;
    return 0;
}