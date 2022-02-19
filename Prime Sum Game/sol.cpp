#include <iostream>
#include <iomanip>
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
#define pb push_back
#define mp make_pair
#define gcc ios::sync_with_stdio(false); cin.tie(nullptr);

template <typename T>
inline void read(T &f) {
    f = 0; T fu = 1; char c = getchar();
    while (c < '0' || c > '9') { if (c == '-') fu = -1; c = getchar(); }
    while (c >= '0' && c <= '9') { f = (f << 3) + (f << 1) + (c & 15); c = getchar(); }
    f *= fu;
}
 
template <typename T>
void print(T x) {
    if (x < 0) putchar('-'), x = -x;
    if (x < 10) putchar(x + 48);
    else print(x / 10), putchar(x % 10 + 48);
}
 
template <typename T>
void print(T x, char t) {
    print(x); putchar(t);
}

template<class T> bool cmin(T &a, const T &b) {
    if(b < a) {
       a = b;
       return 1;
    }
    return 0;
}

void mxc(intmax_t &a, intmax_t b) {
    a = min(a, b);
}

void mxh(intmax_t &a, intmax_t b) {
    a = max(a, b);        
}

constexpr int64_t mod = 1e9 + 7;
const int mx = 2e5 + 5;
const int inf = 0x3f3f3f3f;

int64_t gcd(int64_t a, int64_t b) {
    return b ? gcd(b, a%b) : a;
}

int64_t lcm(int64_t a,int64_t b) {
    return a / gcd(a, b) * b;
}

const int n = 305;
bool is[n];
    
void sol() {
    gcc
    for(int i = 2; i < n; ++i) {
       if(!is[i]) {
          for(int j = 2 * i; j < n; j += i) {
             is[j] = true;
          }
       }
    }
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    for(int i = a; i <= b; ++i) {
       bool ok = true;
       for(int j = c; j <= d; ++j) {
          if(!is[i + j]) {
             ok = false;
          }
       }
       if(ok) {
          cout << "Takahashi";
          return;
       }
    }
    cout << "Aoki";
    return;                   
}
                	
int main() {
    sol();
    return 0;
}
