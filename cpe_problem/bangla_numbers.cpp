#include <iostream>
#include <iomanip>
using namespace std;

void printBangla(long long n)
{
    // Kuti
    if (n >= 10000000)
    {  
        printBangla(n / 10000000);
        cout <<" kuti";

        n = n % 10000000;
    }

    // Lakh
    if (n >= 100000)
    {
        cout << " " << n / 100000 << " lakh";

        n = n % 100000;
    }

    // Hajar
    if (n >= 1000)
    {
        cout << " " << n / 1000 << " hajar";

        n = n % 1000;
    }

    // Shata
    if (n >= 100)
    {
        cout << " " << n / 100 << " shata";

        n = n % 100;
    }

    // Remaining number: 1–99
    if (n > 0)
    {
        cout << " " << n;
    }
}

int main()
{
    long long n;
    int caseNumber = 1;

    // No T and no sentinel → read until EOF
    while (cin >> n)
    {
        cout << setw(4) << caseNumber << ".";

        if (n == 0)
        {
            cout << " 0";
        }
        else
        {
            printBangla(n);
        }

        cout << '\n';

        caseNumber++;
    }

    return 0;
    
}