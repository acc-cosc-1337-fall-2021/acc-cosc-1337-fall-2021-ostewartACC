//h
#include "tic_tac_toe.h"

#ifndef TICTACTOE4_H
#define TICTACTOE4_H

class TicTacToe4 : public TicTacToe
{
    public:
        TicTacToe4() : TicTacToe(4){}
        TicTacToe4(vector<string> p, string win) : TicTacToe(p, win){}
    
    private:
        bool check_column_win() override;
        bool check_row_win() override;
        bool check_diagonal_win() override;
};

#endif