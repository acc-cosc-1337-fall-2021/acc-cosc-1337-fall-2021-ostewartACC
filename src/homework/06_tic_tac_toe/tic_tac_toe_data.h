//h
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <fstream>
#include <iostream>

#ifndef TICTACTOEDATA_H
#define TICTACTOEDATA_H

class TicTacToeData : public TicTacToe
{
    public:
        void save_games(const vector<unique_ptr<TicTacToe>>& games);
        vector<unique_ptr<TicTacToe>> get_games();
};

#endif