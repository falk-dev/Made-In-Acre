/**
 * https://vjudge.net/contest/631137#problem/C
 * C - Factory Machines
 * busca binaria
 */

#include <bits/stdc++.h>

using namespace std;

#define SPEED cin.tie(0)->sync_with_stdio(0);
#define db(x) cout << #x << ": " << x << endl
#define db_pair(x) cout << #x << ": " << x.f << ", " << x.s << endl
#define print_vector(vector) \
    for (auto x : vector)    \
        cout << x << " ";    \
    cout << endl
#define print_map(map)                      \
    for (auto e : map)                      \
        cout << e.first << " " << e.second; \
    cout << endl
#define FOR(i, a, b) for (ll i = a; i < (b); ++i)
#define foreach(a, b) for (auto&(a) : (b))
#define rep(i, n) FOR(i, 0, n)
#define Rep(i, a, b) for (ll i = a; i >= (b); i--)
#define all(x) begin(x), end(x)
#define sz(x) (ll)(x).size()
#define pb push_back
#define pf push_front
#define endl "\n"
#define f first
#define s second
#define MOD 1e9 + 7
#define log(x) cout << x << endl

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;

bool ehPossivel(vll& machines, ll products, ll tempo) {
    bool resp = true;
    
    ll total = 0;
    for(ll i=0;i<machines.size();i++) {
        total += tempo / machines[i];

        if(total >= products) return true;
    }

    return false;
}

ll binary_search(vll& machines, ll products) {
    ll esquerda = 1, direita = 1e18;
    ll resp = direita;

    while (esquerda <= direita) {
        ll meio = (esquerda + direita) / 2;

        if (ehPossivel(machines, products, meio)) {
            resp = meio;
            direita = meio - 1;
        } else {
            esquerda = meio + 1;
        }
    }

    return resp;
}

int main() {
    SPEED;

    ll n, t;
    cin >> n >> t;

    vll machines(n);
    rep(i, n) cin >> machines[i];

    cout << binary_search(machines, t) << endl;

    return 0;
}
