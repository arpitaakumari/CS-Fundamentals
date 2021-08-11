//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(int n)
{
    //Write your code here
    ll arr[n];

    cout<<"Enter elements :- "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Original Array :- "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    sort(arr,arr+n);
    
    cout<<"Sorted Array :- "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main() 
{
    ll n;
    cout<<" Enter the number: "<<endl;
    cin>>n;
    solve(n);
    return 0;
}