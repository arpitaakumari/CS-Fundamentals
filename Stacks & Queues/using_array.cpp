//Author :- [Arpita_Kumari]

#include <bits/stdc++.h>
using namespace std;

#define hs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;

void fileioe()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt","w",stderr);
    #endif
}

class StackNode
{
    int *data;
    int nextIndex;
    int capacity;

    public:
        StackNode(int totalSize)
        {
            data = new int[totalSize];
            nextIndex = 0;
            capacity = totalSize;
        }

        int size()
        {
            return nextIndex;
        }

        bool isEmpty()
        {
            return nextIndex == 0;
        }

        void push(int element)
        {
            if(nextIndex == capacity)
            {
                cout<<"Stack is Full"<<endl;
                return;
            }
            data[nextIndex] = element;
            nextIndex++;
        }

        int pop()
        {
            if(isEmpty())
            {
                cout<<"Stack is EMPTY"<<endl;
                return INT_MIN;
            }
            nextIndex--;
            return data[nextIndex];
        }

        int top()
        {
            if(isEmpty())
            {
                cout<<"Stack is EMPTY"<<endl;
                return INT_MIN;
            }
            return data[nextIndex-1];
        }
};

void solve()
{
    StackNode s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
}

int main() 
{
    hs;
    //fileioe();

    ll t;
    t=1;
    //cin>>t;
    for (int i=0; i<t; i++)
    {
        solve();
    }
    return 0;
}