//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int solve(char str[])
{
    //Write your code here
    //without using strlen
    /*
    int i=0, count = 0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    cout<<count<<endl;
    */

    //using recursion
    if(str[0] == '\0')
        return 0;
    int count = solve(str+1);
    return 1 + count;

}

int main() 
{
    /*
    string str;
    getline(cin, str);
    solve(str);
    */

    char str[100];
    cin>>str;
    int l = solve(str+1);
    cout<<l<<endl;

    return 0;
}