#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
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
    system("cls");
    cout << "\nStone Paper Scissor Game\n";
    while (user_score < max_score && computer_score < max_score)
    {
        cout << "\nEnter:\n1 for Stone\n2 for Paper\n3 for Scissor\n";
        cout << "\nEnter your turn:\t";
        cin >> user_turn;
        computer_turn = (rand() % N) + 1;
        cout << "\nYou entered:\t" << user_turn << endl;
        cout << "\nComputer entered:\t" << computer_turn << endl;
        if ((user_turn == 1 && computer_turn == 1) || (user_turn == 2 && computer_turn == 2) || (user_turn == 3 && computer_turn == 3))
        {
            cout << "\nDraw, both entered same.\n";
            cout << "\nUser's Score is:\t" << user_score << endl;
            cout << "\nComputer's Score is:\t" << computer_score << endl;
        }
        else if (user_turn == 1 && computer_turn == 2)
        {
            cout << "\nComputer gets +1 point.\n";
            computer_score++;
            cout << "\nUser's Score is:\t" << user_score << endl;
            cout << "\nComputer's Score is:\t" << computer_score << endl;
        }
        else if (user_turn == 1 && computer_turn == 3)
        {
            cout << "\nYou get +1 point.\n";
            user_score++;
            cout << "\nUser's Score is:\t" << user_score << endl;
            cout << "\nComputer's Score is:\t" << computer_score << endl;
        }

        else if (user_turn == 2 && computer_turn == 3)
        {
            cout << "\nComputer gets +1 point.\n";
            computer_score++;
            cout << "\nUser's Score is:\t" << user_score << endl;
            cout << "\nComputer's Score is:\t" << computer_score << endl;
        }
        else if (user_turn == 2 && computer_turn == 1)
        {
            cout << "\nYou get +1 point.\n";
            user_score++;
            cout << "\nUser's Score is:\t" << user_score << endl;
            cout << "\nComputer's Score is:\t" << computer_score << endl;
        }

        else if (user_turn == 3 && computer_turn == 1)
        {
            cout << "\nComputer gets +1 point.\n";
            computer_score++;
            cout << "\nUser's Score is:\t" << user_score << endl;
            cout << "\nComputer's Score is:\t" << computer_score << endl;
        }
        else if (user_turn == 3 && computer_turn == 2)
        {
            cout << "\nYou get +1 point.\n";
            user_score++;
            cout << "\nUser's Score is:\t" << user_score << endl;
            cout << "\nComputer's Score is:\t" << computer_score << endl;
        }
    }
    Sleep(2000);
    system("cls");
    cout << "\nStone Paper Scissor Game\n";
    cout << "\nResult is:\n";
    if (user_score > computer_score)
    {
        cout << "\nCongratulations!!! You won." << endl;
    }
    else
    {
        cout << "\nYou lost, better luck next time." << endl;
    }

    return 0;
}