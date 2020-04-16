/*#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("unroll-loops")*/
#include<bits/stdc++.h>
///#include <ext/pb_ds/assoc_container.hpp>
///#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
///using namespace __gnu_pbds;
///template<typename T> using orderset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

#define  CIN           ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  ll            long long int
#define  ull           unsigned long long int
#define  pii           pair < ll, ll>
#define  pll           pair < ll, pii>
#define  fs            first
#define  scnd          second
#define  mx4           1000005
#define  mod           1000000007
#define  mod2          1000000009
#define  pb            push_back
#define  min3(a,b,c)   min(a,min(b,c))
#define  min4(a,b,c,d) min(d,min(a,min(b,c)))
#define  max3(a,b,c)   max(a,max(b,c))
#define  max4(a,b,c,d) max(d,max(a,max(b,c)))
#define  ms(a,b)       memset(a,b,sizeof(a))
#define  mpp           make_pair
#define  gcd(a, b)     __gcd(a,b)
#define  lcm(a, b)     ((a)*(b)/gcd(a,b))
#define  input         freopen("input.txt","rt", stdin)
#define  output        freopen("output.txt","wt", stdout)
#define  PI            2*acos(0.0)
#define  zero(a)       memset(a,0,sizeof a)
#define  all(v)        v.begin(),v.end()
#define  rall(v)       v.rbegin(),v.rend()
#define  upper(s)      transform(s.begin(),s.end(),s.begin(), ::toupper)
#define  lower(s)      transform(s.begin(),s.end(),s.begin(), ::tolower)
#define  Unique(X)     (X).erase(unique(all(X)),(X).end())
#define  no            cout << "NO" << endl ;
#define  yes           cout << "YES" << endl;
#define  MX            200005
const ll INF = LLONG_MAX;

///Compute_phi_co_prime
/*void computeTotient(int n){ll phi[n+5];for (int i=1; i<=n; i++)phi[i] = i;for (int p=2; p<=n; p++)
{if (phi[p] == p){phi[p] = p-1;for (int i = 2*p; i<=n; i += p){phi[i] = (phi[i]/p) * (p-1);}}}}*/
///PrimeFactorization
/*void primeFact(ll n){for( int i = 0 ; prime[i]*prime[i] <= n ; i++ ){
if( n % v[i] == 0 ){ll cnt = 0 ;while( n % v[i] == 0 ){n = n / v[i] ;cnt++;}
vec.pb(pii(v[i],cnt));}}if( n > 1 ){vec.pb(pii(n,cnt)) ;}}*/
///power
/*ll pow( ll base , ll val ){ll res = 1 ;for(int i = 1 ; i <= val ; i++ ){res *= base ;}return res ;}*/
///Fibonacci
/*ll fib[ 100005 ] ;fib[ 1 ] = 1 ;fib[ 2 ] = 2 ;
for( int i = 3 ; i <= 100000 ; i ++ ){ fib[ i ] = ( fib[ i - 1 ] + fib[ i - 2 ] ) % MOD ;}*/
///leap_year
/*inline bool isLeapYear(ll year) { return (year%400==0) || (year%4==0 && year%100!=0); }*/

///priority_queue<int,vector<int>,greater<int> >pq;
///string s1 = "abcdefghijklmnopqrstuvwxyz";
///string s2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
///int days [14] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
///string month[14]= {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

///---------------Order set-------------------
///*os.find_by_order(index) os.order_of_key(value)

///--------------Graph Moves--------------------------------------
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------
#define nl '\n'
#define coutv(v) for(auto it:v)cout<<it<<space;cout<<nl;
#define cinv(v) for(auto &it:v)cin>>it;
vector<ll>v1,v2;
///vector<pii>v5;
string s1, s2, s3;
map<char,ll>mp;
///map<ll,ll>::iterator it;
///ll ara[100005];
///multiset<ll>ms;
///multiset<ll>::iterator it;
///set<ll>st;
///set<ll>::iterator it;
long long fun(long long a, long long b)
{
    long long res = 0;
    a %= mod;
    while (b)
    {
        if (b & 1)
            res = (res + a) % mod;
        a = (2 * a) % mod;
        b >>= 1;
    }
    return res;
}

int main()
{

    ll  a,b,c,d,e,f,n,x,i,j,k,cnt1=0,cnt2=0,sum1=0,sum2=0,chk1=0,chk2=0,T;
    cin >> T ;
    while(T--)
    {
        cnt1++;
        sum1=1;
        cin >> a ;
        for( i = 0 ; i < a ; i++)
        {
            s1="";
            stringstream ss;
            ss.clear();
            cin >> b >> c ;
            ll x = c, y, lagbe;
            for( j = 1 ; j<= b ; j++)
                s1+='9';
            ss<<s1;
            ss>>y;
            lagbe=y+1;
            y-=c;
            ll gap = y-x;
            if(c>0)
            {
                c=c*2;
                c++;
                lagbe = gap/c;
                if(gap%c)lagbe++;
                lagbe++;
            }
            if(x>y)
            {
                lagbe=1;
            }
            sum1=fun(sum1,lagbe);

        }
        printf("Case %lld: %lld\n",cnt1,sum1);
    }
    return 0 ;
}
//https://toph.co/p/combination-lock
