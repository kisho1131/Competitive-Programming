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
   long long int n, m;
   long long int jhonSum = 0;
   long long int jackSum = 0;
   cin >> n >> m;
   vector<long long int>jhon;
   vector<long long int>jack;
   for (int i = 0; i < n; i++) {
      int num;
      cin >> num;
      jhon.push_back(num);
   }

   for (int i = 0; i < m; i++) {
      int num;
      cin >> num;
      jack.push_back(num);
   }
   jhonSum = accumulate(jhon.begin(), jhon.end(), 0);
   jackSum = accumulate(jack.begin(), jack.end(), 0);

   //cout << jhonSum << " " << jackSum << "->>";
   if (jhonSum > jackSum) {
      cout << 0;
   }
   else {
      int j = 0;
      int c = 0;
      sort(jhon.begin(), jhon.end());
      sort(jack.begin(), jack.end());
      reverse(jack.begin(), jack.end());
      for (int i = 0; i < n; i++) {
         if (j < m) {
            jhonSum = jhonSum - jhon[i] + jack[j];
            jackSum = jackSum - jack[j] + jhon[i];
            swap(jhon[i], jack[j]);
            c++;
            j++;
            if (jhonSum > jackSum)
               break;
         }
      }
      if (c != 0)
         cout << c;
      else
         cout << -1;
   }
}




// else {
//    int start = 0;
//    sort(jhon.begin(), jhon.end());
//    sort(jack.begin(), jack.end());
//    reverse(jack.begin(), jack.end());
//    while (jhonSum <= jackSum && start <= n) {
//       jhonSum = jhonSum - jhon[start] + jack[start];
//       jackSum = jackSum - jack[start] + jhon[start];
//       swap(jhon[start], jack[start]);
//       count++;
//       start++;
//    }
//    if (count == 0) {
//       cout << -1;
//    }
//    else {
//       cout << count;
//    }
// }
