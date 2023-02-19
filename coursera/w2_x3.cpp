#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<bool> queue;
    int com_count;
    cin >> com_count;
    for (int i = 0; i < com_count; ++i) {
        string command;
        cin >> command;
        if (command == "WORRY_COUNT") {
            cout << count(queue.begin(), queue.end(), true) << '\n';
        }
        else {
            size_t operand;
            cin >> operand;
            if (command == "WORRY") {
                queue[operand] = true;
            }
            else if (command == "QUIET") {
                queue[operand] = false;
            }
            else { // COME
                queue.resize(queue.size() + operand);
            }
        }
    }
}
