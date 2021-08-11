//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    //Write your code here
    string str;
    getline(cin, str);
    
    reverse(str.begin(), str.end());

    str.insert(str.end(), ' ');
    int n=str.length();
    int j=0;

    for(int i=0; i<n; i++)
    {
        if(str[i]==' ')
        {
            reverse(str.begin()+j, str.end()+i);
            j=i+1;
        }
    }

    //str.pop_back();

    cout<<str<<endl;
}

int main() 
{
    /*
    ll n;
    cout<<" Enter the number: "<<endl;
    cin>>n;
    solve(n);
    */
    solve();
    return 0;
}