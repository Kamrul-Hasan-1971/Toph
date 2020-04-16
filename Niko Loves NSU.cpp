#include<bits/stdc++.h>
using namespace std;
#define  ll            long long int
#define  min3(a,b,c)   min(a,min(b,c))
string s1;
map<char,ll>mp;

int main()
{
    ll  a,i;
    cin>>a>>s1;
    for(i=0;i<a;i++)
    {
        mp[s1[i]]++;
    }
    ll x = mp['N'];
    ll y = mp['S'];
    ll z = mp['U'];
    cout<<min3(x,y,z)<<endl;
    return 0 ;
}
//https://toph.co/p/niko-loves-nsu
