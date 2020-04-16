#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define  CIN           ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ff first
#define ss second
#define mp make_pair
using namespace std;
typedef long long LL;
typedef pair<LL, LL> PLL;

const LL M=100000007;
const LL base=347;
const int N = 1e6+7;
string s1[3005],s2[3005],s3;
LL ara[100000009];
vector<LL>v1;
LL b ;

LL fun1(LL x, LL y)
{
    LL k,cnt1=0;

    LL ans = 0;
    for(k=x; cnt1<b ; k++)
    {
        cnt1++;
        for (int i=y; i<y+b; i++){
            ans=(ans*base + s1[k][i])%M;
        }
    }
    return ans;
}
LL fun2(LL x, LL y)
{
    LL k,cnt1=0;

    LL ans = 0;
    for(k=x; cnt1<b ; k++)
    {
        cnt1++;
        for (int i=y; i<y+b; i++){
            ans=(ans*base + s2[k][i])%M;
        }
    }
    return ans;
}
int main()
{

    CIN;
    LL  a,c,d,e,f,n,x,i,j,k,cnt1=0,cnt2=0,sum1=0,sum2=0,chk1=0,chk2=0,T;
    cin >> T ;
    while(T--)
    {
        LL sum1=0;
        cnt1++;
        cin >> a >> b ;
        for( i = 0 ; i < a ; i++)
        {
            cin>>s1[i];
        }
        for( i = 0 ; i < a ; i++)
        {
            cin>>s2[i];
        }
        for( i = 0 ; i <= a-b ; i++)
        {
            for( j = 0 ; j <= a-b ; j++)
            {
                LL m = fun1(i,j);
                v1.push_back(m);
                ara[m]++;
            }
        }
        for( i = 0 ; i <= a-b ; i++)
        {
            for( j = 0 ; j <= a-b ; j++)
            {
                sum1+=ara[fun2(i,j)];
            }
        }
        printf("Case %lld: %lld\n",cnt1,sum1);
        for(i = 0 ; i<v1.size();i++) ara[v1[i]]=0;
        v1.clear();
    }
    return 0 ;
}
//https://toph.co/p/photo-matching
