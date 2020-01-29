#include<bits/stdc++.h>
using namespace std;
#define           ll                 long long int
#define           pb                 push_back
#define           all(v)             v.begin(),v.end()

vector<ll>v1[10],sum[10];
ll ara[200005];
bool mark[200005];
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
    sieve(200003);
    ll  a,b,c,d,e,f,i,j,k,cnt1=0,cnt2=0,sum1=0,sum2=0,chk1=0,chk2=0,T;

    for( i = 0 ; i < prime.size() ; i++ )
    {
        ll x = prime[i];
        while(x<=200000)
        {
            ara[x]++;
            x+=prime[i];
        }
    }

    for( i = 1 ; i <= 200000 ; i++ )
    {
        v1[ara[i]].pb(i);
    }

    for( i = 0 ; i < 7 ; i++)
    {
        if(v1[i].size()==0)
            continue;
        sum[i].pb(v1[i][0]);
        for( j = 1 ; j < v1[i].size() ; j++ )
        {
            sum[i].pb(sum[i].back()+v1[i][j]);
        }
    }

    scanf("%lld",&a);
    for( i = 0 ; i < a ; i++ )
    {
        scanf("%lld%lld%lld%lld",&b,&c,&d,&e);
        ll bad = d-1;
        ll res = 0 ;
        ll res2 = 0 ;
        ll pass = 0 ;
        for( j = 0 ; j <= 6 ; j++ )
        {
            ll x = lower_bound(all(v1[j]),c)-v1[j].begin();
            ll y = upper_bound(all(v1[j]),c+b-1)-v1[j].begin();
            y--;
            if( x < v1[j].size() && y >= 0)
            {
                ll ele = y-x+1;
                pass+=ele;
                if(bad)
                {
                    ll mn = min(bad,ele);
                    ll del = 0 ;
                    if(x!=0)
                    {
                        del = sum[j][x-1];
                    }
                    res+=(sum[j][x+mn-1]-del);
                    bad -= mn ;
                }

                ll del = 0 ;
                if(x!=0)
                {
                    del = sum[j][x-1];
                }
                if(pass>=e)
                {
                    ll beshi = pass-e;
                    y -= beshi ;
                    res2+=(sum[j][y]-del);
                    break;
                }
                res2+=(sum[j][y]-del);
            }
        }
        printf("%lld\n",res2-res);
    }
    return 0 ;
}
//https://toph.co/p/beauty-factor
