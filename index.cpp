#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void)
{
    const int N = 3;
    int user_turn, computer_turn;
    int user_score = 0, computer_score = 0;
    int max_score;
    cout << "\nEnter max score:\t";
    cin >> max_score;
    srand(time(0)); // seed to generate random number for computer's turn
    while (user_score != max_score || computer_score != max_score)
    {
        cout << "\nEnter:\n1 for Stone\n2 for Paper\n3 for Scissor\n";
        cout << "\nEnter your turn:\t";
        cin >> user_turn;
        computer_turn = (rand() % N) + 1;
        if ((user_turn == 1 && computer_turn == 1) || (user_turn == 2 && computer_turn == 2) || (user_turn == 3 && computer_turn == 3))
        {
            cout << "\nDraw, both entered same.\n";
        }
    }
    return 0;
}