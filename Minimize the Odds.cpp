#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a , i , b , odd=0;
    scanf("%llu",&a);
    for( i = 1 ; i <= a ;i++)
    {
        scanf("%llu",&b);
        if(b&1) odd++;
    }
    if(odd%2==0) printf("0\n");
    else printf("1\n");
    return 0 ;
}
//https://toph.co/p/minimize-the-odds
