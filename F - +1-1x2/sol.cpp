実行時間制限: 2 sec / メモリ制限: 1024 MB

配点 : 600 点

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
#define uwu ios::sync_with_stdio(false);cin.tie(nullptr);
typedef pair<ll,ll>PLL;typedef pair<int,int>PII;typedef pair<double,double>PDD;
inline ll read(){ll x=0,f=1;char ch=getchar();while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}return x*f;}
#define read read()
const int mod=998244353;
const int mx=2e5+5;
const int inf=0x3f3f3f3f;
template<class T>bool cmin(T &a,const T &b){if(b<a){a=b;return 1;}return 0;}
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
ll x,y,ans=inf;
map<ll,ll> seq;
ll sol(ll a) {
  uwu
  if(seq.count(a)) return seq[a];
  if(a<=x) return x-a;
  if(a&1) return seq[a]=min(min(sol((a+1)/2),sol((a-1)/2))+2,a-x);
  else return seq[a]=min(sol(a/2)+1,a-x);
}
int main(){
  x=read,y=read;
  cout << sol(y);
  return 0;
}
