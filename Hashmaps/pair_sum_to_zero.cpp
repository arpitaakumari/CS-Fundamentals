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

    int count = 0;
    for(int i=0; i<v.size(); i++)
    {
        int rem = 0 - v[i];
        if(mymap.find(rem) != mymap.end())
        {
            count = mymap[rem];
            //count++;
        }
        mymap[v[i]] = i;
    }

    cout<<count<<endl;

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