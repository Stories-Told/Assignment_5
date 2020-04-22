#include <iostream>

using namespace std;

class TicTacToe
{
public:
    TicTacToe();
    void play();
    void printBoard();

private:
    char spaces[9];
    char turn;
    bool valid = true;
    bool validTurn = true;
    bool skippedTurn = false;
    int selection;
    bool checkWinner();

};

/// Main Program to call game
int main()
{
    /// Declare variables
    TicTacToe game;

    /// Play game
    game.play();


    /// Program complete
    return 0;
}

TicTacToe::TicTacToe()
{
    spaces[0] = '1';
    spaces[1] = '2';
    spaces[2] = '3';
    spaces[3] = '4';
    spaces[4] = '5';
    spaces[5] = '6';
    spaces[6] = '7';
    spaces[7] = '8';
    spaces[8] = '9';
    turn = 'X';
}

void TicTacToe::play()
{
    int turnsTaken = 0; // Count the turns that have been taken - Used to check for a draw
    int rounds = 1; // Count the rounds taken

    while(valid)
    {
        if(turnsTaken > 0)
        {
            system("CLS");
        }
        if(turnsTaken == 9)
        {
            break;
        }

        printBoard();

        // Player one's turn
        cout << "Player one (X) select a space (1-9): ";
        cin >> selection;
        cout << endl;
        turnsTaken++; // Increase the turn by 1 in order to check for a draw
        if(validTurn == false && turnsTaken % 2 != 0)
        {
            selection = 10;
        }

        else if(validTurn == false && turnsTaken % 2 == 0)
        {
            selection = 10;
        }

        switch(selection)
        {
        case 1:
            if(spaces[0] == 'X' || spaces[0] == 'O')
            {
                cout << "INVALID - SPACE ALREADY IN PLAY - PLAYER 2s TURN WILL BE SKIPPED" << "\n\n";
                skippedTurn = true;
                validTurn = false;
                turnsTaken--;
                break;
            }
            spaces[0] = 'X';
            break;
        case 2:
            if(spaces[1] == 'X' || spaces[1] == 'O')
            {
                cout << "INVALID - SPACE ALREADY IN PLAY - PLAYER 2s TURN WILL BE SKIPPED" << "\n\n";
                skippedTurn = true;
                validTurn = false;
                turnsTaken--;
                break;
            }
            spaces[1] = 'X';
            break;
        case 3:
            if(spaces[2] == 'X' || spaces[2] == 'O')
            {
                cout << "INVALID - SPACE ALREADY IN PLAY - PLAYER 2s TURN WILL BE SKIPPED" << "\n\n";
                skippedTurn = true;
                validTurn = false;
                turnsTaken--;
                break;
            }
            spaces[2] = 'X';
            break;
        case 4:
            if(spaces[3] == 'X' || spaces[3] == 'O')
            {
                cout << "INVALID - SPACE ALREADY IN PLAY - PLAYER 2s TURN WILL BE SKIPPED" << "\n\n";
                skippedTurn = true;
                validTurn = false;
                turnsTaken--;
                break;
            }
            spaces[3] = 'X';
            break;
        case 5:
            if(spaces[4] == 'X' || spaces[4] == 'O')
            {
                cout << "INVALID - SPACE ALREADY IN PLAY - PLAYER 2s TURN WILL BE SKIPPED" << "\n\n";
                skippedTurn = true;
                validTurn = false;
                turnsTaken--;
                break;
            }
            spaces[4] = 'X';
            break;
        case 6:
            if(spaces[5] == 'X' || spaces[5] == 'O')
            {
                cout << "INVALID - SPACE ALREADY IN PLAY - PLAYER 2s TURN WILL BE SKIPPED" << "\n\n";
                skippedTurn = true;
                validTurn = false;
                turnsTaken--;
                break;
            }
            spaces[5] = 'X';
            break;
        case 7:
            if(spaces[6] == 'X' || spaces[6] == 'O')
            {
                cout << "INVALID - SPACE ALREADY IN PLAY - PLAYER 2s TURN WILL BE SKIPPED" << "\n\n";
                skippedTurn = true;
                validTurn = false;
                turnsTaken--;
                break;
            }
            spaces[6] = 'X';
            break;
        case 8:
            if(spaces[7] == 'X' || spaces[7] == 'O')
            {
                cout << "INVALID - SPACE ALREADY IN PLAY - PLAYER 2s TURN WILL BE SKIPPED" << "\n\n";
                skippedTurn = true;
                validTurn = false;
                turnsTaken--;
                break;
            }
            spaces[7] = 'X';
            break;
        case 9:
            if(spaces[8] == 'X' || spaces[8] == 'O')
            {
                cout << "INVALID - SPACE ALREADY IN PLAY - PLAYER 2s TURN WILL BE SKIPPED" << "\n\n";
                skippedTurn = true;
                validTurn = false;
                turnsTaken--;
                break;
            }
            spaces[8] = 'X';
            break;

        default:
            turnsTaken--;
            cout << "TURN SKIPPED" << "\n\n";
            validTurn = true;
            skippedTurn = true;
            break;
        }

        if (skippedTurn == true)
        {
            validTurn = false;
        }

        printBoard();
        if(checkWinner() == false)
        {
            break;
        }
        if(turnsTaken == 9)
        {
            break;
        }

        // Player two's turn
        cout << "Player two (O) select a space (1-9): ";
        cin >> selection;
        cout << endl;
        turnsTaken++; // Increase the turn by 1 in order to check for a draw
        if(validTurn == false)
        {
            selection = 10;
        }

        switch(selection)
        {
        case 1:
            if(spaces[0] == 'X' || spaces[0] == 'O')
            {
                cout << "INVALID - SPACE ALREADY IN PLAY - PLAYER 1s TURN WILL BE SKIPPED" << "\n\n";
                skippedTurn = true;
                validTurn = false;
                turnsTaken--;
                break;
            }
            spaces[0] = 'O';
            break;
        case 2:
            if(spaces[1] == 'X' || spaces[1] == 'O')
            {
                cout << "INVALID - SPACE ALREADY IN PLAY - PLAYER 1s TURN WILL BE SKIPPED" << "\n\n";
                skippedTurn = true;
                validTurn = false;
                turnsTaken--;
                break;
            }
            spaces[1] = 'O';
            break;
        case 3:
            if(spaces[2] == 'X' || spaces[2] == 'O')
            {
                cout << "INVALID - SPACE ALREADY IN PLAY - PLAYER 1s TURN WILL BE SKIPPED" << "\n\n";
                skippedTurn = true;
                validTurn = false;
                turnsTaken--;
                break;
            }
            spaces[2] = 'O';
            break;
        case 4:
            if(spaces[3] == 'X' || spaces[3] == 'O')
            {
                cout << "INVALID - SPACE ALREADY IN PLAY - PLAYER 1s TURN WILL BE SKIPPED" << "\n\n";
                skippedTurn = true;
                validTurn = false;
                turnsTaken--;
                break;
            }
            spaces[3] = 'O';
            break;
        case 5:
            if(spaces[4] == 'X' || spaces[4] == 'O')
            {
                cout << "INVALID - SPACE ALREADY IN PLAY - PLAYER 1s TURN WILL BE SKIPPED" << "\n\n";
                skippedTurn = true;
                validTurn = false;
                turnsTaken--;
                break;
            }
            spaces[4] = 'O';
            break;
        case 6:
            if(spaces[5] == 'X' || spaces[5] == 'O')
            {
                cout << "INVALID - SPACE ALREADY IN PLAY - PLAYER 1s TURN WILL BE SKIPPED" << "\n\n";
                skippedTurn = true;
                validTurn = false;
                turnsTaken--;
                break;
            }
            spaces[5] = 'O';
            break;
        case 7:
            if(spaces[6] == 'X' || spaces[6] == 'O')
            {
                cout << "INVALID - SPACE ALREADY IN PLAY - PLAYER 1s TURN WILL BE SKIPPED" << "\n\n";
                skippedTurn = true;
                validTurn = false;
                turnsTaken--;
                break;
            }
            spaces[6] = 'O';
            break;
        case 8:
            if(spaces[7] == 'X' || spaces[7] == 'O')
            {
                cout << "INVALID - SPACE ALREADY IN PLAY - PLAYER 1s TURN WILL BE SKIPPED" << "\n\n";
                skippedTurn = true;
                validTurn = false;
                turnsTaken--;
                break;
            }
            spaces[7] = 'O';
            break;
        case 9:
            if(spaces[8] == 'X' || spaces[8] == 'O')
            {
                cout << "INVALID - SPACE ALREADY IN PLAY - PLAYER 1s TURN WILL BE SKIPPED" << "\n\n";
                skippedTurn = true;
                validTurn = false;
                turnsTaken--;
                break;
            }
            spaces[8] = 'O';
            break;

        default:
            turnsTaken--;
            cout << "TURN SKIPPED" << "\n\n";
            validTurn = true;
            skippedTurn = true;
            break;
        }

        if(turnsTaken % 2 != 0)
        {
            validTurn = true;
        }

        if (skippedTurn == true)
        {
            skippedTurn = false;
            cin.ignore();
            cout << "INCOMPLETE ROUND - HIT ENTER TO CONTINUE" << endl;
            cin.ignore();
        }
        else
        {
            cin.ignore();
            cout << "ROUND " << rounds << " COMPLETE - HIT ENTER TO CONTINUE" << endl;
            cin.ignore();
            rounds++;
        }


        if(checkWinner() == false)
        {
            break;
        }
        if(turnsTaken == 9)
        {
            break;
        }
    }

    // Determiner who the winner is
    if((spaces[0] == 'X' && spaces[1] == 'X' && spaces[2] == 'X') ||
            (spaces[3] == 'X' && spaces[4] == 'X' && spaces[5] == 'X') ||
            (spaces[6] == 'X' && spaces[7] == 'X' && spaces[8] == 'X') ||
            (spaces[0] == 'X' && spaces[3] == 'X' && spaces[6] == 'X') ||
            (spaces[1] == 'X' && spaces[4] == 'X' && spaces[7] == 'X') ||
            (spaces[2] == 'X' && spaces[5] == 'X' && spaces[8] == 'X') ||
            (spaces[0] == 'X' && spaces[4] == 'X' && spaces[8] == 'X') ||
            (spaces[2] == 'X' && spaces[4] == 'X' && spaces[6] == 'X'))
    {
        cout << "\nPlayer One WINS" << endl;
    }
    else if((spaces[0] == 'O' && spaces[1] == 'O' && spaces[2] == 'O') ||
            (spaces[3] == 'O' && spaces[4] == 'O' && spaces[5] == 'O') ||
            (spaces[6] == 'O' && spaces[7] == 'O' && spaces[8] == 'O') ||
            (spaces[0] == 'O' && spaces[3] == 'O' && spaces[6] == 'O') ||
            (spaces[1] == 'O' && spaces[4] == 'O' && spaces[7] == 'O') ||
            (spaces[2] == 'O' && spaces[5] == 'O' && spaces[8] == 'O') ||
            (spaces[0] == 'O' && spaces[4] == 'O' && spaces[8] == 'O') ||
            (spaces[2] == 'O' && spaces[4] == 'O' && spaces[6] == 'O'))
    {
        cout << "\nPlayer Two WINS" << endl;
    }
    else
    {
        cout << "DRAW" << endl;
    }

}

