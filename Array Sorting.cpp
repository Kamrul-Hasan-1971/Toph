#include<bits/stdc++.h>
using namespace std;
#define  ll            long long int
#define  pb            push_back
vector<ll>v1;
int main()
{
    ll  a,b,c,d,e,f,n,x,i,j,k,cnt1=0,cnt2=0,sum1=0,sum2=0,chk1=0,chk2=0,T;
    cin>>T;
    while(T--)
    {
        cnt1++;
        int chk=0;
        v1.clear();
        cin >> n >> k >> x;
        for(i = 0 ; i < n ; i++)
        {
            cin >> a ;
            v1.pb(a);
        }
        for(i=1;i<n;i++)
        {
            if(v1[i]<v1[i-1])
            {
                ll gap = v1[i-1]-v1[i];
                ll lagbe = gap / x ;;
                if(gap%x) lagbe++;
                if(lagbe>k)
                {
                    chk=1;
                    break;
                }
                else
                {
                    k-=lagbe;
                }
                v1[i]+=(lagbe*x);
            }
        }
        if(chk)
        {
            printf("Case %lld: NO\n",cnt1);
        }
        else
        {
            printf("Case %lld: YES\n",cnt1);
        }
    }
    return 0 ;
}
//https://toph.co/p/array-sorting
