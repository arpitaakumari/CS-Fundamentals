//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(int n)
{
    //Write your code here
    int arr[n],ans[n];

    for(int a = 1; a <= n; a++)
        cin>>arr[a];
    int max = arr[n-1], count = 0;
    //ans[n-1] = max;
    //cout<<max<<" ";
    int j=0;
    ans[j] = arr[n-1];
    for(int i = n-1; i >= 0; i--)
    {
        if(max<arr[i])
        {
            max = arr[i];
            //count++;
            j++;
            ans[j] = max; 
        }
    }
    //ans[j+1] = arr[n-1];
    //cout<<count<<endl;
    int len = sizeof(ans)/sizeof(ans[0]);
    for(int i = 0 ; i <= len; i++)
        cout<<ans[i]<<" ";
}

int main() 
{
    ll n;
    cout<<" Enter the number: "<<endl;
    cin>>n;
    solve(n);
    return 0;
}