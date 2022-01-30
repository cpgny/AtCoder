#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <vector>
#include <bitset>
#include <cmath>
#include <string>
#include <stack>
#include <set>
#include <map>
#include <queue>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define rng ios::sync_with_stdio(false);cin.tie(nullptr);
typedef pair<ll,ll>PLL;typedef pair<int,int>PII;typedef pair<double,double>PDD;
inline ll read(){ll x=0,f=1;char ch=getchar();while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}return x*f;}
template <typename T> void print(T x){if(x<0)putchar('-'),x=-x;if(x<10) putchar(x+48);else print(x/10),putchar(x%10+48);}
template <typename T> void print(T x,char t){print(x);putchar(t);}
template<class T>bool cmin(T &a,const T &b){if(b<a){a=b;return 1;}return 0;}
#define read read()
constexpr int64_t mod=1e9+7;
const int mx=2e5+5;
const int inf=0x3f3f3f3f;
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

string sol() {
  rng
  string s;
  cin >> s;
  string p = s;
  string ans="";
  reverse(p.begin(), p.end());
  if(s == p) ans="Yes";
  else{
  	vector<int> seq;
    vector<int> a_seq;
    for(int i = 0; i < s.length(); ++i) {
    	int c = 0;
  	    while(s[i] == 'a') {
  	    	c++;
  		    break;
  	    }
  	    seq.pb(c);
    }
    for(int i = 0; i < p.length(); ++i) {
    	int c = 0;
  	    while(p[i] == 'a') {
  	    	c++;
  		    break;
  	    }
  	    a_seq.pb(c);
    }
    int qp = 0, pq = 0;
    for(int i = 0; i < seq.size(); ++i) {
    	if(seq[i] == 0){
    		qp=i;
  		    break;
  	    }
    } 
    for(int i = 0; i < a_seq.size(); ++i) {
    	if(a_seq[i] == 0){
    		pq=i;
  		    break;
  	    }
    }
    string add="";
    int dif = pq-qp;
    if(dif>0) {
    	for(int i = 0; i < dif; ++i) {
    		add+='a';
    	}
    }
    add+=s;
    string rev = add;
    reverse(rev.begin(),rev.end());
    if(add==rev){cout<<"Yes";}
    else{cout<<"No";}
  }  
  return;
}
 
int main() {
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    #endif
 
    sol();
    return 0;
}
