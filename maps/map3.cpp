#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> scores;

    scores["Jean"] = 95;
    scores["Anna"] = 88;
    scores["Bob"] = 91;

    cout << scores["Jean"] << '\n';
    cout << scores["Bob"] << '\n';

    scores["Anna"] = 88;
    scores["Bob"] = 91;
    scores["Jean"] = 95;

    cout << scores["Anna"] << "\n";
    cout << scores["Bob"] << "\n";
    cout << scores["Jean"] << "\n";

    return 0;
}