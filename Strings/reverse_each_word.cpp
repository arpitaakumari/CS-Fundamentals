//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    string str;
    getline(cin, str);
    int n = str.length();
    int k=0;
    for(int i=0; i<=n; i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            for(int j=k;j<(i-(i-k)/2);j++)
            {
                swap(str[j], str[i-j+k-1]);
            }
            k=i+1;
        }
    }
    cout<<str<<endl;

}

int main() 
{
    /*
    ll n;
    cout<<" Enter the number: "<<endl;
    cin>>n;*/
    solve();
    return 0;
}