//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void insertion_sort(ll arr[], ll n)
{
    //Write your code here
    for(int i = 1; i < n ;i++)
    {
        int sorted = arr[i];
        int j = i;
        while(j>0 && arr[j-1] > sorted)
        {
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = sorted;
    }

    cout<<"Array after insertion sort :- ";
    for(int i = 0; i < n ; i++)
        cout<<arr[i]<<" ";
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
    insertion_sort(arr, n);
    return 0;
}