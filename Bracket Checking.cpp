#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
#define pb push_back
#define popb pop_back
#define pf push_front
#define popf pop_front
#define gcd __gcd
#define int_string to_string
#define string_int stoi
#define mn(v) *min_element(v.begin(), v.end())
#define mx(v) *max_element(v.begin(), v.end())
#define index_character s.find('character')
#define countxchar count(s.begin(), s.end(), 'x')
#define index_ofX_vector find(v.begin(), v.end(), x) - v.begin()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define n1 cout << "-1" << endl
#define sorted is_sorted(v.begin(), v.end())
#define nl << endl
#define sp << " "
#define mp make_pair
#define fi first
#define se second
#define Mx LLONG_MAX
#define Mn LLONG_MIN
#define mod %1000000007
const ll N = 2e5+5;
// ordered set// ordered_of_key(k);
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// #define ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
// using namespace __gnu_pbds;

// freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
// BesidesDuplicateCharacterEraseInString s.erase(unique(s.begin(), s.end()), s.end());
// Upper/lower-> transform(s.begin(), s.end(), s.begin(), ::toupper/tolower);
using namespace std;
ll i, j, k, n, m;
const ll e=1e+9;
bool comp(pair<long double,ll> a,pair<long double,ll> b){
    if(a.fi==b.fi) return (a.se<b.se); return (a.fi>b.fi);}
// Don't get stuck on a single approach for long, think of multiple ways
// You will destroy your dream if you stay in your comfort zone
// **********************|| Main Code ||********************************
//

int main()
{ 
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll test = 1;
    // cin >> test;  
    again: 
    while (test--)
    {   
        ll n; string s;
        cin>>n>>s;
        ll open=0,close=0;
        ll countopen=0,countclose=0;
        for(i=0,j=n-1;i<n;i++,j--){
            if(s[i]==')'){
                open--;
                if(open<0) countopen++,open=0;
            }
            else open++;
            if(s[j]=='('){
                close--;
                if(close<0) countclose++,close=0;
            }
            else close++;
        }
        if(countopen+countclose==0) cout << "Correct Seq." nl;
        else cout << "Incorrect Seq." nl;
    }       
}
