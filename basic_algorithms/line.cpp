#include <iostream>
using namespace std;
#include <vector>


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

    int maxa = -MAXVALUE - 1;
    for (int i = 0; i < n; ++i) {
        if (maxa < a[i]) {
            maxa = a[i];
        }
    }

    cout << maxa << "\n";

    return 0;
}