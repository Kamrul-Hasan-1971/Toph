#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
vector<int>v1;
int main()
{
    int i, a, b, c, T ;
    scanf("%d",&T);
    while(T--)
    {
        mp.clear();
        v1.clear();
        int indx = 0,chk=0,sz=INT_MAX,l,r;
        scanf("%d%d",&a,&b);
        for( i = 0 ; i < a ; i++ )
        {
            scanf("%d",&c);
            v1.push_back(c);
            mp[c]++;
            if(mp.size()==b)
            {
                while(mp.size()==b)
                {
                    chk=1;
                    mp[v1[indx]]--;
                    if(mp[v1[indx]]==0)
                    {
                        mp.erase(v1[indx]);
                        if(sz>i-indx)
                        {
                            sz = i-indx;
                            l = indx+1 ;
                            r = i+1 ;
                        }
                    }
                    indx++;
                }
            }

        }
        if(chk) printf("%d %d\n",l,r);
        else printf("-1\n");
    }
    return 0 ;
}
//https://toph.co/p/easy-peasy-stickers
