//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    //Write your code here
    string str1, str2;
    cin>>str1>>str2;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    int x = str1.compare(str2);

    if (x==0)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
}

int main() 
{
    //ll n;
    //cout<<" Enter the number: "<<endl;
    //cin>>n;
    //solve(n);
    solve();
    return 0;
}