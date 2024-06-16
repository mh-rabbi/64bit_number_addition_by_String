
#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

#define min3(a,b,c)                min(a,min(b,c))
#define FASTio                     ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp                         " "
#define nl                         <<'\n'
#define yes                        cout<<"YES" nl
#define no                         cout<<"NO" nl

string add(string n1, string n2)
{
    ll i=n1.size()-1, j=n2.size()-1, c=0;
    string ans="";

    while(i>=0 or j>=0 or c)
    {
        ll sum=0;
        if(i>=0)
        {
            sum += (n1[i]-'0');
            i--;
        }
        if(j>=0)
        {
            sum += (n2[j]-'0');
            j--;
        }
        sum += c;
        c = sum/10;
        sum = sum%10;
        ans = to_string(sum)+ans;
    }
    return ans;
}

void solve()
{
    string a,b;
    cin>>a>>b;
    string sum= add(a,b);
    cout<<sum nl;
}

int main()
{
    FASTio

////Without testcase:
//    solve();
//With testcase:
    ll t;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
