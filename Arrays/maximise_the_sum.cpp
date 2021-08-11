//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void maximise_sum(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
    int i=0,j=0;
    int sum1=0, sum2=0, maxSum=0;

    while(i<m && j<n)
    {
        if(nums1[i]<nums2[j])
        {
            sum1+=nums1[i];
            i++;
        }
        else if(nums1[i]>nums2[j])
        {
            sum2+=nums2[j];
            j++;
        }
        else
        {
            maxSum+=max(sum1,sum2)+nums1[i];
            i++;
            j++;
            sum1=sum2=0;
        }
    }

    while(i<m)
    {
        sum1+=nums1[i];
        i++;
    }

    while(j<n)
    {
        sum2+=nums2[j];
        j++;
    }

    maxSum+=max(sum1,sum2);
    cout<<maxSum<<endl;

}

int main() 
{
    vector <int> arr1;
    vector <int> arr2;
    int n, m, t, temp;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cout << "Enter the length of first array \n";
        cin >> m;
        cout << "Enter the length of second array \n";
        cin >> n;

        cout << "Enter sorted values for first array \n";
        for (int i = 0; i < m; i++) 
        {
           cin >> temp;
           arr1.push_back(temp);
        }

        cout << "Enter sorted values for second array \n";
        for (int j = 0; j < n; j++) 
        {
            cin >> temp;
            arr2.push_back(temp);
        }

        maximise_sum(arr1, m, arr2, n);
    }

    return 0;
}