void TicTacToe::printBoard()
{
    cout << "   |   |   " << endl;
    cout << " " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << " " << endl;
    cout << "   |   |   " << endl;
    cout << "---+---+---" << endl;
    cout << "   |   |   " << endl;
    cout << " " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << " " << endl;
    cout << "   |   |   " << endl;
    cout << "---+---+---" << endl;
    cout << "   |   |   " << endl;
    cout << " " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << " " << endl;
    cout << "   |   |   " << endl;
    return;
}

bool TicTacToe::checkWinner()
{
    /// Check for 8 possible winning combinations
    if((spaces[0] == spaces[1] && spaces[1] == spaces[2]) ||
            (spaces[3] == spaces[4] && spaces[4] == spaces[5]) ||
            (spaces[6] == spaces[7] && spaces[7] == spaces[8]) ||
            (spaces[0] == spaces[3] && spaces[3] == spaces[6]) ||
            (spaces[1] == spaces[4] && spaces[4] == spaces[7]) ||
            (spaces[2] == spaces[5] && spaces[5] == spaces[8]) ||
            (spaces[0] == spaces[4] && spaces[4] == spaces[8]) ||
            (spaces[2] == spaces[4] && spaces[4] == spaces[6]))
    {
        valid = false;
        return valid;
    }
    else
    {
        valid = true;
        return valid;
    }
}
