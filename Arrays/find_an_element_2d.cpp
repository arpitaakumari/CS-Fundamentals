//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(int arr[][1000], int m, int n, int x)
{
    //Write your code here
    int i=0, j=n-1;
    while(i<m && j>=0)
    {
        if(arr[i][j]==x)
        {
            cout<<i<<" "<<j<<" "<<"Element found"<<endl;
            break;
        }
        else if(arr[i][j]<x)
            i++;
        else
            j--;
        cout<<"Element not found"<<endl;
    }
}

int main() 
{
    int m,n;
    //cout<<" Enter the number: "<<endl;
    cin>>m>>n;
    int arr[1000][1000], x, i, j;

    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            cin>>arr[i][j];

    cin>>x;
    solve(arr, m, n, x);
    return 0;
}