#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    bool openingQuote = true;

    while (getline(cin, line)) {

        for (int i = 0; i < line.length(); i++) {

            if (line[i] == '"') {

                if (openingQuote) {
                    cout << "``";
                } else {
                    cout << "''";
                }

                openingQuote = !openingQuote;
            }
            else {
                cout << line[i];
            }
        }

        cout << '\n';
    }

    return 0;
}