#include<bits/stdc++.h>

using namespace std;

int power(int x, int y)
{
    if(y==0) 
        return 1;
    return x*(power(x, y-1));
}

int len(int n)
{
    int count=0;
    while(n!=0) 
    {
        count++;
        n=n/10;
    }
    return count;
}

int main()
{
    int num;
    cin>>num;
    int x = num;
    int n = len(num);
    int ans=0;
    while(num!=0)
    {
        ans += power(num%10, n);
        num = num/10;
    }
    if(ans==x)
        cout<<"Armstrong Number"<<endl;
    else
        cout<<"Not Armstrong Number"<<endl;
}