//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(string s, string t)
{
    //Write your code here
    unordered_map<char, int> mymap;
    int ans = 0;
    for(int i = 0; i < s.length(); i++)
        mymap[s[i]]++;
    for(int i = 0; i < t.length(); i++)
    {
        if(mymap.find(t[i])!=mymap.end() && mymap[t[i]]!=0)
            mymap[t[i]]--;
        else
            ans++;
    }
    cout<<ans<<endl;
}

int main() 
{
    string s1, s2;
    cin>>s1>>s2;
    solve(s1,s2);
}