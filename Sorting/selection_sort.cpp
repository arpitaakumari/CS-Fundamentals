//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

// SELECTION SORT
void selection_sort(ll arr[], ll n)
{
    for(int i=0; i<n; i++)
    {
        int min = arr[i];
        int pos = i;
        for(int j=i+1; j<n; j++)
        {
            if(min>arr[j])
            {
                min = arr[j];
                pos = j;
            }
        }
        int temp = arr[i];
        arr[i] = min;
        arr[pos] = temp;
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
    selection_sort(arr, n);
    return 0;
}