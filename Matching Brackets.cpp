#include<bits/stdc++.h>
using namespace std;
string s1 ;
vector<char>v1;
int main()
{
    int i ;
    cin>>s1;
    for( i = 0 ; i < s1.size() ; i++ )
    {
        if(s1[i]=='(' || s1[i]=='{' || s1[i]=='[' )
        {
            v1.push_back(s1[i]);
        }
        else
        {
            if(v1.size())
            {
                if(s1[i]==')' && v1.back()=='(')
                {
                    v1.pop_back();
                }
                else if(s1[i]=='}' && v1.back()=='{')
                {
                    v1.pop_back();
                }
                else if(s1[i]==']' && v1.back()=='[')
                {
                    v1.pop_back();
                }
                else
                {
                    cout<<"No"<<endl;
                    return 0;
                }
            }
            else
            {
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    if(v1.size()) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0 ;
}

