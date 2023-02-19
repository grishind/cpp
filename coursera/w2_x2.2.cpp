#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> Reversed(const vector<int>& v) {
    return vector<int>(v.crbegin(), v.crend());
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
    Print(Reversed(numbers));
}
