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
#define read read()
const int mod=998244353;
const int mx=2e5+5;
const int inf=0x3f3f3f3f;
template<class T>bool cmin(T &a,const T &b){if(b<a){a=b;return 1;}return 0;}
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
template <typename T> void print(T x){if(x<0)putchar('-'),x=-x;if(x<10) putchar(x+48);else print(x/10),putchar(x%10+48);}
template <typename T> void print(T x,char t){print(x);putchar(t);}

void sol() {
  rng
  int n;
  n=read;
  vector<ll> R(n), C(n);
  for(int i = 0; i < n; ++i) cin >> R[i];
  for(int i = 0; i < n; ++i) cin >> C[i];
  int q;
  q=read;
  vector<ll> r(q), c(q);
  string ans;
  for(int i = 0; i < q; ++i) {
    cin >> r[i];
    cin >> c[i];
    --r[i], --c[i];
    ans.pb((R[r[i]]+C[c[i]])>=n+1?'#':'.');
  }
  printf("%s \n", ans.c_str());
  return;
}

int main(){
  sol();
  return 0;
}
