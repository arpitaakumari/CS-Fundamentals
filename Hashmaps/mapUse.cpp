//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    //Write your code here 
    unordered_map<string, int> ourMap;

    //insert METHOD 1 
    pair<string, int> p("abc", 1);
    ourMap.insert(p);

    //insert METHOD 2 
    ourMap["def"] = 2;

    //access METHOD 1
    cout<<ourMap["abc"]<<endl;

    //access METHOD 2
    cout<<ourMap.at("abc")<<endl;
    //cout<<ourMap.at("ghi")<<endl; //error because no key
    cout<<ourMap["ghi"]<<endl; //value will be inserted with default value 0

    //to search for a key 
    if(ourMap.count("ghi")>0)
        cout<<"Present "<<ourMap["ghi"]<<endl;
    else
        cout<<"Not Present"<<endl;

    //size
    cout<<"SIZE :- "<<ourMap.size()<<endl; //OUTPUT = 2
    cout<<ourMap["ghi"]<<endl;
    cout<<"SIZE :- "<<ourMap.size()<<endl;  //OUTPUT = 3

    //erase
    ourMap.erase("ghi");
    if(ourMap.count("ghi")>0)
        cout<<"Present "<<ourMap["ghi"]<<endl;
    else
        cout<<"Not Present"<<endl;
    cout<<"SIZE :- "<<ourMap.size()<<endl;
}

int main() 
{
    //ll n;
    //cout<<" Enter the number: "<<endl;
    //cin>>n;
    solve();
    return 0;
}