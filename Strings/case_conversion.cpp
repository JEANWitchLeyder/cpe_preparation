#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    string line;

    for (int i = 0; i < n; i++) {
        getline(cin, line);

        for (char &letter : line) {
            if (letter >= 'A' && letter <= 'Z') {
                letter += 32;
            }
            else if (letter >= 'a' && letter <= 'z') {
                letter -= 32;
            }
        }

        cout << line << '\n';
    }

    return 0;
}