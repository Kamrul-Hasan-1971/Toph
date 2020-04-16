#include<bits/stdc++.h>
using namespace std;
#define  ll             long long int
int main()
{
    ll  a,b,c,d,e,f,i,j,T;
    cin >> T ;
    for( i= 1 ; i<= T ; i++)
    {
        cin >> a ;
        ll nw = 0 ,x=1;
        printf("Case %lld:\n",i);
        for( j = 1 ; j <= a ; j++)
        {
            printf("Day = %lld, New = %lld, Total = %lld\n",j,nw,x);
            ll p =x ;
            x*=3;
            nw=x-p;
        }
    }

    return 0 ;
}
//https://toph.co/p/code-at-the-time-of-pandemic
