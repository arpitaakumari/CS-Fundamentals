//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void bubble_sort(ll arr[], ll n)
{
    //Write your code here
    for(ll i = 0; i < n; i++)
    {
        for(ll j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Array after Selection Sort :- ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() 
{
    ll n;
    cout<<" Enter the number: "<<endl;
    cin>>n;
    ll arr[n];
    cout<<"Enter the elements : ";
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array before sorting : ";
    for(ll i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubble_sort(arr, n);
    return 0;
}