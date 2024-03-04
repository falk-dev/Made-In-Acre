#include <bits/stdc++.h>

using namespace std;

#define speed                   \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define MOD 1000000007

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ull> vull;
typedef vector<string> vstr;
typedef vector<vll> vvll;

#define endl "\n"
#define print_vector(vector) \
  for (auto x : vector)      \
    cout << x << " ";        \
  cout << endl
#define db(x) cout << #x << ": " << x << endl
#define sz(x) (ll)(x).size()
#define all(x) begin(x), end(x)
#define pb push_back
#define pf push_front
#define mp make_pair
#define f first
#define s second

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int n;
vector<pii> coords = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

bool eh_valido(pii coord) {
  return coord.f >= 0 && coord.f < n && coord.s >= 0 && coord.s < n;
}

void solve() {
  cin >> n;
  vector<string> board(n);
  for(auto &i : board) {
    cin >> i;
  }

  int ans = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(board[i][j] == '0') continue;

      int qtd = 0;
      for(auto coord : coords) {
        int x = i + coord.f;
        int y = j + coord.s;
        if(!eh_valido(mp(x, y))) continue;

        if(board[x][y] == '1') qtd++;
      }

      if(qtd == 1) {
        ans = 1;
        // db(i);
        // db(j);
        // db(n);
        // db(board[i][j]);
        break;
      }
    }

    if(ans) break;
  }

  cout << (ans ? "TRIANGLE" : "SQUARE") << endl;
}

int main()
{
  speed;

  int t; cin >> t;
  while(t--) solve();

  return 0;
}
