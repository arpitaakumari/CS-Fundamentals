#include<bits/stdc++.h>

using namespace std;

bool solve(string str)
{
    stack<char> s;
    for(int i=0;i<str.size();i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
            s.push(str[i]);
        else 
        {
            if(s.empty() || 
            (s.top()=='(' && str[i]!=')') || 
            (s.top()=='{' && str[i]!='}') || 
            (s.top()=='[' && str[i]!=']'))
                return false;
            s.pop();
        }
    }
    return s.empty();
}

int main()
{
    string str;
    cin>>str;
    cout<<solve(str)<<endl;
    return 0;
}