//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    string str,ans="";
    cin>>str;
    int count=1;
    
    for(int i=0;i<str.length();i++)
    {
        count=1;
        while(str[i]==str[i+1])
        {
            i++;
            count++;
        }
        if(count>1)
            cout<<str[i]<<count;
        else
            cout<<str[i];
    }
}

int main() 
{
    /*
    ll n;
    cout<<" Enter the number: "<<endl;
    cin>>n;
    solve(n);
    */
    solve();
    return 0;
}