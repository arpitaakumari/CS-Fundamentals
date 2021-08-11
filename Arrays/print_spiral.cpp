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
        
    int i, j=0, k=0;

    while(k<m && j<n)
    {
        for(int i=0; i<n; i++)
            cout<<arr[k][i]<<" ";
        k++;

        for(i=k; i<m; i++)
            cout<<arr[i][n-1]<<" ";
        n--;

        if(k<m)
        {
            for(i=n-1; i>=1; i--)
                cout<<arr[m-1][i]<<" ";
            m--;
        }

        if(j<n)
        {
            for(i=m-1; i>=k; i--)
                cout<<arr[i][j]<<" ";
            j++;
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