//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    //Write your code here
    char str[200];
    cin>>str;
    cout<<str<<endl;
    for(int i=0; i<str[i]!='\0'; i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<str[j];
        }
        cout<<endl;
    }
}

int main() 
{
    //ll n;
    //cout<<" Enter the number: "<<endl;
    //cin>>n;
    solve();
    return 0;
}