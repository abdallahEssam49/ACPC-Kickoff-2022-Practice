#include <bits/stdc++.h>
#define clr(str , charr) memset(str,charr, sizeof(str))
using namespace  std;
using namespace std::chrono;

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

ll gcd(ll a, ll b){
    if(b == 0) return a; return gcd(b, a % b);
}
 
ll lcm(ll x, ll y){return x / gcd(x, y) * y;};

ll fastpow(ll a,ll b)
{
  ll wynik=1;
  while (b)
  {
    if (b&1)wynik=(wynik*a)%mod; a=(a*a)%mod; b>>=1;
  }
  return wynik;
}

bool isp(ll a)
{
  if (a == 2)return 1; if (a%2 == 0|| a==1)return false;
  for (ll i =3 ; i*i<=a ; i+=2)if (a %i ==0)return false;
  return true;
}

// a substring is a contiguous sequence of characters within a string.
// Prefixes and suffixes are special cases of substrings. A prefix of a string S
// A prefix can be seen as a special case of a substring. 
// A suffix can be seen as a special case of a substring. 


bool isPalindrome(string S)
{
    string P = S;reverse(P.begin(), P.end());if (S == P)return true;else return false;
}
bool is_prefix(string str1, string str2)
{
    return str1.l <= str2.l && str2.substr(0, str1.size()) == str1;
}


int dx4[] = { -1 , 0 , 0  ,1  };
int dy4[] = { 0  , 1 , -1 , 0 };

//int dx[] = {2,-2,2,-2,1,1,-1,-1}, dy[] = {1,1,-1,-1,2,-2,2,-2}; // knight moves

int dx8[] = { 0 , 0 , 1 , -1 , 1 , -1 , 1 , -1 };
int dy8[] = { 1 , -1 , 0 , 0 , 1 , -1 , -1 , 1 };

bool valid(int i , int j , int n , int m){return i >= 0 && j >= 0 && i < n && j < m;}
//bool valid(int i , int j){return i >= 0 && j >= 0 && i < n && j < m;}






int vis[10];
void solve ()
{
        string s;
        cin >> s;
        int n = s.length(), ret = n;
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'D') {
                ret = i;
                break;
            }
        }
        cout << ret << '\n';
}

int main() 
{
  freopen("adam.in", "r", stdin);
  fast();
  test
  solve();
  //calctime();
}

