#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int n;
    cin >> n;
    vector<int> numbers;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        numbers.push_back(a);
    }

    for (int n : numbers) {
        cout << n << "  ";
    }
    
    return 0;
}