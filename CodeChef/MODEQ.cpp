#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int count = 0;
        vector<int>arr(n + 1, 1);
        for (int i = 2; i <= n; i++) {
            int x = m % i;
            count += arr[x];
            for (int b = x; b <= n; b += i) {
                arr[b]++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
