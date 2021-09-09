#include<bits/stdc++.h>

using namespace std;

void solve(string str)
{
    for(int i=0; i<str.length(); i++)
    {
        if(i==0) 
            cout<<str[i];
        if(i == str.length()-1)
            cout<<str[i];
        if(str[i] == ' ')
            cout<<str[i-1]<<" "<<str[i+1];
    }
}

int main()
{
    string str;
    getline(cin, str);
    cout<<str<<endl;
    solve(str);
    return 0;
}