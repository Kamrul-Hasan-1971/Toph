#include<bits/stdc++.h>
using namespace std;
#define  ll            long long int
#define  all(v)        v.begin(),v.end()
#define  pb            push_back
bool mark[10000005];
vector<ll>prime;
void sieve(ll x)
{
    ll i,j;
    mark[1] = 1;
    for(ll i =4; i<=x; i=i+2)
        mark[i]=1;
    for(i=3; i*i<=x; i+=2)
    {
        if(!mark[i])
        {
            for(j=i*i; j<=x; j+=2*i)
                mark[j]=1;
        }
    }
    prime.pb(2);
    for(i=3; i<=x; i+=2)
    {
        if(mark[i]==0)
            prime.pb(i);
    }
}
int main()
{
    sieve(100000);
    ll  a,i,T;
    cin>>T;
    while(T--)
    {
        cin>>a;
        ll x=lower_bound(all(prime),a)-prime.begin();
        x--;
        ll y=upper_bound(all(prime),a)-prime.begin();
        cout<<prime[x]<<" "<<prime[y]<<endl;
    }
    return 0 ;
}
//https://toph.co/p/find-prime
