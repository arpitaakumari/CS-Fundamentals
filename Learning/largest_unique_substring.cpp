#include<bits/stdc++.h>

using namespace std;

void solve(string str)
{
    vector<bool> window(256);

    int begin=0, end=0; //longest substring boundary

    int low=0; //window boundaries

    //abcdabceb
    //dabce

    for(int high=0; high<str.size(); high++)
    {
        if(window[str[high]])
        {
            while(str[low]!=str[high])
            {
                window[str[low++]] = false;
            }
            low++;
        }
        else
        {
            window[str[high]] = true;
            if(end-begin<high-low)
            {
                end = high;
                begin = low;
            }
        }
    }

    cout<<str.substr(begin, end-begin+1)<<endl;

}

int main()
{
    string str;
    cin>>str;
    solve(str);
    return 0;
}