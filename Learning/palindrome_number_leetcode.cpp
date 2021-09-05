#include<bits/stdc++.h>

using namespace std;

bool solve(int n)
{
    string str = to_string(n);
    int i = 0, j= str.size()-1;

    while(i<=j) 
    {
        if(str[i++]!=str[j--])
            return false;
    }

    return true;
}

int main()
{
    int n;
    cin>>n;
    cout<<solve(n)<<endl;
    return 0;
}