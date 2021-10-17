#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
typedef pair<ll,ll>PLL;typedef pair<int,int>PII;typedef pair<double,double>PDD;
inline ll read(){ll x=0,f=1;char ch=getchar();while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}return x*f;}
#define read read()
const int mod=998244353;
const int mx=2e5+5;
const int inf=0x3f3f3f3f;
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int n,
a[3010],
b[3010],
dp[3010][3010];
ll sol() {
  n=read;
  ll ans=0;
  for(int i=1;i<=n;++i)a[i]=read+1;
  for(int i=1;i<=n;++i)b[i]=read+1;
  for(int i=a[1];i<=b[1];++i)dp[1][i]=1;
  
  for(int i=2;i<=n;++i) {
    int c=0;
    for(int j=0;j<=b[i];++j) {
      c=(dp[i-1][j]+c)%mod;
      if(j>=a[i])dp[i][j]=c;
    }
  }
  for(int i=a[n];i<=b[n];++i){
    ans=(dp[n][i]+ans)%mod;
  }
  return ans;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << sol();
  return 0;
}
