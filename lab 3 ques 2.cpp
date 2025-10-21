#include <iostream>
#include <queue>
#include <sstream>
using namespace std;
int main() {
    cout << "Queue Program Demonstration\n";
    cout << "----------------------------\n\n";
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    // Convert the input string into words
    stringstream ss(input);
    string word;
    int queueNum = 1;
    // Each word is treated as a separate queue
    while (ss >> word) {
        queue<char> q; // Queue for each word
        for (char c : word)
            q.push(c);
        // Display the queue content
        cout << "Q" << queueNum << " = ";
        while (!q.empty()) {
            cout << q.front();
            q.pop();
            if (!q.empty()) cout << " -> ";
        }
        cout << endl;
        queueNum++;
    }
    return 0;
}
