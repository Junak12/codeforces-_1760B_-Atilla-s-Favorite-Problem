#include<bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    opt();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int sz=s.size();
        char s1;
        for(int i=0;i<s.size();i++)
        {
            if(i==s.size()-1)
            {
                s1=s[i];
            }
        }
        vector< pair<char,int>>p;
        for(char i='a';i<='z';i++)
        {
            int cnt=i-'a'+1;
            p.push_back(make_pair(i,cnt));
        }
        for(auto d:p)
        {
            if(d.first==s1)
            {
                cout<<d.second<<endl;
            }
        }
    }
    return 0;
}
