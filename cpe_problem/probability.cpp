#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int numberOfTestCases;
    cin >> numberOfTestCases;

    while (numberOfTestCases--)
    {
        int numberOfPlayers;
        int targetPlayer;
        double successProbability;

        cin >> numberOfPlayers >> successProbability >> targetPlayer;

        double winningProbability = 0.0;

        if (successProbability > 0.0)
        {
            double failureProbability = 1.0 - successProbability;

            double reachTargetPlayer =
                pow(failureProbability, targetPlayer - 1);

            double atLeastOneSuccessPerRound =
                1.0 - pow(failureProbability, numberOfPlayers);

            winningProbability =
                reachTargetPlayer * successProbability
                / atLeastOneSuccessPerRound;
        }

        cout << fixed << setprecision(4)
             << winningProbability << '\n';
    }

    return 0;
}