#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
const int INF = 1001001001;
const ll LINF = 3001001001001001001;
const int MOD = 998244353;
#define reps(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define all(a) (a).begin(), (a).end()
template <typename T> istream &operator>>(istream &is, vector<T> &v) {for (T &in : v)is >> in;return is;}

int main() {
  int n;cin>>n;
  vector<int> p(n);cin>>p;
  int Q;cin>>Q;
  while(Q--) {
    int a,b;cin>>a>>b;
    rep(i,n) {
      if(p.at(i)==a) {
        cout << a << endl;
        break;
      }
      if(p.at(i)==b) {
        cout << b << endl;
        break;
      }
    }
  }

  return 0;
}
