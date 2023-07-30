/**
<<<<<<< HEAD
 * https://www.beecrowd.com.br/judge/pt/problems/view/1483
 * Ad hoc
=======
 * [Nome da questão]
 * beecrowd | [Número]
 * [Link]
 * [Assuntos]
>>>>>>> main
 */

#include <bits/stdc++.h>

using namespace std;

<<<<<<< HEAD
#define SPEED cin.tie(0)->sync_with_stdio(0);
#define db(x) cout << #x << ": " << x << endl
#define db_pair(x) cout << #x << ": " << x.f << ", " << x.s << endl
=======
#define db(x) cout << #x << ": " << x << endl
>>>>>>> main
#define cv(vector)        \
    for (auto x : vector) \
        cout << x << " "; \
    cout << endl
#define cm(map)                             \
    for (auto e : map)                      \
        cout << e.first << " " << e.second; \
    cout << endl
#define FOR(i, a, b) for (ll i = a; i < (b); ++i)
#define foreach(a, b) for (auto &(a) : (b))
#define rep(i, n) FOR(i, 0, n)
#define Rep(i, a, b) for (ll i = a; i >= (b); i--)
#define all(x) begin(x), end(x)
#define sz(x) (ll)(x).size()
#define pb push_back
#define pf push_front
#define endl "\n"
#define f first
#define s second

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
<<<<<<< HEAD
typedef long double ld;

ll pegaGrupoDoBicho(ll raw1) {
    ll n1 = raw1 % 100;

    if(n1 == 100 || n1 == 0) return 24;
    if(n1 % 4 == 0) return n1 % 100 / 4 - 1;
    return (n1 - (n1 % 4)) / 4;
}

int main(int argc, char **argv) {
    SPEED;
    ld v;
    ll m, n;

    cout << fixed;
    cout.precision(2);
    while(cin >> v >> n >> m) {
        if(v == 0 && n == 0 && m ==0)
            break;

        string aposta = "0000" + to_string(m);
        string sorteio = "0000" + to_string(n);

        if(aposta.substr(aposta.size() - 4, 4) == sorteio.substr(sorteio.size() - 4, 4)) {
            cout << v * 3000.0 << endl;
            continue;
        }

        if(aposta.substr(aposta.size() - 3, 3) == sorteio.substr(sorteio.size() - 3, 3)) {
            cout << v * 500.0 << endl;
            continue;
        }

        if(aposta.substr(aposta.size() - 2, 2) == sorteio.substr(sorteio.size() - 2, 2)) {
            cout << v * 50.0 << endl;
            continue;
        }

        bool ganhou = false;

        for(ll i = n; i<=n+4; ++i) {
            if(pegaGrupoDoBicho(i) == pegaGrupoDoBicho(m)) {
                cout << v * 16.0 << endl;
                ganhou = true;
                break;
            }
        }

        if(!ganhou) cout << 0.00 << endl;
    }

    return 0;
}
=======

int main(int argc, char **argv) {
    cin.tie(0)->sync_with_stdio(0);
    double aposta;
    string numeroApostado, valorSorteado;

    while (cin >> aposta >> numeroApostado >> valorSorteado) {
        if (aposta == 0 && numeroApostado == "0" && valorSorteado == "0") {
            return 0;
        }
        cout << fixed;
        cout << setprecision(2);
        while (sz(numeroApostado) < 4) {
            numeroApostado = "0" + numeroApostado;
        }

        while (sz(valorSorteado) < 4) {
            valorSorteado = "0" + valorSorteado;
        }

        if (numeroApostado.substr(sz(numeroApostado) - 4) == valorSorteado.substr(sz(valorSorteado) - 4)) {
            cout << aposta * 3000.00 << endl;
            continue;
        } else if (numeroApostado.substr(sz(numeroApostado) - 3) == valorSorteado.substr(sz(valorSorteado) - 3)) {
            cout << aposta * 500.00 << endl;
            continue;
        } else if (numeroApostado.substr(sz(numeroApostado) - 2) == valorSorteado.substr(sz(valorSorteado) - 2)) {
            cout << aposta * 50.00 << endl;
            continue;
        } else {
            string NumString1 = numeroApostado.substr(sz(numeroApostado) - 2);
            string NumString2 = valorSorteado.substr(sz(valorSorteado) - 2);
            if (NumString1 == "00") {
                NumString1 = "100";
            }

            if (NumString2 == "00") {
                NumString2 = "100";
            }

            if ((ceil(stof(NumString1) / 4)) == ceil(stof(NumString2) / 4)) {
                cout << aposta * 16.00 << endl;
                continue;
            }
        }
        cout << 0.00 << endl;
    }
    return 0;
}

>>>>>>> main
