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
   int n;
   string str;
   cin >> n;
   cin >> str;
   char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};
   vector<string> v;
   int size = n;
   for (int i = 0; i < size; i = i + 4) {
      v.push_back(str.substr(i, 4));
   }
   for (int i = 0; i < v.size(); i++) {
      int index = stoi(v[i], 0, 2);
      cout << arr[index];
   }
}



// int s = 0;
// int e = 15;
// string temp = v[i];
// for (int j = 0; j < 4; j++) {
//    int mid = (s + e) / 2;
//    if (temp[j] == '0') {
//       s = s;
//       e = mid;
//    }
//    else {
//       s = mid + 1;
//       e = e;
//    }
// }
// cout << arr[s];
