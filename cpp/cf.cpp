#ifdef __GNUC__
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

#endif

#include <bits/extc++.h>
#include <bits/stdc++.h>

using namespace std;

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) {
  return os << '(' << p.first << ", " << p.second << ')';
}
template <typename T_container, typename T = typename enable_if<
                                    !is_same<T_container, string>::value,
                                    typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v) {
  os << '{';
  string sep;
  for (const T &x : v)
    os << sep << x, sep = ", ";
  return os << '}';
}

// datastructures

#define V vector
#define VI V<int>
#define VVI V<V<int>>
#define UMAP unordered_map
#define USET unordered_set
#define PQ priority_queue
#define PQI PQ<int>
#define PQR <a> PQ<a, V<a>, greater<a>>

// hashing functions
namespace std {
template <class T, class U> struct hash<pair<T, U>> {
  size_t operator()(const pair<T, U> &x) const {
    return hash<T>()(x.first) ^ hash<U>()(x.second);
  }
};

template <class T> struct hash<V<T>> {
  size_t operator()(const V<T> &x) const {
    size_t res = 0;
    for (const T &t : x)
      res ^= hash<T>()(t);
    return res;
  }
};
} // namespace std

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define LL long long
#define LD long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

#define FOR(i, a, b) for (int i = (a); i < (b); i++)

#define F0R(i, a) FOR(i, 0, a)

#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); i--)

#define R0F(i, a) ROF(i, 0, a)

#define trav(a, x) for (auto &a : x)

#define pb push_back

#define pf push_front

#define rsz resize

#define ins insert

#define ENDL '\n'

const int MAX_N = 1e5 + 5;
const LL MOD = 1e9 + 7;
const LL INF = 1e9;
const LD EPS = 1e-9;

void solve() {}

#define MULTICASE true
#define CASE_NUMBER true

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int tc = 1;
#if MULTICASE
  cin >> tc;
#endif

  for (int t = 1; t <= tc; t++) {
#ifdef LOCAL && CASE_NUMBER
    cout << "Case #" << t << ": ";
#endif
    solve();
  }
}