#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;
    numbers.push_back(12);
    numbers.push_back(43);
    numbers.push_back(83);
    numbers.push_back(33);
    numbers.push_back(86);
    numbers.push_back(91);

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << endl;
    }
    return 0;   
}