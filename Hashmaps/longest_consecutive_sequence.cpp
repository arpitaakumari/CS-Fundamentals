//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(vector<int> v)
{
    //Write your code here
    unordered_map<int, bool> mymap;

    for(int i=0; i<v.size(); i++)
        mymap[v[i]] = true;
    int maxSeq = 0;
    for(auto i:v)
    {
        if(mymap.find(i-1)==mymap.end())
        {
            int currentNum = i;
            int currentSeq = 1;
            while(mymap.find(currentNum+1)!=mymap.end())
            {
                currentNum++;
                currentSeq++;
            }
            maxSeq = max(maxSeq,currentSeq);
        }
    }
    cout<<maxSeq<<endl;
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