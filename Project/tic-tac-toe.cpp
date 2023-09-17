#include <iostream>
#include <vector>

using namespace std;

void displayBoard(const vector<vector<char>> &board) {  //outer vector row represent kr rhi h or inner vector 
//columns ko
    cout << " 1 | 2 | 3\n";
    cout << "---|---|---\n";
    cout << " 4 | 5 | 6\n";
    cout << "---|---|---\n";
    cout << " 7 | 8 | 9\n\n";

    cout << "Current Board:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << board[i][j] << " ";
            if (j < 2) cout << "|";
        }
        cout << endl;
        if (i < 2) cout << "---|---|---\n";
    }
    cout << endl;
}

bool checkWin(const vector<vector<char>> &board, char player) {
    for (int i = 0; i < 3; i++) {
        // Check rows and columns
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }

  
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

void playTicTacToe() {
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char currentPlayer = 'X';
    int moves = 0;

    cout << "Welcome to Tic-Tac-Toe!\n";
    displayBoard(board);

    while (moves < 9) {
        int move;
        cout << "Player " << currentPlayer << ", enter your move (1-9): ";
        cin >> move;

        if (move < 1 || move > 9 || board[(move - 1) / 3][(move - 1) % 3] != ' ') {
            cout << "Invalid move. Try again.\n";
            continue;
        }

        board[(move - 1) / 3][(move - 1) % 3] = currentPlayer;
        displayBoard(board);

        if (checkWin(board, currentPlayer)) {
            cout << "Player " << currentPlayer << " wins!\n";
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        moves++;
    }

    if (moves == 9) {
        cout << "It's a draw!\n";
    }
}

int main() {
    playTicTacToe();
    return 0;
}
