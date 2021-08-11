//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(int n)
{
    //Write your code here
    int arr[n], dep[n];

    for(int a = 0; a < n; a++)
        cin>>arr[a];
    for(int b = 0; b < n; b++)
        cin>>dep[b];

    int i=0, j=0, plat=1;

    sort(arr,arr+n);
    sort(dep,dep+n);

    while(i<n && j<n)
    {
        if(arr[i]<=dep[j])
        {
            plat++;
            i++;
        }
        else if(arr[i]>dep[j])
        {
            plat--;
            j++;
        }
    }
    cout<<plat<<endl;
}

int main() 
{
    ll n;
    cout<<" Enter the number: "<<endl;
    cin>>n;
    solve(n);
    return 0;
}