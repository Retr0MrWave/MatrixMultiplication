#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

vector < vector <ll> > MatrixMult(vector < vector <ll> > a, vector < vector <ll> > b)
{
    ll n = a.size();
    ll m = a[0].size();
    ll k = b[0].size();
    vector < vector <ll> > c(n);
    for (ll i = 0; i < n; i++)
        c[i].resize(k);
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < k; j++)
        {
            c[i][j] = 0;
            for (ll r = 0; r < m; r++)
                c[i][j] += a[i][r] * b[r][j];
        }
    return c;
}

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll t;
    vector <ll> temp;
    vector < vector <ll> > a, b, c;
    for (ll i = 0; i < n; i++)
    {
        temp.clear();
        for (ll j = 0; j < m; j++)
        {
            cin >> t;
            temp.push_back(t);
        }
        a.push_back(temp);
    }
    for (ll i = 0; i < m; i++)
    {
        temp.clear();
        for (ll j = 0; j < k; j++)
        {
            cin >> t;
            temp.push_back(t);
        }
        b.push_back(temp);
    }
    c = MatrixMult(a, b);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < k; j++)
            cout << c[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
