#include<bits/stdc++.h>
using namespace std;
int fq[28];
int main()
{
    int T , i , a , b ;
    scanf("%d",&T);
    while(T--)
    {
        memset(fq,0,sizeof fq);
        scanf("%d",&a);
        int half = a/2 ,chk = 0 ;
        char ara[a+2];
        scanf("%s",ara);
        for( i = 0 ; i < a ; i++)
        {
            fq[ara[i]-'a'+1]++;
            if(fq[ara[i]-'a'+1]>half)
            {
                chk=1;
                break;
            }
        }
        printf("%d\n",chk);
    }
    return 0 ;
}
//https://toph.co/p/shiku-gets-lucky
