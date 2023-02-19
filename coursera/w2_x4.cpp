#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void Print(const vector<string>& vec) {
    cout << vec.size() << " ";
    for (const auto& el : vec) {
        cout << el << " ";
    }
    cout << '\n';
}

size_t NumberOfDays(int month) {
    if (month == 1) return 28;
    if (month%2 == (month > 6)) {
        return 31;
    }
    return 30;
}

void MoveStrings(vector<string>& source, vector<string>& dest) {
    for (const string& str : source) {
    dest.push_back(str);
    }
    source.clear();
}

int main() {
    int current_month = 0;
    vector<vector<string>> plan(31);
    int com_count;
    cin >> com_count;
    for (int i = 0; i < com_count; ++i) {
        string command;
        cin >> command;
        if (command == "ADD") {
            size_t i;
            string s;
            cin >> i >> s;
            plan[i - 1].push_back(s);
        }
        else if (command == "DUMP") {
            size_t i;
            cin >> i;
            Print(plan[i - 1]);
        }
        else { // NEXT
            current_month = (current_month + 1)%12;
            const size_t days = NumberOfDays(current_month);
            for (size_t i = days; i < plan.size(); ++i) {
                MoveStrings(plan[i], plan[days - 1]);
            }
            plan.resize(days);
        }
    }
}
