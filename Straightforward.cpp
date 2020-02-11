#include<bits/stdc++.h>
using namespace std;
#define           all(v)             v.begin(),v.end()
#define           pb                 push_back

vector<int>v1[1000005],wrong;
string s1;
int ara[1000005];


int main()
{
    int a,b,c,ans=0,i,T;
    cin >> c>>s1 ;
    for( i = 0 ; i < c ; i++)
    {
        if(s1[i]=='(') ara[i]=1;
        else ara[i] = -1 ;
    }


    for( i = 1 ; i < c ; i++)
    {
        ara[i] += ara[i-1];
        if(s1[i]==')')
        {
            if(ara[i]<0)
            {
                v1[abs(ara[i])+500000].pb(i);
            }
            else v1[ara[i]].pb(i);
        }
    }
    scanf("%d",&T);
    for( i = 0 ; i < T ; i++ )
    {
        scanf("%d%d",&a,&b);
        a--;
        b--;
        if( a==b || s1[a] == ')' )
        {
            ans = 0 ;
        }
        else
        {
            int val =ara[a];
            val--;
            if(val<0)
            {
                val = abs(val)+500000;
            }
            int x = upper_bound(all(v1[val]),b)-v1[val].begin();
            x--;
            if(x>=0 && v1[val][x]>a)
            {
                int res = v1[val][x];
                int val2 = ara[a];
                val2-=2;
                if(val2<0)
                {
                    val2=abs(val2)+500000;
                }
                int y = upper_bound(all(v1[val2]),a)-v1[val2].begin();
                if(y<v1[val2].size())
                {
                    res = min(res,v1[val2][y]-1);
                }
                ans = res-a+1;
            }
            else
            {
                ans = 0 ;
            }
        }
        if(ans<0) ans = 0 ;
        printf("%d\n",ans);
    }

    return 0 ;
}
//https://toph.co/p/straightforward
