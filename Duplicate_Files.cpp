#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(0);
typedef long long ll;
int main (){
    FAST
    freopen( "files.in", "r", stdin );
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        vector < pair<int, string> > a(n);
        map <string, int> mp;
        for (int i = 0; i < n; ++i) {
            cin >> a[i].second >> a[i].first;
        }

        sort(a.begin(), a.end());
        cout << a[0].first << " ";
        ++mp[ a[0].second ];
        for (int i = 1; i < n; ++i) {
            if (mp[ a[i].second ] == 0) {
                cout << a[i].first << " ";
                ++mp[ a[i].second ];
            }
        }
        cout << "\n";
    }
    return 0;
}
