#include <iostream>
#include <vector>
#include <string>

using namespace std;

void MoveStrings(vector<string>& source, vector<string>& dest) {
    for (const string& str : source) {
	dest.push_back(str);
    }
    source.clear();
}

template<typename T>
void Print(const vector<T>& vec) {
    for (const auto& el : vec) {
        cout << el << " ";
    }
    cout << '\n';
}

int main() {
    vector<string> source = {"a", "b", "c"};
    vector<string> destination = {"z"};
    MoveStrings(source, destination);
    Print(source);
    Print(destination);
}
