//h
#include <string>
#include <vector>
#include <iostream>
#include "tic_tac_toe.h"

using std::string; using std::vector; using std::ostream;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
public:
    void save_game(TicTacToe b);
    void get_winner_totals(int& x, int& o, int& t);

private:
    void update_winner_count(string winner);
    vector<TicTacToe> games;
    int x_wins = 0;
    int o_wins = 0;
    int ties = 0;

friend ostream& operator<<(ostream & out, const TicTacToeManager & manager);
};

#endif