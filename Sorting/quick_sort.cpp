//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int partition(ll arr[], ll low, ll high)
{
    //intiliazing pivot as the rightmost element
    ll pivot = arr[high];

    ll j = low-1;

    for(ll i = low; i < high; i++)
    {
        if(arr[i]<=pivot)
        {
            j++;
            ll temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    ll temp = arr[j+1];
    arr[j+1] = arr[high];
    arr[high] = temp;

    return (j+1);
}

void quick_sort(ll arr[], ll low, ll high)
{
    if(low<high)
    {
        //to find the pivot element
        //elements smaller than the pivot 
        //should be on the left side
        //elements larger than the pivot element 
        //should be on the right side
        ll pivot = partition(arr, low, high);

        //recursive call tto find the pivot element
        //of left side of array
        quick_sort(arr, low, pivot-1);

        //recursive call to find the pivot elements
        //of right side of the Array
        quick_sort(arr, pivot+1, high);
    }
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
    quick_sort(arr, 0, n);
    cout<<"Array after sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}