//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


//MERGE SORT
void merge(int arr[], int l, int m, int r)
{
    // Creating duplicate copies of sub-arrays to be sorted
    // Creating left and right subarrays dividing according
    // to the middle element of the array
    int n_left = m-l+1;
    int n_right = r-m;
    int left_arr[n_left], right_arr[n_right];

    for(int i = 0; i<n_left; i++)
        left_arr[i] = arr[l+i];

    for(int j = 0; j<n_right; j++)
        right_arr[j] = arr[m+1+j];

    // maintain current index of sub-arrays and main array
    // i for left array
    // j for right array
    // k for original array/main array
    int i = 0, j = 0, k = l;

    // until we reach the end of either LeftArray or RightArray
    // Pick larger among LeftArray and RightArray and
    // Place them in correct position at arr
    while(i<n_left && j<n_right)
    {
        if(left_arr[i]<=right_arr[j])
        {
            arr[k] = left_arr[i];
            i++;
        }
        else
        {
            arr[k] = right_arr[j];
            j++;
        }
        k++;
    }

    // When we run out of elements in either LeftArray or RightArray,
    // Pick up the remaining elements and put in arr
    // We came to this loop because j<n2 does not hold any elements
    while(i<n_left)
    {
        arr[k] = left_arr[i];
        i++;
        k++; 
    }

    // We came to this loop because i<n1 does not hold any elements 
    while(j<n_right)
    {
        arr[k] = right_arr[j];
        j++;
        k++;
    }

    // Array is sorted.

}

void merge_sort(int arr[], int l, int r)
{
    //int n = r+1;
    if(l<r)
    {
        int middle = l + (r-l)/2;
        merge_sort(arr, l, middle);
        merge_sort(arr, middle+1, r);
        // Sort and merge the array
        merge(arr, l, middle, r);
    }
}

void display(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() 
{
    int n;
    cout<<" Enter the number: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array before sorting : ";
    display(arr,n);
    //selection_sort(arr, n);
    merge_sort(arr, 0, n-1);
    cout<<"Array after sorting : ";
    display(arr,n);
    return 0;
}