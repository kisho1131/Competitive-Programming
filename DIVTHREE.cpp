#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
   ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif

   int t = 1;
   /*is Single Test case?*/
   cin >> t;
   while (t--)
   {
      solve();
      cout << "\n";
   }
   return 0;
}
void solve()
{
   int n, k, d;
   vector<int>v;
   cin >> n >> k >> d;
   for (int i = 0; i < n; i++) {
      int num;
      cin >> num;
      v.push_back(num);
   }
   // Syntax -> accumulate(v.begin(), v.end(), initial sum) //
   int sum = accumulate(v.begin(), v.end(), 0);
   int res = sum / k;
   int ans = 0;
   if (res > d)
      ans = d;
   else
      ans = res;
   cout << ans;
}
