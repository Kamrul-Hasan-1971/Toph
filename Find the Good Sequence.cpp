#include<bits/stdc++.h>
using namespace std;
vector<int>v1;
int ara[1000006];
int main()
{
    int i ,a, b , j;
    cin >> a ;
    for( i = 0 ; i < a ; i++ )
    {
        cin >> b ;
        v1.push_back(b);
    }
    for( i = 0 ; i < a ; i++ )
    {
        if(ara[i]==0)
        {
            int cnt = 1 ;
            int ini = v1[i] ;
            for( j = i+1 ; j < a ; j++ )
            {
                if(v1[j]>ini && v1[j]-ini >= 2 )
                {
                    ini = v1[j];
                    cnt++;
                }
                else break;
            }
            int x = i ;
            while(cnt)
            {
                ara[x]=cnt;
                x++;
                cnt--;
            }
        }
    }
    for( i = 0 ; i < a ;i++ )
    {
        if(ara[i]==1) ara[i]=0;
        cout<<ara[i]<<endl;
    }
    return 0 ;
}
//https://toph.co/p/find-the-good-sequence
