#include<bits/stdc++.h>
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
#define fo(i, n) for(i=0;i<n;i++)
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
    uniform_int_distribution<int> uid(0, lim - 1);
    return uid(rang);
}

const int mod = 1000000007;
const int N = 3e5;
vi v[N];
int a[N];

/* ========== YOUR CODE HERE ========= */

void solution() {
    int n, m;
    cin >> n >> m;
    int x, y;
    cin >> x >> y;

    vector<int>res(n);
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        unordered_map<char, int> mp;
        int arr[3] = {0, 0, 0};
        for (auto ch : str) mp[ch]++;
        for (auto x : mp) {
            if (x.first == 'F') arr[0] = x.second;
            else if (x.first == 'P') arr[1] = x.second;
            else if (x.first == 'U') arr[2] = x.second;
        }
        // cout << "--" << arr[0] << " " << arr[1] << " " << arr[2] << "--" << endl;
        if (arr[0] >= x ) {
            res[i] = 1;
        }
        else if (arr[0] == x - 1 and arr[1] >= y) res[i] = 1;
        else res[i] = 0;
    }
    for (int i = 0; i < n; i++)
        cout << res[i];

}

/* ========== YOUR CODE HERE ========= */


/* ========== Main Function ========= */

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--) {
        solution();
        cout << endl;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_bas::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int count = 0;
        vector<int>arr(n + 1, 1);
        for (int i = 2; i <= n; i++) {
            int x = m % a;
            count += arr[x];
            for (int b = x; b <= n; b += i) {
                arr[b]++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
