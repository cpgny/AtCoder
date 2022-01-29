Time Limit: 2 sec / Memory Limit: 1024 MB

配点 : 400 点

問題文
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

void sol() {
  rng
  int n;cin>>n;
  string s;cin>>s;
  vector<int> q[26];
  for(int i = 0; i < n; ++i) {
  	q[s[i]-'a'].pb(i);
  }
  int u = n;
  for(int i = 0; i < n; ++i) {
  	int ns = s[i]-'a';
  	for(int j = 0; j < ns; ++j) {
  		int y = lower_bound(q[j].begin(), q[j].end(), u)-q[j].begin();
  		--y;
  		if(y==-1) continue;
  		if(q[j][y]>i){
  			swap(s[i], s[q[j][y]]);
  			u=q[j][y];
  			break;
  		}
  	}
  }
  cout << s <<'\n';
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
