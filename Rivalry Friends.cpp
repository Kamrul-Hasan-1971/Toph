#include<bits/stdc++.h>
using namespace std;

#define           ll                 long long int
#define           MX                 100005

ll phi[MX];

ll tree[MX*3],ara[MX+3];

void built_tree( int node, int a, int b )
{
    if( a == b )
    {
        tree[node] = ara[a] ;
        return ;
    }
    int left = node << 1 ;
    int right = ( node << 1)+ 1 ;
    int mid = ( a + b ) / 2 ;

    built_tree( left, a, mid ) ;
    built_tree( right, mid+1, b ) ;
    tree[node] = tree[left] + tree[right] ;
}

void update_tree( int node, int a, int b, int indx, ll newValue)
{
    if( indx > b  || indx < a )
        return ;
    if( a == b)
    {
        tree[node] = newValue ;
        return ;
    }
    int left = node << 1 ;
    int right = ( node << 1)+ 1 ;
    int mid = ( a + b ) / 2 ;
    update_tree( left, a, mid, indx,  newValue ) ;
    update_tree( right, mid+1, b, indx, newValue ) ;
    tree[node] = tree[left] + tree[right] ;
}

ll query_tree( int node, int a, int b, int i, int j )
{
    if( i > b || j < a )
        return 0 ;
    if( a >= i  && b <= j )
        return tree[node] ;

    int left = node << 1 ;
    int right = ( node << 1)+ 1 ;
    int mid = ( a + b ) / 2 ;
    ll ret1 = query_tree( left, a, mid, i, j ) ;
    ll ret2 = query_tree( right, mid+1, b, i, j ) ;
    return ret1+ret2 ;
}

void computeTotient(int n)
{
    for (int i=1; i<=n; i++)
        phi[i] = i;

    for (int p=2; p<=n; p++)
    {
        if (phi[p] == p)
        {
            phi[p] = p-1;
            for (int i = 2*p; i<=n; i += p)
            {
                phi[i] = (phi[i]/p) * (p-1);
            }
        }
    }
}

int main()
{
    ll  a,b,c,d,e,f,n,q,i,j,k,cnt1=0,cnt2=0,sum1=0,sum2=0,chk1=0,chk2=0,T;
    computeTotient(100001);

    cin >> n >> q ;

    for( i = 1 ; i <= n ; i++ )
    {
        cin >> a ;
        ara[i]=phi[a];
    }
    built_tree( 1, 1, n ) ;

    for( i = 1 ; i <= q ; i++ )
    {
        cin >> a >> b >> c ;

        if( a == 1 )
        {
            update_tree( 1, 1, n, b, phi[c] ) ;
        }
        else
        {
            cout<<query_tree( 1, 1, n, b, c )<<endl ;
        }
    }
    return 0 ;
}
//https://toph.co/p/rivalry-friends
