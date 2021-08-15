//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(vector<int> v)
{
    //Write your code here
    unordered_map<int, int> mymap;

    for(int i=0; i<v.size(); i++)
        mymap[v[i]]++; 

    int max_frequency = 1;
    int result = -1;

    for(int i = 0; i < v.size(); i++)
    {
        if(mymap.count(v[i]) > 0)
        {
            mymap[v[i]] = mymap[v[i]] + 1;
            if(max_frequency < mymap[v[i]])
            {
                max_frequency = mymap[v[i]];
                result = v[i];
            }
            else if(max_frequency == mymap[v[i]])
            {
                result = min(result, v[i]);
            }
        }
        else
            mymap[v[i]] = 1;
    }

    cout<<result<<endl;
    
}

int main() 
{
    int n;
    vector<int> v;
    while ((cin >> n) && n != 9999)
        v.push_back(n);
    solve(v);
    return 0;
}