#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define ll long long
#define PI 3.1415926535897932384626
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define br printf("\n")
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define deba(i, a, n)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for (auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for (auto it = x.rbegin(); it != x.rend(); it +)
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
  uniform_int_distribution<int> uid(0, lim - 1);
  return uid(rang);
}

const int mod = 1000000007;
const int N = 3e5;
vi v[N];
int a[N];

/* ============ Your Code Here ================ */
void Permutation(string str, string prem) {
  if (str.length() == 0) {
    cout << prem << endl;
    return;
  }
  unordered_set<char> s;
  for (int i = 0; i < str.size(); i++) {
    char ch = str[i];
    if (s.count(ch) == 0) { // => Handle the Duplicate Conditation
      string res = str.substr(0, i) + str.substr(i + 1);
      // Subtring --> O(N)
      s.insert(ch);
      Permutation(res, prem + ch);
    }
  }
}
void lexico(int n, int i) {
  if (n < i)
    return;
  cout << i << endl;
  for (int j = (i == 0) ? 1 : 0; j <= 9; j++)
    lexico(n, 10 * i + j);
}

void solve() {
  // lexico(10, 0);
  Permutation("AAC", "");
}

/* ============= Main Function() ================*/
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int t = 1;
  /*is Single Test case?*/
  cin >> t;
  while (t--) {
    solve();
    cout << "\n";
  }
  return 0;
}
