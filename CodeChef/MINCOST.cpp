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
bool is_shuffled_palindrome(const string & s) {
    vector<int> occurrence(26, 0);
    int odd_count = 0;
    for (char i : s) { occurrence[i - 'a']++; }
    for (int value : occurrence) {
        if (value % 2 != 0) {
            odd_count++;
        }
    }
    return odd_count <= 1;
}


int solution(string s) {
    int s_size = s.size();
    int result = 0;
    int start = 0, end = s_size - 1;

    // if string is empty or it is not a palindrome return -1
    if ((s_size == 0) || (!is_shuffled_palindrome(s))) {
        return -1;
    }

    while (end > start) {
        // if we found different chars
        if (s[start] != s[end]) {
            int i = end; // make an additional iterator from the end

            // move toward the start until we found the same char
            while (i > start && s[i] != s[start]) { --i; }

            // if we scanned whole the string and found
            // no one the same char swap char on the
            // start with adjacent char it needs for
            // case when the first char is not on it's
            // right place all other parts of the
            // algorithm don't process a char on the start
            if (i == start) {
                swap(s[start], s[start + 1]);
                ++result;
            }
            // if the same character found swap all
            // chars from i to the end
            else {
                while (i < end) {
                    swap(s[i], s[i + 1]);
                    ++result;
                    ++i;
                }
                ++start; --end;
            }
        }
        // if s[start] == s[end] shrink the processing window
        else {
            ++start; --end;
        }
    }
    return result;
}

/* for each index i, S[i] = S[N-i+1]
   F(i, j, S) => swap char at i, j if |i-j|<=1

*/

/* ========== YOUR CODE HERE ========= */


/* ========== Main Function ========= */

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    //int n;
    cin >> t;
    while (t--) {
        //cin >> n;
        string str;
        cin >> str;
        cout << solution(str);
        cout << endl;
    }
    return 0;
}
