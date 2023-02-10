#include <iostream>
using namespace std;

const int MAXN = 1000500;
const int MAXVALUE = 100000500;
int n;
int a[MAXN];


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxa = -MAXVALUE;
    for (int i = 0; i < n; ++i) {
        if (maxa < a[i]) {
            maxa = a[i];
        }
    }

    // посик второго максимума

    int max2a = -MAXVALUE;
    for (int i = 0; i < n; ++i) {
        if (a[i] != maxa) {
            if (max2a < a[i]) {
                max2a = a[i];
            }
        }
    }

    cout << max2a << "\n";

    return 0;
}