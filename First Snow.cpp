#include<bits/stdc++.h>
using namespace std;
#define  CIN           ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  ll            long long int
#define  pb            push_back

vector<ll>v1;
int main()
{
    CIN;
    ll  a,b,c,d,e,f,n,x,i,j,k,cnt1=0,cnt2=0,sum1=0,sum2=0,chk1=0,chk2=0,T;
    cin >> a>> b >> c ;
    for( i = 0 ; i <a ; i++)
    {
        cin >> d ;
        v1.pb(d);
    }
    while(1)
    {
        sum1=0;
        cnt1++;
        for( i = 0 ; i < cnt1  ; i++)
        {
            if(v1[i]>0)
            {
                sum1+=v1[i];
            }
        }
        if(sum1>=b)
        {
            cout<<cnt1<<endl;
            return 0;
        }
        for( i = 0 ; i < cnt1 ; i++)
        {
            v1[i]-= c;
        }
    }
    return 0 ;
}
//https://toph.co/p/first-snow
