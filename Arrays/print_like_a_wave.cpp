//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    //Write your code here
    int n,m;
    cin>>m>>n;
    int arr[m][n];

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    
    for(int j=0; j<n; j++) 
    {
        if(j%2==0)
        {
            for(int i=0;i<m;i++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else
        {
            for(int i=m-1;i>=0;i--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }
    cout<<endl;
}

int main() 
{
    ll t;
    //cout<<" Enter the number: "<<endl;
    cin>>t;
    for(int i=0; i<t; i++) 
        solve();
    return 0;
}