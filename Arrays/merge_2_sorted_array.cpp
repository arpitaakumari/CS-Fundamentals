//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void merge (vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
        vector<int> arr3;
        int i=0, j=0;
        while ( i < m && j < n) 
        {
            if (nums1[i] < nums2[j]) 
            {
                arr3.push_back(nums1[i]);
                i++;
            } 
            else 
            {
                arr3.push_back(nums2[j]);
                j++; 
            }
        }
        while ( i < m) 
        { 
            arr3.push_back(nums1[i]);   
            i++;
        }
        while ( j < n) 
        { 
            arr3.push_back(nums2[j]);   
            j++;  
        }
        nums1=arr3;

        //cout << "The vector elements are: ";
        for (int i = 0; i < arr3.size(); i++)
            cout << arr3[i] << " ";
}

int main() 
{
    vector <int> arr1;
    vector <int> arr2;
    int n1, n2, t, temp;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cout << "Enter the length of first array \n";
        cin >> n1;
        cout << "Enter the length of second array \n";
        cin >> n2;

        cout << "Enter sorted values for first array \n";
        for (int i = 0; i < n1; i++) 
        {
           cin >> temp;
           arr1.push_back(temp);
        }

        cout << "Enter sorted values for second array \n";
        for (int j = 0; j < n2; j++) 
        {
            cin >> temp;
            arr2.push_back(temp);
        }

        merge(arr1, n1, arr2, n2);
    }

    return 0;
}