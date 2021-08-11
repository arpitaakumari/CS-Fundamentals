//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(int arr[1000][1000], int n)
{
    //Write your code here
    //transpose
    int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for(int i=0; i<n; i++)
    {
        int start=0;
        int end = n-1;

        while(start < end)
        {
            int temp = arr[start][i];
            arr[start][i] = arr[end][i];
            arr[end][i] = temp;

            start++;
            end--;
        }
    }
   
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main() 
{
    int n;
    cout<<" Enter the number: "<<endl;
    cin>>n;
    int arr[1000][1000];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    solve(arr, n);
    return 0;
}