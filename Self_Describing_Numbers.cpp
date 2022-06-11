#include <bits/stdc++.h>
#define clr(str , charr) memset(str,charr, sizeof(str))
using namespace  std;


const int mod =  1e9 +5;

#define test int t; cin>>t; while(t--)
#define print( i , output ) cout << "Case #" << i << ": " << output ;

#define ll long long
#define pi 3.1415926


#define l length()
#define preci(x) cout << fixed<<setprecision(x)
#define infmax LONG_LONG_MAX
#define infmin LONG_LONG_MIN
#define bit __builtin_popcountll /*It returns the numbers of set bits in an integer 
(the number of ones in the binary representation of the integer).*/

#define all(v)			(v).begin(),(v).end()
#define sz(v)			(((int)((v).size())))
void fast(){
 ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
}

void solve ()
{
   string s, ret = "self-describing\n";
        int freq[10] = {0};
        cin >> s;
        for (char &i: s) ++freq[i - '0'];
        for (int i = 0, len = s.length(); i < len; ++i) {
            if (s[i] - '0' != freq[i]) {
                ret = "not self-describing\n";
                break;
            }
        }
        cout << ret;
}


int main() 
{
  freopen("self.in", "r", stdin);
  fast();
  test
  solve();
  //calctime();
}
 

