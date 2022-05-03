#include <iostream>
using namespace std;

int main()
{

    cout << "GUESSING GAME" << endl;
    cout << "by Luiz Schons" << endl;
    cout << "-------------------------" << endl;
    cout << "Choose the difficulty level" << endl;
    cout << "E - Easy" << endl;
    cout << "M - Medium" << endl;
    cout << "H - Hard" << endl;

    char level;
    cin >> level;

    int number_of_bets;

    if (level == 'E')
    {
        number_of_bets = 15;
    }
    else if (level = 'M')
    {
        number_of_bets = 10;
    }
    else
    {
        number_of_bets = 3;
    }

    const int SECRET_NUMBER = 42;

    int attempt;

    bool wrong = true;

    int number_of_attempts = 0;

    double score = 1000.0;

    for (number_of_attempts = 1; number_of_attempts <= number_of_bets; number_of_attempts++)
    {
        cout << "Make your attempt:" << endl;

        cin >> attempt;

        cout << "Number of attempts: " << number_of_attempts << endl;

        cout << "Your attempt is: " << attempt << endl;

        double lost_score = abs(attempt - SECRET_NUMBER) / 2.0;

        score = score - lost_score;

        bool right = attempt == SECRET_NUMBER;

        bool bigger = attempt > SECRET_NUMBER;

        bool smaller = attempt < SECRET_NUMBER;

        if (right)
        {
            cout << "Congratulations! You're right." << endl;
            wrong = false;
        }
        else if (bigger)
        {
            cout << "Your attempt was greater than the secret number" << endl;
        }
        else
        {
            cout << "Your attempt was less than the secret number" << endl;
        }
    }

    cout << "END GAME" << endl;
    if (wrong)
    {
        cout << "You lost! Try again." << endl;
    }
    else
    {
        cout << "You finished the game in " << number_of_attempts << " tries." << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Your score: " << score << "." << endl;
    }
}