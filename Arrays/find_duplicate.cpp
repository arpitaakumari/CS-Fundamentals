//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

/*
//APPROACH 1
void solve()
{
    //Write your code here
    ll n;
    cin>>n;
    ll arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            cout<<"Duplicate Element :- "<<arr[i]<<endl;
        }
    }
}
*/

//APPROACH 2

void solve()
{
    ll n,sum=0,sum_number=0;
    cin>>n;
    ll arr[n];

    for(int i=1;i<=n;i++)
        cin>>arr[n];

    for(int i=1;i<=n;i++)
        sum=sum+arr[i];

    sum_number = ((n-1)*(n-2))/2;

    cout<<sum<<endl;
    cout<<sum_number<<endl;
    cout<<"Duplicate mumber :- "<<abs(sum-sum_number)<<endl;
}


int main() 
{
    ll t;
    //cout<<" Enter the number: "<<endl;
    cin>>t;
    for(int i=1;i<=t;i++)
        solve();
    return 0;
}