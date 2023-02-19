#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void Reverse(vector<int>& v) {
    std::reverse(v.begin(), v.end());
}

template<typename T>
void Print(const vector<T>& vec) {
    for (const auto& el : vec) {
        cout << el << " ";
    }
    cout << '\n';
}

int main() {
    vector<int> numbers = {1, 5, 3, 4, 2};
    Reverse(numbers);
    Print(numbers);
}
