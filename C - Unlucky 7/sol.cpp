C - Unlucky 7  / 
実行時間制限: 2 sec / メモリ制限: 1024 MB

配点 : 
300
 点
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <math.h>
#include <map>
#include <unordered_map>
#include <numeric>
#include <functional>
 
#define FOR(i,a,b) for(int i=(a); i<=(b); ++i)
#define REP(i,j) FOR(i,0,(j)-1)
#define pb push_back
#define mp make_pair
#define MOD 1000000007
const int inf = 0x3f3f3f3f;
typedef long long ll;
typedef unsigned long long ull;
typedef double long dl;
 
int sol() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(0);
 
    int N;
    std::cin >> N;
    int ans = 0;

    std::vector<int> res;
    std::vector<int> total;
    std::vector<int> decimal;
    std::vector<int> sequence;
    std::vector<std::string> stream;
 
    FOR(k, 1, N) decimal.pb(k);
    FOR(k, 1, N) res.pb(k);

    for(unsigned int k = 0; k < res.size(); ++k) {
        int octal = 0;
        int i = 1;
        while(res[k] != 0) {
            int sum = res[k] % 8;
            res[k] /= 8;
            octal += sum * i;
            i *= 10;
        }
        total.pb(octal);
    }

    for(unsigned int k = 0; k < total.size(); ++k) {
        if(std::to_string(total[k]).find('7') != std::string::npos) {
            stream.pb(std::to_string(decimal[k]));
        }
    }

    for(unsigned int k = 0; k < decimal.size(); ++k) {
        if(std::to_string(decimal[k]).find('7') != std::string::npos) {
            stream.pb(std::to_string(decimal[k]));
        }
    }
  
    std::sort(stream.begin(), stream.end());

    for(unsigned int k = 0; k < stream.size(); ++k) {
        if(stream[k] != stream[k+1]) {
            ans++;
        }
    }

    std::cout << N-ans;
    return 0;
}
 
int main() {
    
    #ifndef ONLINE_JUDGE
    freopen("IN.txt", "r", stdin);
    freopen("OUT.txt", "w", stdout);
    #endif
 
    sol();
    return 0;
}
